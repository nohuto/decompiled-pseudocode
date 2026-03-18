/*
 * XREFs of ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1403BACD0
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall IsAMDDriverEscapeAllowed(_DWORD *a1, unsigned __int64 a2)
{
  unsigned int v3; // eax

  if ( a2 < 0xC )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 688;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver private driver escape called with a buffer that is too small, failing the escape request.",
      688LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  v3 = a1[2] & 0xFFFFFF00;
  if ( v3 == 16778752 || ((v3 - 16779008) & 0xFFFFFEFF) == 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 675;
    return 0LL;
  }
  return 1LL;
}
