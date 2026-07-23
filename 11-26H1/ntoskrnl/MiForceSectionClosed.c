/*
 * XREFs of MiForceSectionClosed @ 0x1404A9890
 * Callers:
 *     MmForceSectionClosedEx @ 0x1404A9790 (MmForceSectionClosedEx.c)
 *     MmForceSectionClosed @ 0x1404A9840 (MmForceSectionClosed.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 *     MiAttemptSectionDelete @ 0x1404B8D88 (MiAttemptSectionDelete.c)
 */

__int64 __fastcall MiForceSectionClosed(__int64 *a1, char a2, char a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  volatile LONG *v8; // rcx
  volatile LONG *v10; // rcx
  KIRQL OldIrql; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  OldIrql = 0;
  v6 = MiLockSectionControlArea(a1, a2 & 1, &OldIrql);
  if ( !v6 )
    return 0LL;
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 1) == 0 || (*(_DWORD *)(v6 + 56) & 0x30000000) == 0x10000000 )
    {
      LOBYTE(v7) = OldIrql;
      return 2 - (unsigned int)((unsigned __int8)MiAttemptSectionDelete(v6, v7, a2 & 4) != 0);
    }
    v10 = (volatile LONG *)(v6 + 72);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    else
      ExReleaseSpinLockExclusive(v10, OldIrql);
    return 0LL;
  }
  LOBYTE(v5) = (*(_DWORD *)(v6 + 56) & 0x30000000) == 0x10000000;
  v8 = (volatile LONG *)(v6 + 72);
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  else
    ExReleaseSpinLockExclusive(v8, OldIrql);
  return v5;
}
