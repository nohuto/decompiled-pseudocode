/*
 * XREFs of DpGetMSBDDDisplayInfoPlusEdid @ 0x1402379D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 */

__int64 __fastcall DpGetMSBDDDisplayInfoPlusEdid(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdx
  __int64 result; // rax

  if ( a1 && a2 )
  {
    if ( DpiFdoIsMsBddAnchoredDevice(a1) )
    {
      *v2 = xmmword_140169130;
      v2[1] = *(&xmmword_140169130 + 1);
      v2[2] = *(&xmmword_140169130 + 2);
      v2[3] = *(&xmmword_140169130 + 3);
      v2[4] = *(&xmmword_140169130 + 4);
      v2[5] = *(&xmmword_140169130 + 5);
      v2[6] = *(&xmmword_140169130 + 6);
      v2[7] = *(&xmmword_140169130 + 7);
      v2[8] = *(&xmmword_140169130 + 8);
      result = 0LL;
      v2[9] = *(&xmmword_140169130 + 9);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      result = 3223192632LL;
      WdLogGlobalForLineNumber = 1659;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1650;
  }
  return result;
}
