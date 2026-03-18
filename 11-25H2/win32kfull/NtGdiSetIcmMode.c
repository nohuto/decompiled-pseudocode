/*
 * XREFs of NtGdiSetIcmMode @ 0x14008C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z @ 0x14008C430 (-GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z.c)
 */

__int64 __fastcall NtGdiSetIcmMode(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[14]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  v5 = 0;
  if ( v7[0] )
    v5 = GrepSetICMMode((struct XDCOBJ *)v7, a2, a3);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v5;
}
