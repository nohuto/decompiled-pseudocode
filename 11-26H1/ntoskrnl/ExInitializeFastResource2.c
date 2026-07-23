/*
 * XREFs of ExInitializeFastResource2 @ 0x14025FFE0
 * Callers:
 *     ExInitializeFastResourceAcquired @ 0x14025FDC0 (ExInitializeFastResourceAcquired.c)
 *     ExInitializeFastResource @ 0x14025FFC0 (ExInitializeFastResource.c)
 *     DifExInitializeFastResourceWrapper @ 0x140655900 (DifExInitializeFastResourceWrapper.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExInitializeFastResource2(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // al
  __int64 v7; // rbx
  char v8; // al
  __int16 v9; // ax
  __int64 result; // rax
  KSPIN_LOCK *v11; // rsi
  __int64 v12; // r15
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
    v11 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v12 = RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags);
      if ( v12 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v11);
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v11, v12);
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
