/*
 * XREFs of ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x140045DE0
 * Callers:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400457F0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x140045A40 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400463F0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x14004A060 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     NdisTryAcquireNicActive @ 0x14007A8B0 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400912FC (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140091354 (-ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140045EC0 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x140048D50 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

__int64 __fastcall ndisAoAcActiveRefIncrement(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  int v7; // eax
  __int64 v8; // r10

  *(_DWORD *)(a1 + 388) |= 2u;
  v3 = *(_DWORD *)(a1 + 52) + 1;
  v4 = a2;
  *(_DWORD *)(a1 + 52) = v3;
  v5 = *(_DWORD *)(a1 + 4LL * a2 + 468) + 1;
  *(_DWORD *)(a1 + 4LL * a2 + 468) = v5;
  if ( *(_BYTE *)(a1 + 1081) && v5 == 1 )
  {
    if ( a2 != 15 || ndisPowerRefManagementState )
    {
      if ( !*(_DWORD *)(a1 + 528) || ndisPowerRefManagementState == 1 )
      {
        v7 = *(_DWORD *)(a1 + 376);
        if ( !v7 || v7 == 3 )
        {
          v8 = MEMORY[0xFFFFF78000000008];
          if ( a2 )
          {
            if ( *(int *)(a1 + 468) > 0 )
              ndisCloseTimeInterval((unsigned __int64 *)(a1 + 544), (unsigned __int64 *)(a1 + 536));
          }
          else if ( v3 != 1 )
          {
            return v3;
          }
          *(_QWORD *)(a1 + 16 * (v4 + 34)) = v8;
        }
      }
    }
    else
    {
      ndisAoAcPauseRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
      *(_QWORD *)(a1 + 784) = MEMORY[0xFFFFF78000000008];
    }
  }
  return v3;
}
