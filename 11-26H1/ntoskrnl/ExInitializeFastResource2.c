/*
 * XREFs of ExInitializeFastResource2 @ 0x1404569D0
 * Callers:
 *     ExInitializeFastResourceAcquired @ 0x1404567B0 (ExInitializeFastResourceAcquired.c)
 *     ExInitializeFastResource @ 0x1404569B0 (ExInitializeFastResource.c)
 *     DifExInitializeFastResourceWrapper @ 0x140651D20 (DifExInitializeFastResourceWrapper.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall ExInitializeFastResource2(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // al
  __int64 v7; // rbx
  char v8; // al
  __int16 v9; // ax
  __int64 result; // rax
  KSPIN_LOCK *p_Policy; // rsi
  unsigned __int16 *v12; // rax
  __int64 *v13; // r15
  int RecordedStackTraceIndex; // r14d

  v4 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (BugCheckParameter3 & 0xFFFFFFF6) != 0 )
    KeBugCheckEx(0x1C6u, 0x10uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  memset_0((void *)BugCheckParameter2, 0, 0x68uLL);
  v7 = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 80) = 0LL;
  v8 = *(_BYTE *)(BugCheckParameter2 + 101) & 0xFA;
  *(_DWORD *)(BugCheckParameter2 + 96) = 0;
  *(_BYTE *)(BugCheckParameter2 + 100) = 0;
  *(_BYTE *)(BugCheckParameter2 + 101) = v8 | 2;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v12 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
      v13 = (__int64 *)v12;
      if ( v12 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v12);
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)p_Policy, v13);
      }
      else
      {
        LOWORD(RecordedStackTraceIndex) = 0;
      }
      LOWORD(v7) = RecordedStackTraceIndex;
    }
    v7 = (unsigned __int16)v7;
  }
  *(_QWORD *)(BugCheckParameter2 + 40) = v7;
  v9 = *(_WORD *)(BugCheckParameter2 + 26) | 1;
  *(_WORD *)(BugCheckParameter2 + 26) = v9;
  if ( (v4 & 1) != 0 )
  {
    v9 |= 0x40u;
    *(_WORD *)(BugCheckParameter2 + 26) = v9;
  }
  if ( (v4 & 8) != 0 )
    *(_WORD *)(BugCheckParameter2 + 26) = v9 | 8;
  result = 0xFFFFFFFFLL;
  if ( a3 == -1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 28) = -1;
  }
  else
  {
    result = 0x624DD2F1A9FBE77LL * (unsigned int)(a3 + 3999);
    *(_DWORD *)(BugCheckParameter2 + 28) = (a3 + 3999) / 0xFA0u;
  }
  return result;
}
