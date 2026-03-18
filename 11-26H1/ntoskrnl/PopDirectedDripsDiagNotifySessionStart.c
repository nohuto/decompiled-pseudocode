/*
 * XREFs of PopDirectedDripsDiagNotifySessionStart @ 0x140B094F4
 * Callers:
 *     PopDirectedDripsNotify @ 0x140B08694 (PopDirectedDripsNotify.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopDirectedDripsDiagNotifySessionStart(_KWAIT_BLOCK *a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rbx

  _m_prefetchw(dword_140F12AC0);
  v6 = dword_140F12AC0[0];
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange(dword_140F12AC0, v6, v6);
  }
  while ( v7 != v6 );
  if ( (v6 & 1) != 0 )
  {
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsUmLock.ApcStateFill[8], 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
        v8,
        (__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    PopDirectedDripsUmLock.WaitBlockList = a1;
    LODWORD(PopDirectedDripsUmLock.WaitListEntry.Flink) = a2;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  }
}
