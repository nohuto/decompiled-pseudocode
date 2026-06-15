/*
 * XREFs of sub_140061290 @ 0x140061290
 * Callers:
 *     sub_14003D780 @ 0x14003D780 (sub_14003D780.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140061290(_QWORD *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1400E8718 )
  {
    sub_1400B6010(qword_1400E8718);
    *a1 = qword_1400E8718;
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v2;
}
