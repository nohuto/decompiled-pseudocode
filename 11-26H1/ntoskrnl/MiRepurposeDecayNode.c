/*
 * XREFs of MiRepurposeDecayNode @ 0x1402CAD20
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402FA410 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

unsigned int __fastcall MiRepurposeDecayNode(PSLIST_ENTRY ListEntry)
{
  unsigned __int64 v2; // rdi
  char v3; // si
  unsigned int result; // eax

  MiUnlinkPageFromListEx((ULONG_PTR)ListEntry);
  if ( ((__int64)ListEntry[2].Next & 0x8000000) != 0 )
  {
    result = (__int64)ListEntry[2].Next & 0xF7FFFFFF;
    LODWORD(ListEntry[2].Next) = result;
  }
  else
  {
    v2 = (unsigned __int64)(unsigned int)((int)ListEntry / 48 - qword_140E347B0) >> 3;
    v3 = ((int)ListEntry / 48 - qword_140E347B0) & 7;
    if ( ((*(char *)(v2 + qword_140E347E0) >> v3) & 1) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E347D0);
      *(_BYTE *)(v2 + qword_140E347E0) &= ~(1 << v3);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E347D0);
    }
    return (unsigned int)RtlpInterlockedPushEntrySList(&stru_140E347C0, ListEntry);
  }
  return result;
}
