/*
 * XREFs of GreCreateCompatibleDC @ 0x140041620
 * Callers:
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 * Callees:
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x140041660 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140041810 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140041880 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC CompatibleDC; // rbx
  _BYTE v3[136]; // [rsp+20h] [rbp-88h] BYREF

  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v3, a1);
  CompatibleDC = GrepCreateCompatibleDC((struct OPTAPIDCOBJ *)v3);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v3);
  return CompatibleDC;
}
