/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x1408C6420
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x1408C64F4 (CmpRemoveFromDelayedClose.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlockLockNotHeld(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v3; // rtt

  result = *(_QWORD *)BugCheckParameter2;
  while ( result )
  {
    if ( result == -1 )
      goto LABEL_9;
    v3 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, result + 1, result);
    if ( v3 == result )
      return result;
  }
  CmpLockKcbShared(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
LABEL_9:
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
    CmpRemoveFromDelayedClose(BugCheckParameter2);
  return CmpUnlockKcb(BugCheckParameter2);
}
