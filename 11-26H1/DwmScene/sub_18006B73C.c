/*
 * XREFs of sub_18006B73C @ 0x18006B73C
 * Callers:
 *     sub_18006BB00 @ 0x18006BB00 (sub_18006BB00.c)
 * Callees:
 *     sub_18006B70C @ 0x18006B70C (sub_18006B70C.c)
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 *     sub_18006B9D8 @ 0x18006B9D8 (sub_18006B9D8.c)
 *     sub_18006BB70 @ 0x18006BB70 (sub_18006BB70.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006B73C(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v2 = 8LL;
  v6 = 8LL;
  v4 = sub_18006B70C((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  a1[2] = v4 + 1024;
  v6 = (__int64)a1;
  do
  {
    sub_18006B9D8(v3, v4);
    v4 += 128LL;
    --v2;
  }
  while ( v2 );
  sub_18006B7DC(v4, v4);
  a1[1] = v4;
  v6 = 0LL;
  return sub_18006BB70(&v6);
}
