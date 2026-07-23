/*
 * XREFs of CmpGlobalUnlockKeyForWrite @ 0x140861CF4
 * Callers:
 *     CmpFreeSiloKeyLockEntry @ 0x140861CAC (CmpFreeSiloKeyLockEntry.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x140861DEC (CmpLockGlobalKeyLockTrackerExclusive.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x140861E64 (CmpUnlockGlobalKeyLockTracker.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 */

void __fastcall CmpGlobalUnlockKeyForWrite(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax

  _m_prefetchw(a2 + 2);
  v4 = a2[2];
  while ( v4 - 1 > 0 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange64(a2 + 2, v4 - 1, v4);
    if ( v5 == v4 )
      return;
  }
  if ( v4 != 1 )
    __fastfail(0xEu);
  CmpLockKcbExclusive(BugCheckParameter2);
  CmpLockGlobalKeyLockTrackerExclusive();
  v6 = _InterlockedExchangeAdd64(a2 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    v9 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v10 = (_QWORD *)a2[1], (_QWORD *)*v10 != a2) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    CmpUnlockGlobalKeyLockTracker();
    *(_WORD *)(BugCheckParameter2 + 8) &= ~0x80u;
    CmpUnlockKcb(BugCheckParameter2);
    CmpDereferenceKeyControlBlock(a2[3]);
    CmpFreeTransientPoolWithTag(a2, 0x33374D43u);
  }
  else
  {
    CmpUnlockGlobalKeyLockTracker();
    CmpUnlockKcb(BugCheckParameter2);
  }
}
