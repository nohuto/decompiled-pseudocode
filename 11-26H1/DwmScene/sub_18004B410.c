/*
 * XREFs of sub_18004B410 @ 0x18004B410
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800153D8 @ 0x1800153D8 (sub_1800153D8.c)
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 */

__int64 *__fastcall sub_18004B410(__int64 a1)
{
  __int64 v2; // rdi
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  if ( 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v2) >> 3) )
  {
    sub_180049070(v2, *(_QWORD *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = v2;
  }
  v4 = 0LL;
  return sub_1800153D8(a1, &v4);
}
