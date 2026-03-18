/*
 * XREFs of PopFxStopDeviceAccounting @ 0x14042B348
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxPauseDeviceAccounting @ 0x1403949DC (PopFxPauseDeviceAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14042B748 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxGlobalDeviceAccounting @ 0x1404EB10C (PopDiagTraceFxGlobalDeviceAccounting.c)
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140AF7950 (PopDiagTraceFxComponentAccounting.c)
 */

__int64 __fastcall PopFxStopDeviceAccounting(unsigned __int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 result; // rax
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v9; // rbx
  ULONG_PTR i; // rbx
  __int64 v11; // r12
  __int128 *v12; // r13
  KIRQL v13; // al
  char v14; // si
  unsigned int j; // esi
  KIRQL v16; // al
  char v17; // r15
  bool v18; // zf
  KIRQL v19; // al
  __int128 v20; // kr00_16
  size_t v21; // rax
  __int64 v22; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+40h] [rbp-C8h]
  __int128 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+68h] [rbp-A0h]
  __int128 v27; // [rsp+78h] [rbp-90h]
  __int128 v28; // [rsp+88h] [rbp-80h]
  __int128 v29; // [rsp+98h] [rbp-70h]
  __int128 v30; // [rsp+A8h] [rbp-60h]
  _OWORD v31[2]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID SparePtr; // [rsp+D8h] [rbp-30h]
  _OWORD v33[2]; // [rsp+E0h] [rbp-28h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+100h] [rbp-8h]

  v23 = a1;
  v1 = a1;
  memset_0(&v25, 0, 0x60uLL);
  result = LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime);
  v7 = 0;
  v24 = 0LL;
  if ( LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime) )
  {
    if ( LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime) == 1 )
      PopFxPauseDeviceAccounting(v3, v2, v4, v5);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v9, &qword_140F123D0);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v9 + 33) |= 2u;
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    for ( i = qword_140F123E0; (ULONG_PTR *)i != &qword_140F123E0; i = *(_QWORD *)i )
    {
      v11 = *(_QWORD *)(i + 48);
      if ( v11 )
      {
        if ( *(_QWORD *)(i + 1240) )
        {
          LODWORD(v12) = i + 1232;
        }
        else
        {
          DWORD1(v24) = 0;
          *((_QWORD *)&v24 + 1) = &SourceString;
          v21 = 2 * wcslen(&SourceString);
          v12 = &v24;
          if ( v21 >= 0xFFFE )
            LOWORD(v21) = -4;
          LOWORD(v24) = v21;
          WORD1(v24) = v21 + 2;
        }
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 640));
        if ( *(_DWORD *)(i + 656) )
        {
          v7 = 1;
          v25 = *(_OWORD *)(i + 672);
          v26 = *(_OWORD *)(i + 688);
          v27 = *(_OWORD *)(i + 704);
          v28 = *(_OWORD *)(i + 720);
          v29 = *(_OWORD *)(i + 736);
          v30 = *(_OWORD *)(i + 752);
          v14 = *(_DWORD *)(i + 652) < 5u;
        }
        else
        {
          v14 = 0;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(i + 640), v13);
        if ( v7 )
        {
          if ( v1 < 0x23C34600 || (unsigned __int64)v25 < 0x989680 )
            v14 = 0;
          PopDiagTraceFxDeviceAccounting(v11, (unsigned int)&v25, (_DWORD)v12, v25, v14);
        }
        v7 = 0;
        for ( j = 0; j < *(_DWORD *)(i + 868); v7 = 0 )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j);
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 200));
          if ( *(_DWORD *)(v22 + 216) )
          {
            v17 = 1;
            v25 = *(_OWORD *)(v22 + 232);
            v26 = *(_OWORD *)(v22 + 248);
            v27 = *(_OWORD *)(v22 + 264);
            v28 = *(_OWORD *)(v22 + 280);
            v29 = *(_OWORD *)(v22 + 296);
            v30 = *(_OWORD *)(v22 + 312);
            v7 = *(_DWORD *)(v22 + 212) != -1;
          }
          else
          {
            v17 = 0;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 200), v16);
          v18 = v17 == 0;
          v1 = v23;
          if ( !v18 )
          {
            if ( v23 < 0x23C34600 || (unsigned __int64)v25 < 0x989680 )
              v7 = 0;
            PopDiagTraceFxComponentAccounting(v11, *(_DWORD *)(v22 + 16), (unsigned int)&v25, (_DWORD)v12, v25, v7);
          }
          ++j;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
    KeAbPostRelease((unsigned __int64)&qword_140F123D0);
    KeLeaveCriticalRegion();
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12420.320);
    v20 = *(_OWORD *)&stru_140F12420.WaitBlockFill11[48];
    v33[0] = *(_OWORD *)&stru_140F12420.WaitBlockFill11[64];
    v33[1] = *(_OWORD *)&stru_140F12420.WaitBlockFill11[80];
    Flink = stru_140F12420.WaitBlock[2].WaitListEntry.Flink;
    v31[0] = *(_OWORD *)&stru_140F12420.WaitBlockFill11[104];
    v31[1] = *(_OWORD *)&stru_140F12420.WaitBlockFill11[120];
    SparePtr = stru_140F12420.WaitBlock[2].SparePtr;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12420.320, v19);
    return PopDiagTraceFxGlobalDeviceAccounting(v20, *((_QWORD *)&v20 + 1), v33, v31);
  }
  return result;
}
