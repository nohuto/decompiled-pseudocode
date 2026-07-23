/*
 * XREFs of HalpPCIPerformConfigAccess @ 0x140476FE8
 * Callers:
 *     HalpPciAccessIoConfigSpace @ 0x14058E828 (HalpPciAccessIoConfigSpace.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpPCIPerformConfigAccess(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 result; // rax
  int i; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  for ( i = a5; i; i -= result )
  {
    result = guard_dispatch_icall_no_overrides(a2, a3);
    a4 += result;
    a3 += (unsigned int)result;
  }
  return result;
}
