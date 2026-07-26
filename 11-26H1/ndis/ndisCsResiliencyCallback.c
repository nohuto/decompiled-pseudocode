/*
 * XREFs of ndisCsResiliencyCallback @ 0x140060D00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140060E30 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisCsResiliencyCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  KIRQL v6; // al
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  KIRQL i; // di
  unsigned __int8 v9; // dl

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4;
  if ( !v4 && ValueLength == 4 && Value && ndisCsResiliency != (*Value != 0) )
  {
    ndisCsResiliency = *Value != 0;
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v7 = ndisMiniportList;
    for ( i = v6; v7; v7 = v7->NextGlobalMiniport )
    {
      if ( v7->AoAc && (unsigned __int8)ndisReferenceMiniport(v7, 0x67u) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, i);
        if ( v7->AoAc )
          ndisCsResiliencyChange(v7, v9);
        i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport(v7, 0x67u);
      }
    }
    KeReleaseSpinLock(&ndisMiniportListLock, i);
  }
  return 0LL;
}
