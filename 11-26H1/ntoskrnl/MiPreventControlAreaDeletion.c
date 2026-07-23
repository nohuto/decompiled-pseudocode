/*
 * XREFs of MiPreventControlAreaDeletion @ 0x1404EF8B8
 * Callers:
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceSubsection @ 0x1402EE060 (MiReferenceSubsection.c)
 *     MiIncrementModifiedWriteCount @ 0x1404EF980 (MiIncrementModifiedWriteCount.c)
 */

__int64 __fastcall MiPreventControlAreaDeletion(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rcx
  __int64 SubsectionFromPte; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  volatile LONG *v9; // rsi
  int v10; // ecx

  v3 = *(_QWORD *)(a1 + 16);
  *a3 = 0LL;
  *a2 = 0LL;
  SubsectionFromPte = MiGetSubsectionFromPte(v3);
  v7 = SubsectionFromPte;
  if ( (*(_DWORD *)(SubsectionFromPte + 32) & 0x20000) == 0 )
  {
    v8 = *(_QWORD *)SubsectionFromPte;
    v9 = (volatile LONG *)(*(_QWORD *)SubsectionFromPte + 72LL);
    ExAcquireSpinLockExclusiveAtDpcLevel(v9);
    v10 = *(_DWORD *)(v8 + 56);
    if ( !(v10 & 1 | ((v10 & 2) != 0)) )
    {
      if ( (v10 & 0x20) != 0 )
      {
LABEL_8:
        *a3 = MiIncrementModifiedWriteCount(v8);
LABEL_9:
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
        return v8;
      }
      if ( (*(_DWORD *)(v7 + 32) & 0x10000) == 0 && *(_QWORD *)(v7 + 8) && !*(_DWORD *)(v7 + 108) )
      {
        MiReferenceSubsection((__int64 *)v7, 0);
        *a2 = v7;
        goto LABEL_8;
      }
    }
    v8 = 0LL;
    goto LABEL_9;
  }
  return 0LL;
}
