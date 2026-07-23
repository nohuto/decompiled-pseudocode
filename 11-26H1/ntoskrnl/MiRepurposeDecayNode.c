/*
 * XREFs of MiRepurposeDecayNode @ 0x1402ACAE0
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
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
    v2 = (unsigned __int64)(unsigned int)((int)ListEntry / 48 - qword_140E34930) >> 3;
    v3 = ((int)ListEntry / 48 - qword_140E34930) & 7;
    if ( ((*(char *)(v2 + qword_140E34960) >> v3) & 1) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34950);
      *(_BYTE *)(v2 + qword_140E34960) &= ~(1 << v3);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34950);
    }
    return (unsigned int)RtlpInterlockedPushEntrySList(&stru_140E34940, ListEntry);
  }
  return result;
}
