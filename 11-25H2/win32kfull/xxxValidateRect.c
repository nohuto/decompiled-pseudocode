/*
 * XREFs of xxxValidateRect @ 0x14002D168
 * Callers:
 *     NtUserValidateRect @ 0x14002D070 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  if ( a1 )
  {
    v2 = 8LL;
  }
  else
  {
    a2 = 0LL;
    v2 = 645LL;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
