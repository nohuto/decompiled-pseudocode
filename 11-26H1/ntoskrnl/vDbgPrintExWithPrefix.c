/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1404D3B00
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14039933C (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((int)Prefix, ComponentId, Level, (int)Format, arglist, 1);
}
