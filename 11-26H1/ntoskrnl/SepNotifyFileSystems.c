/*
 * XREFs of SepNotifyFileSystems @ 0x140815820
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepNotifyFileSystems(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *i; // rbx
  _QWORD *j; // rbx
  void *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)RtlpBootStatHandleLock.TracingPrivate);
  for ( i = ExpPlatformBinaryLock.WaitBlock[1].SparePtr; i; i = (_QWORD *)*i )
    guard_dispatch_icall_no_overrides((__int64)(P + 4), v3);
  for ( j = *(_QWORD **)&ExpPlatformBinaryLock.NextProcessor; j; j = (_QWORD *)*j )
    guard_dispatch_icall_no_overrides((__int64)(P + 4), P[5]);
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)RtlpBootStatHandleLock.TracingPrivate);
  KeLeaveCriticalRegion();
  v6 = (void *)P[5];
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
