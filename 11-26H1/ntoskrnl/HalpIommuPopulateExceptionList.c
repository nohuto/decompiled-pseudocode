/*
 * XREFs of HalpIommuPopulateExceptionList @ 0x14050C65C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140C0D57C (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpIommuAddDebuggerException @ 0x14050C67C (HalpIommuAddDebuggerException.c)
 */

__int64 HalpIommuPopulateExceptionList()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = HalpIommuAddDebuggerException();
  result = 0LL;
  if ( v0 < 0 )
    return (unsigned int)v0;
  return result;
}
