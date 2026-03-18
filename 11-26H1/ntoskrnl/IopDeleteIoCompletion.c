/*
 * XREFs of IopDeleteIoCompletion @ 0x140ADEA60
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x1403DC1DC (IopDeleteIoCompletionInternal.c)
 */

void __fastcall IopDeleteIoCompletion(ULONG_PTR a1)
{
  IopDeleteIoCompletionInternal(a1, 0LL);
}
