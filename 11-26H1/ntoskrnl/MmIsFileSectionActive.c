/*
 * XREFs of MmIsFileSectionActive @ 0x1404C1FB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 *     MiIsSectionActive @ 0x1405095C4 (MiIsSectionActive.c)
 */

__int64 __fastcall MmIsFileSectionActive(__int64 *a1, int a2, _DWORD *a3)
{
  char v4; // bl
  int v6; // edi
  __int64 v7; // rcx
  int IsSectionActive; // eax
  __int64 v9; // rcx
  volatile LONG *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  volatile LONG *v14; // rcx
  KIRQL OldIrql; // [rsp+38h] [rbp+10h] BYREF

  OldIrql = 0;
  v4 = a2;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 0 || (a2 & 4) == 0 )
    return 3221225485LL;
  v6 = 0;
  if ( (a2 & 1) == 0 )
    goto LABEL_19;
  v7 = MiLockSectionControlArea(a1, 0, &OldIrql);
  if ( !v7 )
    goto LABEL_19;
  IsSectionActive = MiIsSectionActive(v7);
  v10 = (volatile LONG *)(v9 + 72);
  v6 = IsSectionActive;
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockExclusive(v10, OldIrql);
  if ( !v6 )
  {
LABEL_19:
    if ( (v4 & 2) != 0 )
    {
      v11 = MiLockSectionControlArea(a1, 1, &OldIrql);
      if ( v11 )
      {
        v12 = MiIsSectionActive(v11);
        v14 = (volatile LONG *)(v13 + 72);
        v6 = v12;
        if ( OldIrql == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v14);
        else
          ExReleaseSpinLockExclusive(v14, OldIrql);
      }
    }
  }
  *a3 = v6;
  return 0LL;
}
