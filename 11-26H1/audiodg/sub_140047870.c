/*
 * XREFs of sub_140047870 @ 0x140047870
 * Callers:
 *     sub_1400B022B @ 0x1400B022B (sub_1400B022B.c)
 *     sub_1400B1D31 @ 0x1400B1D31 (sub_1400B1D31.c)
 *     sub_1400B1E63 @ 0x1400B1E63 (sub_1400B1E63.c)
 *     sub_1400B3ECC @ 0x1400B3ECC (sub_1400B3ECC.c)
 *     sub_1400B3EDE @ 0x1400B3EDE (sub_1400B3EDE.c)
 *     sub_1400B3F6E @ 0x1400B3F6E (sub_1400B3F6E.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_140047870(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)sub_1400B6010(v2);
  }
  return result;
}
