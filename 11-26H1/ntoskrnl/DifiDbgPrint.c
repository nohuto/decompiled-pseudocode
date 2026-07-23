/*
 * XREFs of DifiDbgPrint @ 0x1406503D0
 * Callers:
 *     CarHandleEtwEvent @ 0x14064CC58 (CarHandleEtwEvent.c)
 *     CarInitLogging @ 0x14064CD54 (CarInitLogging.c)
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     CarInitiateBugcheck @ 0x1406506BC (CarInitiateBugcheck.c)
 *     CarLiveDump @ 0x140650740 (CarLiveDump.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14039933C (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DifiDbgPrint(const char *a1, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, (int)a1, va, 1);
  return result;
}
