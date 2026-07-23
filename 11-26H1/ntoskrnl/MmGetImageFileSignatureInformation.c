/*
 * XREFs of MmGetImageFileSignatureInformation @ 0x1404AB170
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1402EDD50 (MiRemoveUnusedSegment.c)
 *     MiDereferenceControlAreaBySection @ 0x14036F4A8 (MiDereferenceControlAreaBySection.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 */

char __fastcall MmGetImageFileSignatureInformation(__int64 a1)
{
  __int64 *v1; // rcx
  char v2; // di
  __int64 v3; // rax
  volatile LONG *v4; // rbx
  KIRQL v5; // dl
  volatile LONG *v6; // rcx
  volatile LONG *v7; // rcx
  KIRQL OldIrql; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 40);
  v2 = 0;
  OldIrql = 0;
  if ( !v1 )
    return 0;
  v3 = MiLockSectionControlArea(v1, 0, &OldIrql);
  v4 = (volatile LONG *)v3;
  if ( !v3 )
    return 0;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    v7 = (volatile LONG *)(v3 + 72);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    else
      ExReleaseSpinLockExclusive(v7, OldIrql);
  }
  else
  {
    ++*(_QWORD *)(v3 + 24);
    MiRemoveUnusedSegment(v3);
    v5 = OldIrql;
    v6 = v4 + 18;
    ++*((_QWORD *)v4 + 6);
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    else
      ExReleaseSpinLockExclusive(v6, v5);
    v2 = *(_BYTE *)(*(_QWORD *)v4 + 15LL) & 0xF;
    MiDereferenceControlAreaBySection((__int64)v4, 1u);
  }
  return v2;
}
