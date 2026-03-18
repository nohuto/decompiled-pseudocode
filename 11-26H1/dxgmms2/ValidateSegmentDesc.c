/*
 * XREFs of ValidateSegmentDesc @ 0x140051E8C
 * Callers:
 *     ?PbmmCreateAllocator@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@IPEBUPBMM_SEGMENT_DESC@@W4PBMM_PAGE_SIZE@@PEAPEAUPBMM_ALLOCATOR@@@Z @ 0x140051614 (-PbmmCreateAllocator@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@IPEBUPBMM_SEGMENT_DESC@@W4PBMM_PAGE_SIZE@@P.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

char __fastcall ValidateSegmentDesc(int a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax

  v2 = *(_DWORD *)(a2 + 8);
  if ( a1 )
  {
    if ( v2 != 1 )
    {
      WdLogSingleEntry0(1LL);
      v4 = 334;
      goto LABEL_4;
    }
  }
  else if ( v2 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 326;
LABEL_4:
    WdLogGlobalForLineNumber = v4;
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 0;
  }
  return 1;
}
