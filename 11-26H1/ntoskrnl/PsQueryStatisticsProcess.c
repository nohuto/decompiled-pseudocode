/*
 * XREFs of PsQueryStatisticsProcess @ 0x1409CDFC0
 * Callers:
 *     PspQueryProcessAccountingInformationCallback @ 0x1409CDD60 (PspQueryProcessAccountingInformationCallback.c)
 *     PspEnforceLimitsProcessCallback @ 0x1409CDE90 (PspEnforceLimitsProcessCallback.c)
 *     EtwpPsProvTraceProcess @ 0x1409CE5FC (EtwpPsProvTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeQueryValuesThread @ 0x140305730 (KeQueryValuesThread.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(_QWORD *a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v5; // rsi
  void *v8; // rdx
  LegacyAutoBoost *v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  signed __int64 *v18; // [rsp+20h] [rbp-68h]
  struct _KTHREAD *v19; // [rsp+28h] [rbp-60h]
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+A0h] [rbp+18h]
  __int64 v24; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 188;
  v19 = CurrentThread;
  v18 = a1 + 188;
  --CurrentThread->KernelApcDisable;
  v20 = 0LL;
  v21 = 0LL;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(a1 + 188), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v9, (struct _KTHREAD *)v5);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = a1[39];
  v11 = a1[40];
  v22 = a1[41];
  v23 = a1[47];
  v24 = a1[48];
  a2[3] = a1[36];
  a2[4] = a1[37];
  a2[5] = a1[116];
  a2[6] = a1[117];
  a2[7] = a1[118];
  a2[8] = a1[119];
  a2[9] = a1[120];
  a2[10] = a1[121];
  v12 = (_QWORD *)a1[110];
  if ( v12 != a1 + 110 )
  {
    v13 = v22;
    v14 = v23;
    do
    {
      v10 += *((unsigned int *)v12 - 187);
      v11 += *((unsigned int *)v12 - 167);
      KeQueryValuesThread((__int64)(v12 - 175), (__int64)&v20);
      v13 += DWORD1(v20);
      a2[3] += *(v12 - 166);
      a2[4] += *((unsigned int *)v12 - 265);
      a2[5] += *(v12 - 63);
      a2[6] += *(v12 - 62);
      a2[7] += *(v12 - 61);
      a2[8] += *(v12 - 60);
      a2[9] += *(v12 - 59);
      v15 = *((_QWORD *)&v21 + 1) + v24;
      a2[10] += *(v12 - 58);
      v12 = (_QWORD *)*v12;
      v14 += v21;
      v24 = v15;
    }
    while ( v12 != a1 + 110 );
    v23 = v14;
    v5 = v18;
    v22 = v13;
    CurrentThread = v19;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v16 = KeMaximumIncrement;
  *a2 = v10 * KeMaximumIncrement;
  a2[1] = v11 * (unsigned int)v16;
  a2[2] = v22 * (unsigned int)v16;
  result = v23 * (unsigned int)v16;
  a2[11] = result;
  a2[12] = v24 * v16;
  return result;
}
