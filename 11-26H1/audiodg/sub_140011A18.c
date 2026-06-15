/*
 * XREFs of sub_140011A18 @ 0x140011A18
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002D758 @ 0x14002D758 (sub_14002D758.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     sub_1400110B8 @ 0x1400110B8 (sub_1400110B8.c)
 *     sub_140011248 @ 0x140011248 (sub_140011248.c)
 */

__int64 *__fastcall sub_140011A18(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 *result; // rax
  __int64 **v6; // rcx

  if ( !a2 )
    return sub_1400110B8(a1, a3);
  result = sub_140011248((__int64)a1, a3, *(_QWORD *)(a2 + 8), a2);
  v6 = *(__int64 ***)(a2 + 8);
  if ( v6 )
    *v6 = result;
  else
    *a1 = (__int64)result;
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
