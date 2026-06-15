/*
 * XREFs of sub_1400B4590 @ 0x1400B4590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
double sub_1400B4590()
{
  __int64 v0; // rcx
  double result; // xmm0_8

  v0 = qword_1400E8718;
  if ( qword_1400E8718 )
  {
    qword_1400E8718 = 0LL;
    return sub_1400B6010(v0);
  }
  return result;
}
