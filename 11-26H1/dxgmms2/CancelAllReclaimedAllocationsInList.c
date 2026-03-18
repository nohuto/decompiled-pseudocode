/*
 * XREFs of CancelAllReclaimedAllocationsInList @ 0x1400F8C34
 * Callers:
 *     PageInAllocation_0 @ 0x1400D2924 (PageInAllocation_0.c)
 * Callees:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400F8CD0 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z.c)
 */

_QWORD *__fastcall CancelAllReclaimedAllocationsInList(__int64 a1, _QWORD **a2, bool a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  struct VIDMM_PHYSICAL_ALLOC_LEGACY *v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rcx

  result = *(_QWORD **)&g_IsInternalReleaseOrDbg;
  if ( g_IsInternalReleaseOrDbg )
  {
    result = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    WdLogGlobalForLineNumber = 2731;
  }
  v5 = *a2;
  while ( v5 != a2 )
  {
    v6 = (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)(v5 - 10);
    v7 = v5;
    v5 = (_QWORD *)*v5;
    VIDMM_SEGMENT::ReAllocateOldResource(*((VIDMM_SEGMENT **)v6 + 8), v6, a3);
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (result = (_QWORD *)v7[1], (_QWORD *)*result != v7) )
      __fastfail(3u);
    *result = v8;
    *(_QWORD *)(v8 + 8) = result;
    *v7 = 0LL;
    v7[1] = 0LL;
  }
  return result;
}
