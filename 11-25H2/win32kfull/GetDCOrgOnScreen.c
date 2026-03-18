/*
 * XREFs of GetDCOrgOnScreen @ 0x140157CA0
 * Callers:
 *     _ExcludeUpdateRgn @ 0x140054468 (_ExcludeUpdateRgn.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x140156C38 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x14004BE20 (UserGetRedirectedWindowOrigin.c)
 */

__int64 __fastcall GetDCOrgOnScreen(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)GreGetDCOrg(a1, a2) )
    return 0LL;
  v5 = 0LL;
  if ( !(unsigned int)UserGetRedirectedWindowOrigin(a1, (__int64)&v5) )
    return 0LL;
  *a2 += v5;
  a2[1] += HIDWORD(v5);
  return 1LL;
}
