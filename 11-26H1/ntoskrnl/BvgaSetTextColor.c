/*
 * XREFs of BvgaSetTextColor @ 0x1405C87B0
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessDispatch @ 0x1406CF8A0 (HeadlessDispatch.c)
 */

__int64 __fastcall BvgaSetTextColor(unsigned int a1)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+4Ch] [rbp+14h]

  v4 = 40;
  BvgaTerminalTextColor = 37;
  v3 = 37;
  HeadlessDispatch(9LL, &v3, 8LL);
  return VidSetTextColor(a1);
}
