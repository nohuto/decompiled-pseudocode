/*
 * XREFs of GreExtSelectClipRgn @ 0x1400C353C
 * Callers:
 *     _ExcludeUpdateRgn @ 0x140054468 (_ExcludeUpdateRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140057650 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     DrawTextExWorker @ 0x1400C188C (DrawTextExWorker.c)
 * Callees:
 *     ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x140080068 (-GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreExtSelectClipRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  DC *v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
    v3 = GrepExtSelectClipRgn(v5, a2, 5, 1);
  else
    EngSetLastError(0x57u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
