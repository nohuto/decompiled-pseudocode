/*
 * XREFs of SepNotifyFileSystems @ 0x14081B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = ExpPlatformBinaryLock.WaitBlock[1].SparePtr; i; i = (_QWORD *)*i )
    guard_dispatch_icall_no_overrides((__int64)(P + 4), v3);
  for ( j = *(_QWORD **)&ExpPlatformBinaryLock.UserAffinityPrimaryGroup; j; j = (_QWORD *)*j )
    guard_dispatch_icall_no_overrides((__int64)(P + 4), P[5]);
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegion();
  v6 = (void *)P[5];
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
