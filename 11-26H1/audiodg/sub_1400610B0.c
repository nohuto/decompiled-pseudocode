/*
 * XREFs of sub_1400610B0 @ 0x1400610B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400610B0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  sub_1400B6010(*a2);
  sub_1400B6010(0LL);
  result = sub_1400B6010(*a2);
  *a2 = 0LL;
  return result;
}
