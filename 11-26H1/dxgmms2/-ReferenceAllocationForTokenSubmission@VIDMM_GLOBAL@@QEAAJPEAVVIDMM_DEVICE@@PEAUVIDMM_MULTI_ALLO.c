/*
 * XREFs of ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAI@Z @ 0x1401162A8
 * Callers:
 *     VidMmReferenceAllocationForTokenSubmission @ 0x14003BA90 (VidMmReferenceAllocationForTokenSubmission.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?Increment@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z @ 0x14003D35C (-Increment@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_DEVICE **a3,
        struct VIDMM_DEVICE ***a4,
        unsigned int *a5)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  struct VIDMM_DEVICE *v9; // r9
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *a4 = 0LL;
  v7 = *(_QWORD *)*a3;
  if ( *(_BYTE *)(v7 + 41) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 9054;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v7;
      WdLogGlobalForLineNumber = 9055;
    }
    return 3223191814LL;
  }
  else
  {
    v8 = *(unsigned int *)(*(_QWORD *)(v7 + 368) + 16LL);
    if ( (_DWORD)v8 )
    {
      if ( a2 && (v9 = a3[1], v9 != a2) )
      {
        WdLogSingleEntry3(1LL, a2, a3, v9);
        WdLogGlobalForLineNumber = 9082;
        DxgkLogInternalTriageEvent(v13, 0x40000LL);
        return 3223191829LL;
      }
      else
      {
        InterlockedCounterWithHistoryRelease::Increment((InterlockedCounterWithHistoryRelease *)(a3 + 13), a5);
        result = 0LL;
        *a4 = a3;
      }
    }
    else
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v8);
        WdLogGlobalForLineNumber = 9068;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v7;
        WdLogGlobalForLineNumber = 9069;
      }
      return 3223191812LL;
    }
  }
  return result;
}
