/*
 * XREFs of NtGdiCreateMetafileDC @ 0x14016F900
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x14000F79C (UserGetDesktopDC.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  __int64 DisplayDC; // rbx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(2u, 1LL, 0);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
    DisplayDC = GreCreateDisplayDC(*(HDEV *)(v3[0] + 48LL), 2u, 1);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return DisplayDC;
}
