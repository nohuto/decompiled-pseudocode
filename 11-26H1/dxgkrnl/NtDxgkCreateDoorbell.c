/*
 * XREFs of NtDxgkCreateDoorbell @ 0x1401E4150
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 NtDxgkCreateDoorbell()
{
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 4408;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"NtDxgkCreateDoorbell is deprecated starting DXGK_FEATURE_USER_MODE_SUBMISSION v2, returning 0x%I64x",
    -1073741637LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225659LL;
}
