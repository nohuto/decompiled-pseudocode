/*
 * XREFs of CddEngCreateRectRgn @ 0x140134F80
 * Callers:
 *     <none>
 * Callees:
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011470 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140020078 (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

Win32kRS *__fastcall CddEngCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  Win32kRS *result; // rax
  Win32kRS *v9; // [rsp+20h] [rbp-28h] BYREF
  struct _RECTL v10; // [rsp+28h] [rbp-20h] BYREF

  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v9);
  result = 0LL;
  if ( v9 )
  {
    v10.left = a1;
    v10.top = a2;
    v10.right = a3;
    v10.bottom = a4;
    RGNCOREOBJ::vSet(&v9, &v10);
    return v9;
  }
  return result;
}
