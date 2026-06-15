/*
 * XREFs of sub_14004710C @ 0x14004710C
 * Callers:
 *     sub_1400B0551 @ 0x1400B0551 (sub_1400B0551.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_14004710C(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    result = *a1;
    v3 = **a1;
    *result = (__int64)v1;
    if ( v3 )
      return (__int64 *)sub_1400B6010(v3);
  }
  return result;
}
