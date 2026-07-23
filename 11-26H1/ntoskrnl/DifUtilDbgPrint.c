/*
 * XREFs of DifUtilDbgPrint @ 0x14064E930
 * Callers:
 *     DifCallPluginEntry @ 0x14064F0A0 (DifCallPluginEntry.c)
 *     DifRegisterKernelPlugins @ 0x14064F5EC (DifRegisterKernelPlugins.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14039933C (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DifUtilDbgPrint(int a1, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  if ( (VfRuleClasses & 0x400000) == 0 )
  {
    result = KeGetCurrentIrql();
    if ( !(_BYTE)result )
      return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, a1, va, 1);
  }
  return result;
}
