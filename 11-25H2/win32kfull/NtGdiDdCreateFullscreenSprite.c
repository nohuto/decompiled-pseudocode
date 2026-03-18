/*
 * XREFs of NtGdiDdCreateFullscreenSprite @ 0x140326910
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140321FE8 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  unsigned int FullscreenSprite; // ebx
  _QWORD v9[14]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  if ( v9[0] )
    FullscreenSprite = SpDdCreateFullscreenSprite((struct XDCOBJ *)v9, a2, a3, a4);
  else
    FullscreenSprite = -1073741811;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  return FullscreenSprite;
}
