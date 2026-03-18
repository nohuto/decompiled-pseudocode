/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1401352D0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     UserGetDesktopDC @ 0x140098B10 (UserGetDesktopDC.c)
 */

HDC __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  HDC DisplayDC; // rbx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(2u, 1, 0);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
    DisplayDC = GreCreateDisplayDC(*(HDEV *)(v3[0] + 48LL), 2u, 1);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return DisplayDC;
}
