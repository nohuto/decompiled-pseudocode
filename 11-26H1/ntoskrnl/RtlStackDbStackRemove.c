/*
 * XREFs of RtlStackDbStackRemove @ 0x1406233C0
 * Callers:
 *     ObpCleanupObjectRefsByStack @ 0x1407C483C (ObpCleanupObjectRefsByStack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlpStackDbEntryCleanup @ 0x1406235F0 (RtlpStackDbEntryCleanup.c)
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
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F13200, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64(&qword_140F13200.Header.Lock, 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F13200, v8, (__int64)&qword_140F13200);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    if ( (_InterlockedDecrement64(a2 + 2) & 0xFFFFFFFFFFFFFFLL) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F13200, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F13200.Header.Lock);
      KeAbPostRelease((unsigned __int64)&qword_140F13200);
      KeLeaveGuardedRegion();
    }
    else
    {
      v13 = a2[1] & (-1LL << (BYTE4(qword_140F131F0) & 0x1F));
      for ( j = (_QWORD *)(qword_140F131F8
                         + 8LL
                         * (((HIDWORD(qword_140F131F0) >> 5) - 1) & (HIBYTE(v13)
                                                                   - 877075889
                                                                   + 442596621 * (unsigned __int8)v13
                                                                   + 37
                                                                   * (BYTE6(v13)
                                                                    + 37
                                                                    * (BYTE5(v13)
                                                                     + 37
                                                                     * (BYTE4(v13)
                                                                      + 37
                                                                      * (BYTE3(v13) + 37
                                                                                    * (BYTE2(v13) + 37 * BYTE1(v13)))))))));
            (*j & 1) == 0;
            j = (_QWORD *)*j )
      {
        if ( (_QWORD *)*j == a2 )
        {
          *j = *a2;
          LODWORD(qword_140F131F0) = qword_140F131F0 - 1;
          *a2 |= 0x8000000000000002uLL;
          break;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F13200, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F13200.Header.Lock);
      KeAbPostRelease((unsigned __int64)&qword_140F13200);
      KeLeaveGuardedRegion();
      RtlpStackDbEntryCleanup(&qword_140F131E0, a2);
    }
  }
}
