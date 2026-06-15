/*
 * XREFs of sub_1400493CC @ 0x1400493CC
 * Callers:
 *     sub_14004935C @ 0x14004935C (sub_14004935C.c)
 *     sub_1400499DC @ 0x1400499DC (sub_1400499DC.c)
 * Callees:
 *     _o_terminate @ 0x14004A67C (_o_terminate.c)
 *     __current_exception @ 0x14004A6C4 (__current_exception.c)
 *     __current_exception_context @ 0x14004A6D0 (__current_exception_context.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400493CC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0LL; i != a3; ++i )
  {
    a1 -= a2;
    result = sub_1400B6010(a1);
  }
  return result;
}
