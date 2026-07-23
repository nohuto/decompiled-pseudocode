/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1403E40C8
 * Callers:
 *     MiFlushAllPagesWorker @ 0x1403E3C5C (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1403E3DAC (MiFlushAllStoreSwapPages.c)
 *     MiModifiedWriterShouldWrite @ 0x1403FF7EC (MiModifiedWriterShouldWrite.c)
 *     MiAdjustModifiedPageLoad @ 0x1404B5B78 (MiAdjustModifiedPageLoad.c)
 * Callees:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140204AF0 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1403C3B08 (MiGetAvailablePagesForTrimPass.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1403FFB60 (MiUseLowIoPriorityForModifiedPages.c)
 *     KiIsThreadRankNonZero @ 0x140411A40 (KiIsThreadRankNonZero.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14049AE18 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  volatile LONG *v1; // rbp
  unsigned int v3; // ebx
  KIRQL v4; // r15
  unsigned __int64 v5; // rsi
  unsigned int v6; // esi
  unsigned int v7; // r14d
  int v8; // r12d
  unsigned __int64 AvailablePagesForTrimPass; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  bool v12; // zf
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  signed __int32 v17[22]; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+68h] [rbp+10h]

  v1 = (volatile LONG *)(a1 + 2064);
  v3 = 0;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2064));
  if ( !*(_DWORD *)(a1 + 1452) )
  {
    v5 = *(_QWORD *)(a1 + 22464);
    v18 = MiUseLowIoPriorityForModifiedPages(a1);
    if ( v5 >= 0x32 )
    {
      v8 = 0;
      if ( v5 >= 0x420 )
      {
        v7 = 8;
        AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(a1);
        if ( AvailablePagesForTrimPass >= 3LL * *(_QWORD *)(a1 + 21240) )
        {
          v10 = *(_QWORD *)(a1 + 23456);
          if ( v10 < AvailablePagesForTrimPass + 0x2000 )
            v6 = 4;
          else
            v6 = (v10 < AvailablePagesForTrimPass + 0x2000 + AvailablePagesForTrimPass) + 2;
        }
        else
        {
          v6 = 2;
        }
      }
      else
      {
        v6 = 1;
        v7 = 20;
      }
    }
    else
    {
      v6 = 0;
      v7 = 20;
      v8 = 1;
    }
    v11 = *(_QWORD *)(a1 + 1416);
    v12 = (unsigned __int8)KiIsThreadRankNonZero(v11, 0LL) == 0;
    v14 = 1;
    if ( v12 )
      v14 = *(char *)(v11 + 563);
    if ( v14 != v7 )
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1416), v7, v13);
    if ( v8 )
      KeSetEvent((PRKEVENT)(a1 + 1424), 0, 0);
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 24LL);
    if ( *(unsigned __int8 *)(v15 + 2312) != v6 || !v6 || *(_BYTE *)(v15 + 2313) != (v18 == 0) )
    {
      *(_BYTE *)(v15 + 2312) = v6;
      *(_BYTE *)(v15 + 2313) = v18 == 0;
      _InterlockedOr(v17, 0);
      SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(v15, v6);
      if ( !v6 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 24LL);
        if ( *(_DWORD *)(v16 + 2124) )
        {
          do
            SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(*(_QWORD *)(v16 + 1136) + 16LL * v3++, 0LL);
          while ( v3 < *(_DWORD *)(v16 + 2124) );
        }
      }
    }
  }
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  else
    ExReleaseSpinLockExclusive(v1, v4);
}
