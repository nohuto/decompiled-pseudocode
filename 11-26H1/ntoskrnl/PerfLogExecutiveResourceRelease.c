/*
 * XREFs of PerfLogExecutiveResourceRelease @ 0x1403047A0
 * Callers:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x140304020 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall PerfLogExecutiveResourceRelease(int a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v5; // r10
  struct _KPRCB *CurrentPrcb; // rbp
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v10; // r14d
  signed __int64 Object; // rdi
  int v12; // r15d
  unsigned int *v13; // rbx
  unsigned int i; // edx
  int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  unsigned __int8 GroupIndex; // [rsp+30h] [rbp-88h]
  __int16 Group; // [rsp+32h] [rbp-86h]
  __int128 v24; // [rsp+40h] [rbp-78h] BYREF
  __int128 v25; // [rsp+50h] [rbp-68h]
  __int128 v26; // [rsp+60h] [rbp-58h]
  _QWORD v27[2]; // [rsp+70h] [rbp-48h] BYREF

  v24 = 0LL;
  v5 = a2;
  v25 = 0LL;
  v26 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v27[0] = __rdtsc();
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  Group = CurrentPrcb->Group;
  result = CurrentPrcb->GroupIndex;
  GroupIndex = CurrentPrcb->GroupIndex;
  if ( !KeGetCurrentThread()[1].WaitBlock[0].Object )
    return result;
  CurrentThread = KeGetCurrentThread();
  v10 = a1 & 0xFFFF0000;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    return result;
  Object = (signed __int64)CurrentThread[1].WaitBlock[0].Object;
  v12 = EtwpEthreadSyncTrackingSequence;
  if ( Object )
  {
LABEL_7:
    result = 0LL;
    for ( i = 0; i < 8; ++i )
    {
      v15 = *(_DWORD *)(Object + 28);
      if ( v15 == v10 && *(_QWORD *)(Object + 16) == v5 && *(_DWORD *)(Object + 40) == v12 )
        goto LABEL_20;
      if ( !result )
      {
        if ( v15 )
        {
          if ( *(_DWORD *)(Object + 40) < v12 )
          {
            result = Object;
            break;
          }
        }
        else
        {
          result = Object;
        }
      }
      Object += 64LL;
    }
    Object = result;
    if ( result )
    {
      *(_QWORD *)(result + 16) = v5;
      *(_DWORD *)(result + 28) = v10;
      *(_QWORD *)(result + 32) = 0LL;
      *(_QWORD *)result = 0LL;
      *(_QWORD *)(result + 8) = 0LL;
      *(_DWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 40) = v12;
      *(_DWORD *)(result + 44) = 0;
    }
LABEL_20:
    v13 = (unsigned int *)Object;
    if ( !Object )
      return result;
    goto LABEL_21;
  }
  result = ExAllocatePool2(0x48uLL);
  v13 = (unsigned int *)result;
  if ( !result )
    return result;
  v5 = a2;
  *(_QWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 28) = v10;
  *(_DWORD *)(result + 40) = v12;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Object, result, 0LL);
  Object = result;
  if ( result )
  {
    ExFreePoolWithTag(v13, 0);
    v5 = a2;
    goto LABEL_7;
  }
LABEL_21:
  if ( !v13[8] )
    goto LABEL_30;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
  if ( v13[9] < a3 + 1 )
    v13[9] = a3 + 1;
  if ( ((a1 - 65570) & 0xFFFFFFDF) == 0 )
  {
    v16 = *((_QWORD *)v13 + 1);
    if ( v16 > 2 && *((_WORD *)v13 + 12) == Group && *((_BYTE *)v13 + 26) == GroupIndex )
      v17 = v27[0] - v16;
    else
      v17 = 0LL;
    if ( *(_QWORD *)v13 <= 1uLL
      || (CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
        + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
       % EtwpExecutiveResourceContentionSampleRate )
    {
      v18 = v13[11];
      v19 = a4;
      if ( a4 <= v18 || (a4 - v18) % EtwpExecutiveResourceContentionSampleRate )
      {
        result = (CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
               / EtwpExecutiveResourceReleaseSampleRate;
        if ( (CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
            + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
           % EtwpExecutiveResourceReleaseSampleRate )
        {
          goto LABEL_30;
        }
      }
    }
    else
    {
      v19 = a4;
    }
    DWORD2(v26) = a1;
    *(_QWORD *)&v26 = v5;
    *(_QWORD *)&v24 = *((_QWORD *)v13 + 1);
    DWORD2(v25) = v13[9];
    *((_QWORD *)&v24 + 1) = v17;
    *(_QWORD *)&v25 = *(_QWORD *)v13;
    HIDWORD(v26) = v19 - v13[11];
    v27[1] = 48LL;
    HIDWORD(v25) = KeGetCurrentThread()[1].CurrentRunTime;
    v27[0] = &v24;
    result = EtwTraceKernelEvent((int)v27, 1, 0x20020000u, 1323, 23074818);
LABEL_30:
    v13[7] = 0;
    return result;
  }
  result = (unsigned int)(a1 - 65586);
  if ( (result & 0xFFFFFFDF) == 0 )
    v13[8] = 2;
  return result;
}
