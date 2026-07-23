/*
 * XREFs of RtlStackDbStackRemove @ 0x140626410
 * Callers:
 *     ObpCleanupObjectRefsByStack @ 0x1407C789C (ObpCleanupObjectRefsByStack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlpStackDbEntryCleanup @ 0x140626640 (RtlpStackDbEntryCleanup.c)
 */

void __fastcall RtlStackDbStackRemove(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 v4; // rcx
  signed __int64 i; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rsi
  _QWORD *j; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h]

  v4 = a2[2];
  for ( i = v4; (i & 0xFFFFFFFFFFFFFFLL) != 1; v4 = i )
  {
    i = _InterlockedCompareExchange64(a2 + 2, (v4 - 1) ^ (v4 ^ (v4 - 1)) & 0xFF00000000000000uLL, v4);
    if ( v4 == i )
      break;
  }
  if ( (v4 & 0xFFFFFFFFFFFFFFuLL) <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)ObpStackTraceLock.SchedulerApc.Reserved, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock.SchedulerApcFill5[32], 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)ObpStackTraceLock.SchedulerApc.Reserved,
        v8,
        (__int64)ObpStackTraceLock.SchedulerApc.Reserved);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    if ( (_InterlockedDecrement64(a2 + 2) & 0xFFFFFFFFFFFFFFLL) != 0 )
    {
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved);
      KeAbPostRelease((unsigned __int64)ObpStackTraceLock.SchedulerApc.Reserved);
      KeLeaveGuardedRegion();
    }
    else
    {
      v13 = a2[1] & (-1LL << (ObpStackTraceLock.SchedulerApcFill3[20] & 0x1F));
      for ( j = &ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink->Flink
              + (((*(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[20] >> 5) - 1) & (HIBYTE(v13)
                                                                                   - 877075889
                                                                                   + 442596621 * (unsigned __int8)v13
                                                                                   + 37
                                                                                   * (BYTE6(v13)
                                                                                    + 37
                                                                                    * (BYTE5(v13)
                                                                                     + 37
                                                                                     * (BYTE4(v13)
                                                                                      + 37
                                                                                      * (BYTE3(v13)
                                                                                       + 37
                                                                                       * (BYTE2(v13)
                                                                                        + 37 * (unsigned int)BYTE1(v13))))))));
            (*j & 1) == 0;
            j = (_QWORD *)*j )
      {
        if ( (_QWORD *)*j == a2 )
        {
          *j = *a2;
          --*(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[16];
          *a2 |= 0x8000000000000002uLL;
          break;
        }
      }
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved);
      KeAbPostRelease((unsigned __int64)ObpStackTraceLock.SchedulerApc.Reserved);
      KeLeaveGuardedRegion();
      RtlpStackDbEntryCleanup(&ObpStackTraceLock.648, a2);
    }
  }
}
