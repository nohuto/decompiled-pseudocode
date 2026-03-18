/*
 * XREFs of GreSelectPen @ 0x140156820
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1401C70C0 (-GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 */

HPEN __fastcall GreSelectPen(HDC a1, HPEN a2)
{
  HPEN v3; // rbx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0LL;
  if ( v5[0] )
    v3 = GrepSelectPen((struct XDCOBJ *)v5, a2, 1);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
