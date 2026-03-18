/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x1409A7BF0
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v3; // rdx
  __int64 *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
  v3 = (__int64 *)PiPnpRtlActiveOperations;
  for ( i = 0LL; v3 != &PiPnpRtlActiveOperations; i = 0LL )
  {
    i = v3;
    if ( (struct _KTHREAD *)v3[2] == CurrentThread )
      break;
    v3 = (__int64 *)*v3;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6);
  if ( !i )
    return 3221226021LL;
  result = 0LL;
  *a1 = i;
  return result;
}
