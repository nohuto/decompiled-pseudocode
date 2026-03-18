/*
 * XREFs of NtGdiMakeInfoDC @ 0x1402270B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiMakeInfoDC(HDC a1, int a2)
{
  unsigned int InfoDC; // ebx
  DC *v5[15]; // [rsp+20h] [rbp-78h] BYREF

  InfoDC = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( v5[0] )
    InfoDC = DC::bMakeInfoDC(v5[0], a2);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return InfoDC;
}
