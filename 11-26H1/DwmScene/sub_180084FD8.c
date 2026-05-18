/*
 * XREFs of sub_180084FD8 @ 0x180084FD8
 * Callers:
 *     sub_18008465C @ 0x18008465C (sub_18008465C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180076340 @ 0x180076340 (sub_180076340.c)
 */

__int64 __fastcall sub_180084FD8(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  v2 = 0x555555555555555LL;
  if ( a2 > 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 4);
  v5 = v4 >> 1;
  if ( v4 <= 0x555555555555555LL - (v4 >> 1) )
  {
    v2 = v5 + v4;
    if ( v5 + v4 < a2 )
      v2 = a2;
  }
  if ( *a1 )
  {
    sub_180076340(*a1, a1[1]);
    sub_18000E26C((void *)*a1, 16 * ((a1[2] - *a1) >> 4));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_18008155C(a1, v2);
}
