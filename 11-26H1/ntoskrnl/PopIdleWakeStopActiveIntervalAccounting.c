/*
 * XREFs of PopIdleWakeStopActiveIntervalAccounting @ 0x1404E37A0
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404E36FC (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleWakeNotifyWakeSource @ 0x140613B64 (PopIdleWakeNotifyWakeSource.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     PopIdleWakeInsertTimeInterval @ 0x1404E3998 (PopIdleWakeInsertTimeInterval.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PopIdleWakeStopActiveIntervalAccounting(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // edx
  int v16; // edx

  result = *a1;
  if ( (result & 0x10) != 0 )
  {
    v5 = a2 - *((_QWORD *)a1 + 1);
    if ( (result & 2) != 0 )
    {
      *((_QWORD *)a1 + 2) += v5;
    }
    else if ( (result & 1) != 0 )
    {
      *((_QWORD *)a1 + 3) += v5;
    }
    else
    {
      *((_QWORD *)a1 + 4) += v5;
    }
    if ( (result & 8) == 0 )
    {
      LODWORD(result) = result | 4;
      *a1 = result;
    }
    v6 = *((_QWORD *)a1 + 5);
    v7 = ((result & 4) != 0 ? 0x180 : 0) + v6 + 416;
    ++*(_DWORD *)v7;
    *(_QWORD *)(v7 + 24) += *((_QWORD *)a1 + 7);
    v8 = *((_QWORD *)a1 + 7);
    if ( v8 < *(_QWORD *)(v7 + 8) )
      *(_QWORD *)(v7 + 8) = v8;
    v9 = *((_QWORD *)a1 + 7);
    if ( v9 > *(_QWORD *)(v7 + 16) )
      *(_QWORD *)(v7 + 16) = v9;
    v10 = *((_QWORD *)a1 + 7);
    LODWORD(v11) = 0;
    while ( (unsigned int)v11 < 9 )
    {
      v12 = (unsigned int)v11;
      v11 = (unsigned int)(v11 + 1);
      if ( v10 >= PopIdleWakeIdleAccountingBucketLimitsQpc[v12] && v10 < PopIdleWakeIdleAccountingBucketLimitsQpc[v11] )
      {
        ++*(_DWORD *)(v7 + 4 * v12 + 32);
        break;
      }
    }
    if ( *(_DWORD *)v7 > 1u )
      PopIdleWakeInsertTimeInterval(
        a2 - *(_DWORD *)(v7 + 112),
        11,
        v7 + 68,
        0,
        (__int64)&PopIdleWakePeriodAccountingBucketLimitsQpc);
    *(_QWORD *)(v7 + 112) = a2;
    KeAddProcessorAffinityEx((unsigned __int16 *)(v6 + 144), a1[16]);
    v13 = *((_QWORD *)a1 + 3) + *((_QWORD *)a1 + 4) + *((_QWORD *)a1 + 2);
    *(_QWORD *)(v7 + 120) += v13;
    PopIdleWakeInsertTimeInterval(v13, 5, v7 + 128, v7 + 152, (__int64)&PopIdleWakeSourceActiveBucketLimitsQpc);
    *(_QWORD *)(v7 + 192) += *((_QWORD *)a1 + 2);
    PopIdleWakeInsertTimeInterval(
      *((_QWORD *)a1 + 2),
      v14,
      v7 + 200,
      v7 + 224,
      (__int64)&PopIdleWakeSourceActivatorBucketLimitsQpc);
    *(_QWORD *)(v7 + 264) += *((_QWORD *)a1 + 3);
    PopIdleWakeInsertTimeInterval(
      *((_QWORD *)a1 + 3),
      v15,
      v7 + 272,
      v7 + 296,
      (__int64)&PopIdleWakeSourceDeviceBucketLimitsQpc);
    *(_QWORD *)(v7 + 336) += *((_QWORD *)a1 + 4);
    PopIdleWakeInsertTimeInterval(
      *((_QWORD *)a1 + 4),
      v16,
      v7 + 344,
      v7 + 360,
      (__int64)&PopIdleWakeSourceDeviceBucketLimitsQpc);
    return (__int64)memset_0(a1, 0, 0x48uLL);
  }
  return result;
}
