/*
 * XREFs of ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x140158BD0
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x140156C38 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 * Callees:
 *     GreGetRandomRgn @ 0x140158D50 (GreGetRandomRgn.c)
 */

__int64 __fastcall GetTrueClipRgn(HDC a1, HRGN a2, __int64 a3, __int64 a4)
{
  __int64 EmptyRgn; // rbx
  unsigned int v7; // ebp
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  EmptyRgn = CreateEmptyRgn(a1, a2, a3, a4);
  v7 = GreCopyVisRgn(a1, a2);
  if ( !(unsigned int)GreGetDCOrg(a1, &v9) )
    return 0LL;
  if ( (unsigned int)GreGetRandomRgn(a1) )
  {
    GreOffsetRgn(EmptyRgn, (unsigned int)v9, HIDWORD(v9));
    v7 = GreCombineRgn(a2, a2, EmptyRgn, 1LL);
  }
  GreOffsetRgn(a2, (unsigned int)-(int)v9, (unsigned int)-HIDWORD(v9));
  GreDeleteObject(EmptyRgn);
  return v7;
}
