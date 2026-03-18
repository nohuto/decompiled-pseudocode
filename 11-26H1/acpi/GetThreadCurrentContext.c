/*
 * XREFs of GetThreadCurrentContext @ 0x14000F264
 * Callers:
 *     SyncEvalObject @ 0x14000EE78 (SyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 *     SyncLoadDDB @ 0x1400DDC3C (SyncLoadDDB.c)
 * Callees:
 *     <none>
 */

__int64 GetThreadCurrentContext()
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v1; // rcx
  __int64 i; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  for ( i = RunningContextListHead - 392; &RunningContextListHead != (__int64 *)(i + 392); i = *(_QWORD *)(i + 392)
                                                                                             - 392LL )
  {
    if ( *(struct _KTHREAD **)(i + 408) == CurrentThread )
      return i;
  }
  return v1;
}
