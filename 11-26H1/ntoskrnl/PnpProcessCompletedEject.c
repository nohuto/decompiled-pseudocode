/*
 * XREFs of PnpProcessCompletedEject @ 0x1407A7890
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpSetDeviceRemovalSafe @ 0x1407B0A44 (PnpSetDeviceRemovalSafe.c)
 *     IopWarmEjectDevice @ 0x1407B7CB0 (IopWarmEjectDevice.c)
 *     PnpInvalidateRelationsInList @ 0x1409B372C (PnpInvalidateRelationsInList.c)
 *     IopFreeRelationList @ 0x1409B5B30 (IopFreeRelationList.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x140A1B08C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCompleteDeviceEvent @ 0x140A1B2E0 (PnpCompleteDeviceEvent.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     PnpTrackQueryRemoveDevices @ 0x140B58E48 (PnpTrackQueryRemoveDevices.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpProcessCompletedEject(PVOID P)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *i; // rax
  void *v10; // rdi

  if ( *((_DWORD *)P + 23) >= 2u )
  {
    *((_BYTE *)P + 89) = 0;
    IopWarmEjectDevice(*((_QWORD *)P + 7));
  }
  v2 = *((_QWORD *)P + 12);
  if ( v2 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 8), 1LL);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(*((_QWORD *)P + 12) + 8LL), v3);
  }
  PpDevNodeLockTree(1LL);
  v5 = *(_QWORD **)P;
  if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  v7 = *((_QWORD *)P + 7);
  if ( v7 )
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
  else
    v8 = 0LL;
  if ( *((_QWORD *)P + 8) )
  {
    if ( *((_BYTE *)P + 88) )
    {
      ExAcquireFastMutex(&PiProfileDeviceListLock);
      for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i - 2) != 1 )
          *((_DWORD *)i - 2) = 4;
      }
      KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    }
    LOBYTE(v4) = 1;
    PnpInvalidateRelationsInList(*((_QWORD *)P + 8), 4LL, 0LL, v4);
    PnpTrackQueryRemoveDevices(*((_QWORD *)P + 8), 0LL);
    IopFreeRelationList(*((PVOID *)P + 8));
    *(_QWORD *)(v8 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)P + 89) = 0;
  }
  PpDevNodeUnlockTree(1LL);
  v10 = (void *)*((_QWORD *)P + 6);
  if ( v10 )
  {
    PnpDisableAndFreeEventWatchdog(*((_QWORD *)P + 6));
    PnpCompleteDeviceEvent(v10);
  }
  if ( *((_BYTE *)P + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 7));
  ExFreePoolWithTag(P, 0);
}
