/*
 * XREFs of sub_140011EE8 @ 0x140011EE8
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     sub_140011180 @ 0x140011180 (sub_140011180.c)
 *     sub_140011248 @ 0x140011248 (sub_140011248.c)
 */

__int64 *__fastcall sub_140011EE8(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *result; // rax

  if ( !a2 )
    return sub_140011180(a1, a3);
  result = sub_140011248(a1, a3, (__int64)a2, *a2);
  if ( *a2 )
    *(_QWORD *)(*a2 + 8) = result;
  else
    *(_QWORD *)(a1 + 8) = result;
  *a2 = (__int64)result;
  return result;
}
