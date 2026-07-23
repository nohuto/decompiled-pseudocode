/*
 * XREFs of IopDeleteIoCompletion @ 0x140ADBC50
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x1403DF3CC (IopDeleteIoCompletionInternal.c)
 */

void __fastcall IopDeleteIoCompletion(ULONG_PTR a1)
{
  IopDeleteIoCompletionInternal(a1, 0LL);
}
