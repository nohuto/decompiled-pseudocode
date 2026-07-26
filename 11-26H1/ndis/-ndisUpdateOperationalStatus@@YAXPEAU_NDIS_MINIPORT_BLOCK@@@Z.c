/*
 * XREFs of ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BA50
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140086340 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x140182FE0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14004E440 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004E540 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall ndisUpdateOperationalStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // di
  char v4; // al
  unsigned __int64 *p_Lock; // rcx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int ifOperStatusFlags; // eax
  unsigned __int8 v8[16]; // [rsp+20h] [rbp-49h] BYREF
  struct _NDIS_STATUS_INDICATION v9; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v10[4]; // [rsp+A0h] [rbp+37h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  v8[0] = v2;
  v3 = v2;
  v4 = ndisIfSetInterfaceState(a1, 1, v2);
  a1->MiniportThread = 0LL;
  p_Lock = &a1->Lock;
  if ( v4 )
  {
    KeReleaseSpinLock(p_Lock, v3);
    ndisMAcquireStInLockWithSpinLock(a1, v8);
    IfBlock = a1->IfBlock;
    v10[0] = 786816;
    v10[1] = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    memset(&v9.Guid, 0, 52);
    v10[2] = ifOperStatusFlags;
    *((_DWORD *)&v9.Header + 1) = 0;
    v9.StatusBufferSize = 12;
    memset(&v9.PortNumber, 0, 32);
    v9.StatusBuffer = v10;
    v9.Header = (_NDIS_OBJECT_HEADER)7340440;
    v9.SourceHandle = a1;
    v9.StatusCode = 1073807395;
    ndisIndicateStatusInternal(a1, &v9, 2u);
    ndisMReleaseStInLockAndSpinLock(a1, v8[0]);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, v3);
  }
}
