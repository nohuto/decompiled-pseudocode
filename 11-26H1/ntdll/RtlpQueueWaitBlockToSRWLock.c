/*
 * XREFs of RtlpQueueWaitBlockToSRWLock @ 0x180015B00
 * Callers:
 *     RtlWakeConditionVariable @ 0x1800159A0 (RtlWakeConditionVariable.c)
 *     RtlpWakeConditionVariable @ 0x180016260 (RtlpWakeConditionVariable.c)
 * Callees:
 *     RtlpAbFreeKernelEntry @ 0x180015690 (RtlpAbFreeKernelEntry.c)
 *     RtlpOptimizeSRWLockList @ 0x1800156E0 (RtlpOptimizeSRWLockList.c)
 *     RtlBackoff @ 0x18005F2E0 (RtlBackoff.c)
 *     RtlAbPostRelease @ 0x180067EA0 (RtlAbPostRelease.c)
 */

__int64 __fastcall RtlpQueueWaitBlockToSRWLock(__int64 a1, volatile signed __int64 *a2)
{
  unsigned __int8 v2; // bp
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  char v7; // r15
  bool v8; // r14
  __int64 v9; // rcx
  signed __int64 v10; // rcx
  signed __int64 v11; // rdx
  _QWORD *SchedulerSharedDataSlot; // r11
  unsigned int i; // r9d
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v5 = 0LL;
  v6 = *a2;
  v7 = *(_DWORD *)(a1 + 36) & 1;
  v15 = 0;
  while ( (v6 & 1) != 0 && (v7 || (v6 & 2) != 0 || (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    v8 = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (v6 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 32) = -1;
      *(_QWORD *)a1 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = a1 | v6 & 8 | 7;
      v8 = (v6 & 4) == 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a1;
      v9 = 11LL;
      *(_DWORD *)(a1 + 32) = v6 >> 4;
      if ( (int)(v6 >> 4) <= 1 )
        v9 = 3LL;
      v10 = a1 | v9;
      v11 = v10;
      if ( !(unsigned int)(v6 >> 4) )
      {
        *(_DWORD *)(a1 + 32) = -2;
        goto LABEL_12;
      }
    }
    v11 = v10;
    if ( v8 )
    {
      v5 = 0LL;
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          if ( !SchedulerSharedDataSlot[i] )
          {
            v5 = (__int64)&SchedulerSharedDataSlot[i];
            break;
          }
        }
      }
      if ( v5 )
        *(_QWORD *)v5 = a2;
    }
LABEL_12:
    if ( v6 == _InterlockedCompareExchange64(a2, v10, v6) )
    {
      if ( v8 )
        RtlpOptimizeSRWLockList(a2, v11);
      v2 = 1;
      break;
    }
    if ( v5 )
    {
      RtlAbPostRelease(a2, v5);
      v5 = 0LL;
    }
    RtlBackoff(&v15, v11);
    _m_prefetchw((const void *)a2);
    v6 = *a2;
  }
  if ( v5 )
  {
    *(_BYTE *)v5 |= 2u;
    if ( *(char *)(v5 + 7) < 0 )
      RtlpAbFreeKernelEntry(v5);
    *(_QWORD *)v5 = 0LL;
  }
  return v2;
}
