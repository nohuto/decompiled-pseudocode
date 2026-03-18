/*
 * XREFs of CddEngCreateRectRgn @ 0x1401345C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140044C7C (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14013472C (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CddEngCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  struct _RECTL v10; // [rsp+28h] [rbp-20h] BYREF

  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v9);
  result = 0LL;
  if ( v9 )
  {
    v10.left = a1;
    v10.top = a2;
    v10.right = a3;
    v10.bottom = a4;
    RGNCOREOBJ::vSet((RGNCOREOBJ *)&v9, &v10);
    return v9;
  }
  return result;
}
