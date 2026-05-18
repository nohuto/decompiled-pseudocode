/*
 * XREFs of sub_18006FAE0 @ 0x18006FAE0
 * Callers:
 *     sub_18006F91C @ 0x18006F91C (sub_18006F91C.c)
 *     sub_18007AFEC @ 0x18007AFEC (sub_18007AFEC.c)
 *     sub_1800852C0 @ 0x1800852C0 (sub_1800852C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006FAE0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x1FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 3;
  v4 = v3 >> 1;
  if ( v3 <= 0x1FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
