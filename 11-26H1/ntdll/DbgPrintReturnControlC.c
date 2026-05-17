/*
 * XREFs of DbgPrintReturnControlC @ 0x18013B990
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800DE698 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DbgPrintReturnControlC(int a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal((int)&unk_180176D3C, 101, 0, a1, (__int64)va, 0, 0LL);
}
