/*
 * XREFs of PfLockSharedTryAcquire @ 0x1404AB4E0
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1409C4504 (PfCheckDeprioritizeFile.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404AB574 (ExfTryAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PfLockSharedTryAcquire(struct _KTHREAD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v6; // rbx
  __int64 v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)a1, 0LL, 1LL, a4);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockSharedEx(a1, 0LL) )
  {
    if ( v6 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v6 + 33) |= 2u;
      else
        *(_BYTE *)(v6 + 10) = 1;
    }
    return 1LL;
  }
  else
  {
    if ( v6 )
      KeAbPostReleaseEx(a1, v6, v8, v9);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
