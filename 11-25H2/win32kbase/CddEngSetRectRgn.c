/*
 * XREFs of CddEngSetRectRgn @ 0x140116AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepSetRectRgn@$0A@VRGNCOREOBJ@@@@YAHAEAVRGNCOREOBJ@@HHHH@Z @ 0x140116AC8 (--$GrepSetRectRgn@$0A@VRGNCOREOBJ@@@@YAHAEAVRGNCOREOBJ@@HHHH@Z.c)
 */

__int64 __fastcall CddEngSetRectRgn(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  return GrepSetRectRgn<0,RGNCOREOBJ>((RGNCOREOBJ *)&v6, a5);
}
