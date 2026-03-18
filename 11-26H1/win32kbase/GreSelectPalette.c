/*
 * XREFs of GreSelectPalette @ 0x1400C2C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 */

HPALETTE __fastcall GreSelectPalette(HDC a1, HPALETTE a2, int a3)
{
  HPALETTE v5; // rbx
  _QWORD v7[14]; // [rsp+20h] [rbp-78h] BYREF

  v5 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = GrepSelectPalette((struct XDCOBJ *)v7, a2, a3);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v5;
}
