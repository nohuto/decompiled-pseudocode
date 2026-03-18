/*
 * XREFs of IopDebugPrint @ 0x1405D9E88
 * Callers:
 *     PnpCollectOpenHandles @ 0x1407AD7B4 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x140B25490 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403975BC (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(unsigned int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal((int)"NTOSPNP:", 32, a1, a2, va, 1);
  return a1;
}
