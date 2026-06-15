/*
 * XREFs of sub_14003AF74 @ 0x14003AF74
 * Callers:
 *     sub_1400AF01A @ 0x1400AF01A (sub_1400AF01A.c)
 *     sub_1400AF185 @ 0x1400AF185 (sub_1400AF185.c)
 *     sub_1400AF382 @ 0x1400AF382 (sub_1400AF382.c)
 *     sub_1400AF91E @ 0x1400AF91E (sub_1400AF91E.c)
 *     sub_1400B204D @ 0x1400B204D (sub_1400B204D.c)
 *     sub_1400B20AD @ 0x1400B20AD (sub_1400B20AD.c)
 *     sub_1400B3546 @ 0x1400B3546 (sub_1400B3546.c)
 *     sub_1400B356A @ 0x1400B356A (sub_1400B356A.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_14003AF74(_QWORD *a1)
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
