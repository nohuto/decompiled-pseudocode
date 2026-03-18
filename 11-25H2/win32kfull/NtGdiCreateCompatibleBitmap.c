/*
 * XREFs of NtGdiCreateCompatibleBitmap @ 0x14007C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x14007D1C4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall NtGdiCreateCompatibleBitmap(HDC a1, int a2, int a3)
{
  HBITMAP CompatibleBitmap; // rbx
  _BYTE v7[136]; // [rsp+30h] [rbp-88h] BYREF

  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v7, a1);
  CompatibleBitmap = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v7, a2, a3 & 0xF0FFFFFF, 0, 0LL, 0LL);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v7);
  return CompatibleBitmap;
}
