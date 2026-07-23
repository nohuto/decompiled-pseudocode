/*
 * XREFs of RtlLongLongAdd @ 0x1405347AC
 * Callers:
 *     PopReadPagesFromHiberFile @ 0x140778074 (PopReadPagesFromHiberFile.c)
 *     RtlParseLeapSecondData @ 0x1408ADA94 (RtlParseLeapSecondData.c)
 *     PspChargeJobWakeCounter @ 0x140AAC2B0 (PspChargeJobWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLongLongAdd(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // r9d
  unsigned __int64 v5; // rcx

  v3 = a1 + a2;
  v4 = 0;
  v5 = a1 >> 63;
  if ( (_DWORD)v5 == a2 >> 63 && (_DWORD)v5 != v3 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = -1073741675;
    v3 = -1LL;
  }
  *a3 = v3;
  return v4;
}
