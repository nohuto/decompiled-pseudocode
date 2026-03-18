/*
 * XREFs of PopDirectedDripsDiagDestroyDeviceDiagnostic @ 0x140B0636C
 * Callers:
 *     PoFxAbandonDevice @ 0x140B062B4 (PoFxAbandonDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopDirectedDripsDiagDestroyDeviceDiagnostic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  __int64 v11; // rax

  _m_prefetchw(dword_140F12AC0);
  v5 = dword_140F12AC0[0];
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange(dword_140F12AC0, v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 1) != 0 )
  {
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsUmLock.ApcStateFill[8], 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
        v7,
        (__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v8);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    v11 = *(_QWORD *)(a1 + 776);
    if ( v11 )
    {
      *(_QWORD *)(a1 + 776) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  }
}
