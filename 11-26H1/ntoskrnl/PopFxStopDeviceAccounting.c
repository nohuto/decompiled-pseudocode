/*
 * XREFs of PopFxStopDeviceAccounting @ 0x1404227BC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxPauseDeviceAccounting @ 0x14039675C (PopFxPauseDeviceAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140422BBC (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxGlobalDeviceAccounting @ 0x1404E46EC (PopDiagTraceFxGlobalDeviceAccounting.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140AF9FF0 (PopDiagTraceFxComponentAccounting.c)
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
  KSPIN_LOCK *i; // rbx
  KSPIN_LOCK v11; // r12
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
  PVOID NormalContext; // [rsp+D8h] [rbp-30h]
  _OWORD v33[2]; // [rsp+E0h] [rbp-28h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+100h] [rbp-8h]

  v23 = a1;
  v1 = a1;
  memset_0(&v25, 0, 0x60uLL);
  result = (unsigned int)dword_140E676E0;
  v7 = 0;
  v24 = 0LL;
  if ( dword_140E676E0 )
  {
    if ( dword_140E676E0 == 1 )
      PopFxPauseDeviceAccounting(v3, v2, v4, v5);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PopFxBlockingDeviceListLock.Teb,
        0,
        v9,
        (struct _KTHREAD *)&PopFxBlockingDeviceListLock.Teb);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v9 + 33) |= 2u;
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    for ( i = *(KSPIN_LOCK **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
          i != (KSPIN_LOCK *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
          i = (KSPIN_LOCK *)*i )
    {
      v11 = i[6];
      if ( v11 )
      {
        if ( i[155] )
        {
          LODWORD(v12) = (_DWORD)i + 1232;
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
        v13 = KeAcquireSpinLockRaiseToDpc(i + 80);
        if ( *((_DWORD *)i + 164) )
        {
          v7 = 1;
          v25 = *((_OWORD *)i + 42);
          v26 = *((_OWORD *)i + 43);
          v27 = *((_OWORD *)i + 44);
          v28 = *((_OWORD *)i + 45);
          v29 = *((_OWORD *)i + 46);
          v30 = *((_OWORD *)i + 47);
          v14 = *((_DWORD *)i + 163) < 5u;
        }
        else
        {
          v14 = 0;
        }
        KeReleaseSpinLock(i + 80, v13);
        if ( v7 )
        {
          if ( v1 < 0x23C34600 || (unsigned __int64)v25 < 0x989680 )
            v14 = 0;
          PopDiagTraceFxDeviceAccounting(v11, (unsigned int)&v25, (_DWORD)v12, v25, v14);
        }
        v7 = 0;
        for ( j = 0; j < *((_DWORD *)i + 217); v7 = 0 )
        {
          v22 = *(_QWORD *)(i[109] + 8LL * j);
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
    KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
    KeLeaveCriticalRegion();
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead);
    v20 = *(_OWORD *)&PopFxBlockingDeviceListLock.SavedApcStateFill[16];
    v33[0] = *(_OWORD *)&PopFxBlockingDeviceListLock.SavedApcStateFill[32];
    v33[1] = *(_OWORD *)&PopFxBlockingDeviceListLock.SchedulerApc.Type;
    Flink = PopFxBlockingDeviceListLock.SchedulerApc.ApcListEntry.Flink;
    v31[0] = *(_OWORD *)&PopFxBlockingDeviceListLock.SchedulerApcFill5[24];
    v31[1] = *(_OWORD *)&PopFxBlockingDeviceListLock.SchedulerApcFill5[40];
    NormalContext = PopFxBlockingDeviceListLock.SchedulerApc.NormalContext;
    KeReleaseSpinLock((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead, v19);
    return PopDiagTraceFxGlobalDeviceAccounting(v20, *((_QWORD *)&v20 + 1), v33, v31);
  }
  return result;
}
