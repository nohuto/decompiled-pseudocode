/*
 * XREFs of MiDecrementLargeSubsections @ 0x1404FF5B8
 * Callers:
 *     MiReferenceDataSubsections @ 0x14034125C (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x140341C78 (MiRemoveMappedPtes.c)
 *     MiIncrementLargeSubsections @ 0x1406FF0D4 (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x14070EE8C (MiDereferenceDataSubsections.c)
 *     MiCloneLargeFileOnlyVad @ 0x140873250 (MiCloneLargeFileOnlyVad.c)
 *     MiDataVadErrorCleanup @ 0x1409976EC (MiDataVadErrorCleanup.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiBuildWakeList @ 0x140470AE0 (MiBuildWakeList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiDecrementLargeSubsections(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  volatile LONG *v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  unsigned __int64 *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 CurrentIrql; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8

  v2 = *a1;
  v3 = a1;
  v4 = a2;
  v5 = (volatile LONG *)(*a1 + 72);
  v6 = ExAcquireSpinLockExclusive(v5);
  while ( 1 )
  {
    if ( --*((_DWORD *)v3 + 27) == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      v7 = *((_DWORD *)v3 + 11);
      v8 = 0;
      v9 = (unsigned __int64 *)v3[1];
      if ( v7 )
      {
        do
        {
          v10 = MiLockLeafPage(v9, 0);
          v11 = v10;
          if ( (*(_BYTE *)(v10 + 34) & 7) != 6 )
            MiBadShareCount(v10);
          v12 = *(_QWORD *)(v10 + 24);
          *(_QWORD *)(v10 + 24) = ((v12 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v12 ^ ((v12 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
          if ( (v12 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v10, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v8 & 0xF) == 0 && v8 != v7 && KeShouldYieldProcessor() )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
            __writecr8(v6);
            CurrentIrql = KeGetCurrentIrql();
            if ( (_BYTE)CurrentIrql != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v13) = 2;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v13);
            }
          }
          ++v9;
        }
        while ( v8 < v7 );
        v4 = a2;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
      --*((_DWORD *)v3 + 27);
      v15 = MiBuildWakeList(v2, 1024);
      MiReleaseControlAreaWaiters(v15, v16, v17);
    }
    if ( v3 == v4 )
      break;
    v3 = (__int64 *)v3[2];
  }
  if ( (_BYTE)v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v6);
}
