/*
 * XREFs of PopNewWakeSource @ 0x14077877C
 * Callers:
 *     PopHandleWakeSources @ 0x140BFF52C (PopHandleWakeSources.c)
 *     PopProcessWakeSourceWork @ 0x140C0F390 (PopProcessWakeSourceWork.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopNewWakeSource(int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(0x40uLL);
  if ( result )
    *(_DWORD *)(result + 16) = a1;
  return result;
}
