/*
 * XREFs of IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140B140F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x14049B7E0 (IopCancelIrpsInCurrentThreadList.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListApcRoutine(__int64 a1)
{
  *(_DWORD *)(a1 + 132) |= IopCancelIrpsInCurrentThreadList(
                             *(_QWORD *)(a1 + 88),
                             (__int64)KeGetCurrentThread(),
                             *(_QWORD *)(a1 + 96),
                             *(_BYTE *)(a1 + 128));
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
