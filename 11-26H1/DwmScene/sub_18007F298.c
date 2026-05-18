/*
 * XREFs of sub_18007F298 @ 0x18007F298
 * Callers:
 *     sub_1800853D8 @ 0x1800853D8 (sub_1800853D8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007F298(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x1555555555555555LL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2) <= 0x1555555555555555LL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 2);
    if ( result < a2 )
      return a2;
  }
  return result;
}
