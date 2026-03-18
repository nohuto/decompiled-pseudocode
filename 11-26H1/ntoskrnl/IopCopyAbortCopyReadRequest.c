/*
 * XREFs of IopCopyAbortCopyReadRequest @ 0x1405CC000
 * Callers:
 *     <none>
 * Callees:
 *     IopCopyCompleteReadRequest @ 0x14040FD30 (IopCopyCompleteReadRequest.c)
 */

void __fastcall IopCopyAbortCopyReadRequest(__int64 a1)
{
  IopCopyCompleteReadRequest(a1, a1 + 48, a1 + 56, (ULONG_PTR *)(a1 + 64));
}
