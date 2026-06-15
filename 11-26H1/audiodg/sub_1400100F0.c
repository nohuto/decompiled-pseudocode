/*
 * XREFs of sub_1400100F0 @ 0x1400100F0
 * Callers:
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_1400100F0(__int64 a1, __int64 *a2)
{
  if ( !a2 )
    sub_14004639C(2147500037LL, 0LL);
  if ( a2 == (__int64 *)qword_1400E7C38 )
    qword_1400E7C38 = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_1400E7C40 )
    qword_1400E7C40 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  return sub_14000EA08((__int64)&qword_1400E7C38, a2);
}
