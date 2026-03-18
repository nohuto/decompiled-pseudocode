/*
 * XREFs of NtGdiGetFontUnicodeRanges @ 0x1401C7B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401C7C50 (-GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontUnicodeRanges(HDC a1, char *a2)
{
  __int64 SessionState; // rax
  unsigned int FontUnicodeRanges; // ebx
  unsigned int *v6; // rax
  unsigned int *v7; // rdi
  int v8; // eax
  char *v10; // rax
  _BYTE v11[48]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v12[10]; // [rsp+50h] [rbp-58h] BYREF

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v11,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v12, a1);
  if ( v12[0] )
    FontUnicodeRanges = GrepGetFontUnicodeRanges(v12, 0LL);
  else
    FontUnicodeRanges = 0;
  if ( FontUnicodeRanges && a2 )
  {
    v6 = (unsigned int *)AllocFreeTmpBuffer(FontUnicodeRanges);
    v7 = v6;
    if ( v6 )
    {
      *v6 = FontUnicodeRanges;
      v8 = GrepGetFontUnicodeRanges(v12, v6);
      if ( v8 && FontUnicodeRanges == v8 )
      {
        v10 = &a2[FontUnicodeRanges];
        if ( (unsigned __int64)v10 > MmUserProbeAddress || v10 <= a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a2, v7, FontUnicodeRanges);
      }
      else
      {
        FontUnicodeRanges = 0;
      }
      FreeTmpBuffer(v7);
    }
    else
    {
      FontUnicodeRanges = 0;
    }
  }
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v12);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v11);
  return FontUnicodeRanges;
}
