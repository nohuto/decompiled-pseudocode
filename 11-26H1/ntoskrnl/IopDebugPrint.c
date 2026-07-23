/*
 * XREFs of IopDebugPrint @ 0x1405DC688
 * Callers:
 *     PnpCollectOpenHandles @ 0x1407B0814 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x140B27620 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14039933C (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(unsigned int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal((int)"NTOSPNP:", 32, a1, a2, va, 1);
  return a1;
}
