/*
 * XREFs of NtGdiSelectFont @ 0x140054D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140054DF0 (-GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

HFONT __fastcall NtGdiSelectFont(HDC a1, HFONT a2)
{
  HFONT v3; // rbx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0LL;
  if ( v5[0] )
    v3 = GrepSelectFont((struct XDCOBJ *)v5, a2, 0);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
