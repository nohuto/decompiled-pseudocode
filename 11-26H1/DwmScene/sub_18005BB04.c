/*
 * XREFs of sub_18005BB04 @ 0x18005BB04
 * Callers:
 *     sub_180056274 @ 0x180056274 (sub_180056274.c)
 *     sub_180056560 @ 0x180056560 (sub_180056560.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18005BB04(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x555555555555555LL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4) <= 0x555555555555555LL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 4);
    if ( result < a2 )
      return a2;
  }
  return result;
}
