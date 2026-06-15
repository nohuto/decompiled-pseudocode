/*
 * XREFs of sub_1400AB460 @ 0x1400AB460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

double __fastcall sub_1400AB460(__int64 a1)
{
  __int64 v1; // rcx
  double result; // xmm0_8

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    return sub_1400B6010(v1);
  return result;
}
