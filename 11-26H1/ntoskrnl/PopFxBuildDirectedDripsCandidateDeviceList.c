/*
 * XREFs of PopFxBuildDirectedDripsCandidateDeviceList @ 0x1404D0FCC
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC54E8 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PopFxReferenceDevice @ 0x1403948D4 (PopFxReferenceDevice.c)
 */

void __fastcall PopFxBuildDirectedDripsCandidateDeviceList(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  AutoBoost *v10; // rax
  AutoBoost *v11; // rdi
  ULONG_PTR i; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rax

  a1[1] = a1;
  *a1 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&stru_140F12420.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F12420, v6, (__int64)&stru_140F12420);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v9 + 33) |= 2u;
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, v7);
  v8 = _interlockedbittestandset64(&qword_140F123D0.Header.Lock, 0LL);
  v11 = v10;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F123D0, v10, (__int64)&qword_140F123D0);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v11 + 33) |= 2u;
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  for ( i = qword_140F123E0; (ULONG_PTR *)i != &qword_140F123E0; i = *(_QWORD *)i )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(i + 864), 0, 0) & 0x40) != 0 )
    {
      PopFxReferenceDevice(i, 3);
      v13 = (_QWORD *)a1[1];
      v14 = (_QWORD *)(i + 912);
      if ( (_QWORD *)*v13 != a1 )
        __fastfail(3u);
      *v14 = a1;
      *(_QWORD *)(i + 920) = v13;
      *v13 = v14;
      a1[1] = v14;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F123D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
}
