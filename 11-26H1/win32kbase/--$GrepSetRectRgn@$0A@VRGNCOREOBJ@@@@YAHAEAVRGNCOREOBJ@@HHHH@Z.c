/*
 * XREFs of ??$GrepSetRectRgn@$0A@VRGNCOREOBJ@@@@YAHAEAVRGNCOREOBJ@@HHHH@Z @ 0x140134678
 * Callers:
 *     CddEngSetRectRgn @ 0x140134650 (CddEngSetRectRgn.c)
 * Callees:
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14013472C (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall GrepSetRectRgn<0,RGNCOREOBJ>(RGNCOREOBJ *this, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // r10d
  struct _RECTL v7; // [rsp+20h] [rbp-28h] BYREF

  v7.left = a2;
  v5 = 0;
  v7.top = a3;
  v7.right = a4;
  v7.bottom = a5;
  if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == 0xF8000000)
    && ((a5 & 0xF8000000) == 0 || (a5 & 0xF8000000) == 0xF8000000)
    && ((a4 & 0xF8000000) == 0 || (a4 & 0xF8000000) == 0xF8000000)
    && ((a3 & 0xF8000000) == 0 || (a3 & 0xF8000000) == 0xF8000000) )
  {
    if ( a2 > a4 )
    {
      v7.left = a4;
      v7.right = a2;
    }
    if ( a3 > a5 )
    {
      v7.top = a5;
      v7.bottom = a3;
    }
    RGNCOREOBJ::vSet(this, &v7);
    return 1;
  }
  return v5;
}
