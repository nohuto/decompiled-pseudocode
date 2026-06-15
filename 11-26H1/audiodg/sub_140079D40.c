/*
 * XREFs of sub_140079D40 @ 0x140079D40
 * Callers:
 *     sub_140079AA0 @ 0x140079AA0 (sub_140079AA0.c)
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 */

__int64 __fastcall sub_140079D40(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v4; // ebx
  int MatchingRestrictedErrorInfo; // esi
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v4 = a1;
  if ( (_DWORD)a1 == -2147417848
    || (_DWORD)a1 == -2147023174
    || (_DWORD)a1 == -1996357631
    || (_DWORD)a1 == -2147418105
    || (_DWORD)a1 == -2147418094 )
  {
    RoTransformError(a1, 0LL, 0LL);
    v4 = 0;
  }
  if ( (unsigned int)IsErrorPropagationEnabled() )
  {
    if ( v4 < 0 )
    {
      v7 = 0LL;
      sub_1400125D4(&v7);
      MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)v4, &v7);
      if ( MatchingRestrictedErrorInfo >= 0 )
        MatchingRestrictedErrorInfo = RoReportFailedDelegate(a2, v7);
      sub_1400125D4(&v7);
      if ( MatchingRestrictedErrorInfo < 0 )
        return (unsigned int)v4;
      return v2;
    }
  }
  else if ( v4 < 0 )
  {
    RoTransformError((unsigned int)v4, 0LL, 0LL);
    return v2;
  }
  return (unsigned int)v4;
}
