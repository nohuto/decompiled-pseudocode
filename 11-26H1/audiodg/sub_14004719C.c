/*
 * XREFs of sub_14004719C @ 0x14004719C
 * Callers:
 *     sub_1400AE500 @ 0x1400AE500 (sub_1400AE500.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14004719C(_BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return sub_1400B6010(*(_QWORD *)(*(_QWORD *)a1 + 152LL));
  }
  return result;
}
