/*
 * XREFs of PfSnGetCompletedTrace @ 0x140AFA330
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x140AFA21C (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(volatile void *a1, unsigned int a2, unsigned int *a3)
{
  char v5; // r12
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rbx
  unsigned __int64 *p_QueryHistoryTimeStamp; // r14
  unsigned int QueryHistoryTimeStamp; // eax
  unsigned int v9; // edi
  _KSCHEDULING_GROUP_POLICY Policy; // rax
  char PreviousMode; // al
  size_t v13; // r8
  unsigned int *p_ChildMinWeight; // rdx
  char v17; // [rsp+98h] [rbp+20h]

  v5 = 1;
  ExAcquireFastMutex((PKGUARDED_MUTEX)((char *)&stru_140E67200.116 + 4));
  *(_DWORD *)&stru_140E67200.ApcStateFill[28] = 2;
  SchedulingGroup = stru_140E67200.SchedulingGroup;
  if ( (_KSCHEDULING_GROUP *volatile *)stru_140E67200.SchedulingGroup == &stru_140E67200.SchedulingGroup )
  {
    v9 = -2147483622;
  }
  else
  {
    p_QueryHistoryTimeStamp = &stru_140E67200.SchedulingGroup->QueryHistoryTimeStamp;
    QueryHistoryTimeStamp = stru_140E67200.SchedulingGroup->QueryHistoryTimeStamp;
    if ( QueryHistoryTimeStamp <= a2 )
    {
      Policy = stru_140E67200.SchedulingGroup->Policy;
      if ( *(struct _KTHREAD **)&stru_140E67200.SchedulingGroup->RelativeWeight != (struct _KTHREAD *)&stru_140E67200.SchedulingGroup
        || *(_KSCHEDULING_GROUP *volatile *)(*(_QWORD *)&Policy + 8LL) != stru_140E67200.SchedulingGroup )
      {
        __fastfail(3u);
      }
      stru_140E67200.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)stru_140E67200.SchedulingGroup->Policy;
      *(_QWORD *)(*(_QWORD *)&Policy + 8LL) = &stru_140E67200.SchedulingGroup;
      --*(_DWORD *)&stru_140E67200.ApcStateFill[24];
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)&stru_140E67200.116 + 4));
      v5 = 0;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v17 = PreviousMode;
      if ( PreviousMode )
      {
        ProbeForWrite(a1, a2, 8u);
        PreviousMode = v17;
      }
      v13 = *(unsigned int *)p_QueryHistoryTimeStamp;
      p_ChildMinWeight = &SchedulingGroup->ChildMinWeight;
      if ( PreviousMode )
        RtlCopyToUser((void *)a1, p_ChildMinWeight, v13);
      else
        RtlCopyVolatileMemory((void *)a1, p_ChildMinWeight, v13);
      *a3 = *(_DWORD *)p_QueryHistoryTimeStamp;
      ExFreePoolWithTag(SchedulingGroup, 0);
      v9 = 0;
    }
    else
    {
      *a3 = QueryHistoryTimeStamp;
      v9 = -1073741789;
    }
  }
  if ( v5 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)&stru_140E67200.116 + 4));
  return v9;
}
