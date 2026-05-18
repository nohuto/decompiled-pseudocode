/*
 * XREFs of sub_18004B664 @ 0x18004B664
 * Callers:
 *     sub_180048F34 @ 0x180048F34 (sub_180048F34.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180048F14 @ 0x180048F14 (sub_180048F14.c)
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 *     sub_18004B590 @ 0x18004B590 (sub_18004B590.c)
 */

__int64 __fastcall sub_18004B664(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    std::_Xlength_error("vector too long");
  v3 = sub_18004B590(a1, a2);
  v4 = *a1;
  v5 = v3;
  if ( *a1 )
  {
    sub_180049070(v4, a1[1]);
    sub_18000E26C((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v7 = v5;
  result = sub_180048F14(v4, &v7);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 88 * v5;
  return result;
}
