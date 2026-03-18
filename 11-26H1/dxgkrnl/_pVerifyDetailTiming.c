/*
 * XREFs of _pVerifyDetailTiming @ 0x140275D6C
 * Callers:
 *     _pReadDetailTimingFromReg @ 0x140275BF4 (_pReadDetailTimingFromReg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pVerifyDetailTiming(__int64 a1)
{
  if ( (*(_DWORD *)a1 & 0xFFFFFF) == 0 )
  {
    WdLogSingleEntry2(3LL, *(_DWORD *)a1 & 0xFFFFFFLL, a1);
    WdLogGlobalForLineNumber = 321;
    return 3221225485LL;
  }
  if ( *(unsigned __int16 *)(a1 + 4) < 0x64u )
  {
    WdLogSingleEntry2(3LL, *(unsigned __int16 *)(a1 + 4), a1);
    WdLogGlobalForLineNumber = 330;
    return 3221225485LL;
  }
  if ( *(unsigned __int16 *)(a1 + 12) < 0x64u )
  {
    WdLogSingleEntry2(3LL, *(unsigned __int16 *)(a1 + 12), a1);
    WdLogGlobalForLineNumber = 337;
    return 3221225485LL;
  }
  return 0LL;
}
