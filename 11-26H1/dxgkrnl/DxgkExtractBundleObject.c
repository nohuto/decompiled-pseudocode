/*
 * XREFs of DxgkExtractBundleObject @ 0x1401EADF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DxgkExtractBundleObjectInternal @ 0x1401EAE74 (DxgkExtractBundleObjectInternal.c)
 */

__int64 __fastcall DxgkExtractBundleObject(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2963;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      2963LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  return DxgkExtractBundleObjectInternal(v3, v2, 0LL, a1);
}
