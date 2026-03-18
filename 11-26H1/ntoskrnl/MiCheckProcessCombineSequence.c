/*
 * XREFs of MiCheckProcessCombineSequence @ 0x140497E80
 * Callers:
 *     MiSharePagesLockPageTable @ 0x1403072AC (MiSharePagesLockPageTable.c)
 *     MiCapturePfnVm @ 0x1405136D0 (MiCapturePfnVm.c)
 *     MiShareValidPage @ 0x140704A2C (MiShareValidPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCheckProcessCombineSequence(__int64 a1, signed __int32 a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 1956);
  return v2 == 1 || v2 == a2 || v2 < 2 && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1956), a2, 0);
}
