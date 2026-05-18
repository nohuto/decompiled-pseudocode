/*
 * XREFs of sub_18000C014 @ 0x18000C014
 * Callers:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 * Callees:
 *     _o_terminate @ 0x18000CEB8 (_o_terminate.c)
 *     __current_exception @ 0x18000CEF4 (__current_exception.c)
 *     __current_exception_context @ 0x18000CF00 (__current_exception_context.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18000C014(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0LL; i != a3; ++i )
  {
    a1 -= a2;
    result = a4(a1);
  }
  return result;
}
