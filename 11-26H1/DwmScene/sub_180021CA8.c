/*
 * XREFs of sub_180021CA8 @ 0x180021CA8
 * Callers:
 *     sub_180003650 @ 0x180003650 (sub_180003650.c)
 *     sub_180022534 @ 0x180022534 (sub_180022534.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

__int64 *__fastcall sub_180021CA8(__int64 *a1)
{
  __int64 v2; // rax

  v2 = sub_18001C514(56LL);
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  *a1 = v2;
  return a1;
}
