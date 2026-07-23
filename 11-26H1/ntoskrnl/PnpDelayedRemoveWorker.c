/*
 * XREFs of PnpDelayedRemoveWorker @ 0x1409B5BA0
 * Callers:
 *     PnpChainDereferenceComplete @ 0x1409B69F0 (PnpChainDereferenceComplete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PipRemoveDevicesInRelationList @ 0x1409B5A28 (PipRemoveDevicesInRelationList.c)
 *     PnpDequeuePendingSurpriseRemoval @ 0x1409B5D68 (PnpDequeuePendingSurpriseRemoval.c)
 *     PnpEnableWatchdog @ 0x140A19C80 (PnpEnableWatchdog.c)
 *     PnpDisableWatchdog @ 0x140A1B0D4 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDelayedRemoveWorker(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  PVOID Pa[3]; // [rsp+20h] [rbp-18h] BYREF

  Pa[1] = Pa;
  Pa[0] = Pa;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  *(_QWORD *)&PnpDelayedRemoveWorkerThread = KeGetCurrentThread();
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  PnpDequeuePendingSurpriseRemoval(Pa);
  PnpDelayedRemovePending = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  while ( 1 )
  {
    v3 = Pa[0];
    if ( Pa[0] == Pa )
      break;
    if ( *((PVOID **)Pa[0] + 1) != Pa || (v4 = *(_QWORD *)Pa[0], *(PVOID *)(*(_QWORD *)Pa[0] + 8LL) != Pa[0]) )
      __fastfail(3u);
    Pa[0] = *(PVOID *)Pa[0];
    *(_QWORD *)(v4 + 8) = Pa;
    if ( P )
    {
      P[2] = v3;
      P[1] = v3[7];
      v5 = v3[7];
      v6 = v5 ? *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) : 0LL;
      *P = v6;
      v7 = PnpEnableWatchdog(3LL, P, (v6 + 56) & -(__int64)(v6 != 0));
      P[3] = v7;
      if ( v7 )
      {
        v10 = (void *)P[1];
        if ( v10 )
          ObfReferenceObjectWithTag(v10, 0x56706E50u);
      }
    }
    PipRemoveDevicesInRelationList(v3);
    if ( P )
    {
      v8 = P[3];
      if ( v8 )
      {
        PnpDisableWatchdog(v8);
        v9 = (void *)P[1];
        P[3] = 0LL;
        if ( v9 )
          ObfDereferenceObjectWithTag(v9, 0x56706E50u);
      }
    }
  }
  *(_QWORD *)&PnpDelayedRemoveWorkerThread = 0LL;
  if ( P )
    ExFreePoolWithTag(P, 0x54706E50u);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  ExReleaseResourceLite(&PiEngineLock);
  KeLeaveCriticalRegion();
}
