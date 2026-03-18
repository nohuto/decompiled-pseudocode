/*
 * XREFs of ExInitializeResourceLite2 @ 0x1406CE730
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall ExInitializeResourceLite2(struct _SINGLE_LIST_ENTRY *a1, int a2)
{
  struct _SINGLE_LIST_ENTRY *v4; // rdi
  KSPIN_LOCK *p_Policy; // rsi
  unsigned __int16 *v6; // rax
  __int64 *v7; // r14
  int RecordedStackTraceIndex; // ebp
  unsigned int v9; // ecx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int64)a1 < 0xFFFF800000000000uLL || MmDeterminePoolType((unsigned __int64)a1) == 256 )
    ExpTraceLogBadResourceAddress((unsigned __int64)a1, retaddr);
  memset_0(a1, 0, 0x68uLL);
  a1[1].Next = a1;
  a1->Next = a1;
  v4 = 0LL;
  a1[4].Next = 0LL;
  a1[5].Next = 0LL;
  a1[12].Next = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v6 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
      v7 = (__int64 *)v6;
      if ( v6 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v6);
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)p_Policy, v7);
      }
      else
      {
        LOWORD(RecordedStackTraceIndex) = 0;
      }
      LOWORD(v4) = RecordedStackTraceIndex;
    }
    v4 = (struct _SINGLE_LIST_ENTRY *)(unsigned __int16)v4;
  }
  v9 = -1;
  a1[11].Next = v4;
  if ( a2 != -1 )
    v9 = (a2 + 3999) / 0xFA0u;
  HIDWORD(a1[10].Next) = v9;
  ExpAddResourceToSystemResourceList(a1);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)a1, 0, 0);
  return 0LL;
}
