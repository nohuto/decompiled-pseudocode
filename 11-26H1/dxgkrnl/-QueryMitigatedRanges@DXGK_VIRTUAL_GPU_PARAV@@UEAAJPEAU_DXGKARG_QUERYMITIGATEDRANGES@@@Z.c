/*
 * XREFs of ?QueryMitigatedRanges@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x14021C760
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::QueryMitigatedRanges(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_QUERYMITIGATEDRANGES *a2)
{
  __int64 NumRanges; // [rsp+20h] [rbp-38h]

  if ( !a2->NumRanges )
    return 0LL;
  WdLogSingleEntry1(2LL);
  NumRanges = a2->NumRanges;
  WdLogGlobalForLineNumber = 665;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid mitigation range count: 0x%I64x",
    NumRanges,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
