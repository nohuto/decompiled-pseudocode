/*
 * XREFs of sub_1400499DC @ 0x1400499DC
 * Callers:
 *     sub_140018318 @ 0x140018318 (sub_140018318.c)
 *     sub_14003322C @ 0x14003322C (sub_14003322C.c)
 *     sub_140033284 @ 0x140033284 (sub_140033284.c)
 *     sub_140055EB8 @ 0x140055EB8 (sub_140055EB8.c)
 * Callees:
 *     sub_1400493CC @ 0x1400493CC (sub_1400493CC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_UNKNOWN **__fastcall sub_1400499DC(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 i; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; i != a3; ++i )
  {
    result = (_UNKNOWN **)sub_1400B6010(a1);
    a1 += a2;
  }
  return result;
}
