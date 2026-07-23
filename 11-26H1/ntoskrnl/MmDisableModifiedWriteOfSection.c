/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x1403E54E0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // eax
  volatile LONG *v5; // rcx
  KIRQL OldIrql; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  OldIrql = 0;
  v2 = MiLockSectionControlArea(a1, 1LL, &OldIrql);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 56);
    if ( *(_QWORD *)(v3 + 40) )
    {
      v1 = (v4 & 8) != 0;
    }
    else if ( (v4 & 8) == 0 )
    {
      *(_DWORD *)(v3 + 56) = v4 | 8;
    }
    v5 = (volatile LONG *)(v3 + 72);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockExclusive(v5, OldIrql);
    LOBYTE(v2) = v1;
  }
  return v2;
}
