/*
 * XREFs of PsAttachSession @ 0x140619D70
 * Callers:
 *     <none>
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PsAttachSession(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 CycleTime; // rsi

  CurrentThread = KeGetCurrentThread();
  CycleTime = BugCheckParameter1[1].CycleTime;
  PspLockProcessListExclusive((__int64)CurrentThread);
  if ( (*(_DWORD *)(CycleTime + 4) & 2) != 0 )
  {
    PspUnlockProcessListExclusive(CurrentThread);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(CycleTime + 52);
    PspUnlockProcessListExclusive(CurrentThread);
    ObfReferenceObjectWithTag(BugCheckParameter1, 0x73536D4Du);
    KiStackAttachProcess(BugCheckParameter1, 0, a2);
    return 0LL;
  }
}
