/*
 * XREFs of HalpIommuPopulateExceptionList @ 0x1405060CC
 * Callers:
 *     HalpIommuInitializeAll @ 0x140C1378C (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpIommuAddDebuggerException @ 0x1405060EC (HalpIommuAddDebuggerException.c)
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
