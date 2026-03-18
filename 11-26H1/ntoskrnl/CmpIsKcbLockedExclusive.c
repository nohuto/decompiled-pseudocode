/*
 * XREFs of CmpIsKcbLockedExclusive @ 0x140A64F30
 * Callers:
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CmpIsKcbLockedExclusive(__int64 a1)
{
  return *(_QWORD *)(a1 + 56) == (_QWORD)KeGetCurrentThread();
}
