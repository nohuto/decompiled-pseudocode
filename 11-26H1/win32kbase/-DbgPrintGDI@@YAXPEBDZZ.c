/*
 * XREFs of ?DbgPrintGDI@@YAXPEBDZZ @ 0x1401F0DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void DbgPrintGDI(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 0, Format, va);
}
