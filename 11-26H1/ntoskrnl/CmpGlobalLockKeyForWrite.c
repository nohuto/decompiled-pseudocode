/*
 * XREFs of CmpGlobalLockKeyForWrite @ 0x140B11D8C
 * Callers:
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 * Callees:
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x140861DEC (CmpLockGlobalKeyLockTrackerExclusive.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x140861E64 (CmpUnlockGlobalKeyLockTracker.c)
 *     CmpLockGlobalKeyLockTrackerShared @ 0x140B11E3C (CmpLockGlobalKeyLockTrackerShared.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x140B512D8 (CmpCreateGlobalKeyLockEntry.c)
 */

__int64 __fastcall CmpGlobalLockKeyForWrite(__int64 a1, struct _LIST_ENTRY **a2)
{
  struct _LIST_ENTRY *i; // rbx
  unsigned int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  struct _LIST_ENTRY *Blink; // rax

  CmpLockGlobalKeyLockTrackerShared();
  for ( i = CmpKeyLockTracker.Header.WaitListHead.Flink; i != &CmpKeyLockTracker.Header.WaitListHead; i = i->Flink )
  {
    if ( i[1].Blink == (struct _LIST_ENTRY *)a1 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)&i[1]) <= 1 )
        __fastfail(0xEu);
      v5 = 0;
LABEL_7:
      *a2 = i;
      CmpUnlockGlobalKeyLockTracker();
      return v5;
    }
  }
  CmpUnlockGlobalKeyLockTracker();
  v5 = 0;
  i = (struct _LIST_ENTRY *)CmpCreateGlobalKeyLockEntry(a1);
  if ( i )
  {
    *(_WORD *)(a1 + 8) |= 0x80u;
    CmpLockGlobalKeyLockTrackerExclusive(v8, v7, v9, v10);
    Blink = CmpKeyLockTracker.Header.WaitListHead.Blink;
    if ( CmpKeyLockTracker.Header.WaitListHead.Blink->Flink != &CmpKeyLockTracker.Header.WaitListHead )
      __fastfail(3u);
    i->Flink = &CmpKeyLockTracker.Header.WaitListHead;
    i->Blink = Blink;
    Blink->Flink = i;
    CmpKeyLockTracker.Header.WaitListHead.Blink = i;
    goto LABEL_7;
  }
  return (unsigned int)-1073741670;
}
