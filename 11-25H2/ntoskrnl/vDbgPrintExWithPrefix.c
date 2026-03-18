/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1403A94F0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403A9714 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((_DWORD)Prefix, ComponentId, Level, (_DWORD)Format, arglist, 1);
}
