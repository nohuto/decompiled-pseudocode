/*
 * XREFs of sub_140030434 @ 0x140030434
 * Callers:
 *     sub_1400301D0 @ 0x1400301D0 (sub_1400301D0.c)
 *     sub_14006D1D0 @ 0x14006D1D0 (sub_14006D1D0.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140030434(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax

  v2 = a1;
  if ( !a2 )
    sub_14004639C(2147500037LL, 0LL);
  if ( a2 != (_QWORD *)*a1 )
    a1 = (_QWORD *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == (_QWORD *)v2[1] )
    v2[1] = v3;
  else
    *(_QWORD *)(*a2 + 8LL) = v3;
  return sub_140030488(v2);
}
