/*
 * XREFs of PnpDelayedRemoveWorker @ 0x140913AC0
 * Callers:
 *     PnpChainDereferenceComplete @ 0x140914380 (PnpChainDereferenceComplete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PipRemoveDevicesInRelationList @ 0x140913948 (PipRemoveDevicesInRelationList.c)
 *     PnpDequeuePendingSurpriseRemoval @ 0x140913C88 (PnpDequeuePendingSurpriseRemoval.c)
 *     PnpEnableWatchdog @ 0x1409DC9D0 (PnpEnableWatchdog.c)
 *     PnpDisableWatchdog @ 0x1409DDFA8 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDelayedRemoveWorker(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  void *v9; // rcx
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
        v9 = (void *)P[1];
        if ( v9 )
          ObfReferenceObjectWithTag(v9, 0x56706E50u);
      }
    }
    PipRemoveDevicesInRelationList(v3);
    if ( P )
    {
      if ( P[3] )
      {
        PnpDisableWatchdog();
        v8 = (void *)P[1];
        P[3] = 0LL;
        if ( v8 )
          ObfDereferenceObjectWithTag(v8, 0x56706E50u);
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
