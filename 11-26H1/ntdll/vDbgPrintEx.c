/*
 * XREFs of vDbgPrintEx @ 0x18013BA50
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800DE698 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 __fastcall vDbgPrintEx(int a1, int a2, int a3, __int64 a4)
{
  return vDbgPrintExWithPrefixInternal((int)&unk_180176D3C, a1, a2, a3, a4, 1);
}
