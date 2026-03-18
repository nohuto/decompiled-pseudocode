/*
 * XREFs of ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAI@Z @ 0x14011555C
 * Callers:
 *     VidMmReferencePrimaryAllocationForSubmission @ 0x14003A570 (VidMmReferencePrimaryAllocationForSubmission.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?Increment@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z @ 0x14003D35C (-Increment@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4,
        unsigned int *a5)
{
  __int64 v7; // rbx
  int *v8; // rcx
  struct VIDMM_DEVICE *v9; // r9
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  *a4 = 0LL;
  v7 = **(_QWORD **)a3;
  if ( !*(_BYTE *)(v7 + 41) )
  {
    v8 = *(int **)(v7 + 368);
    if ( (*v8 & 0x40000100) != 0 || *v8 < 0 )
    {
      if ( v8[4] )
      {
        v9 = (struct VIDMM_DEVICE *)*((_QWORD *)a3 + 1);
        if ( v9 == a2 )
        {
          InterlockedCounterWithHistoryRelease::Increment((struct VIDMM_MULTI_ALLOC *)((char *)a3 + 104), a5);
          result = 0LL;
          *a4 = a3;
        }
        else
        {
          WdLogSingleEntry3(1LL, a2, a3, v9);
          WdLogGlobalForLineNumber = 8998;
          DxgkLogInternalTriageEvent(v12, 0x40000LL);
          return 3223191829LL;
        }
        return result;
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v7;
        WdLogGlobalForLineNumber = 8985;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, **(_QWORD **)a3);
      WdLogGlobalForLineNumber = 8975;
      DxgkLogInternalTriageEvent(v11, 0x40000LL);
    }
    return 3221225485LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v7;
    WdLogGlobalForLineNumber = 8963;
  }
  return 3223191814LL;
}
