/*
 * XREFs of MiInitializeSystemPageTable @ 0x14033CC0C
 * Callers:
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiFillPhysicalPages @ 0x140288AC0 (MiFillPhysicalPages.c)
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiIsPageAGapPage @ 0x14033BB90 (MiIsPageAGapPage.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiInitializeUsedPtesCount @ 0x140342440 (MiInitializeUsedPtesCount.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1403658EC (MiInsertRecursiveTbFlushEntries.c)
 *     MiClearPteAccessedBitRange @ 0x1404E15F4 (MiClearPteAccessedBitRange.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     MiReplicatePteChange @ 0x14052ABE0 (MiReplicatePteChange.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x1406F70D8 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 *     MxCopyPage @ 0x140CFBAF4 (MxCopyPage.c)
 */

void __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  unsigned __int64 v8; // rbx
  char v9; // si
  __int64 v10; // rdi
  __int64 v11; // r13
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 ContainingPageTable; // r12
  unsigned int v15; // r8d
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 *ProcessorFlushList; // rax
  unsigned __int64 v24; // r9
  __int64 *v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 *i; // rdi
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // [rsp+78h] [rbp+10h] BYREF
  __int64 v35; // [rsp+80h] [rbp+18h]

  v5 = *(_QWORD *)(a1 + 184);
  v35 = v5;
  v8 = *(_QWORD *)a3;
  v9 = 0;
  v10 = (__int64)(a3 << 25) >> 16;
  v34 = a2 != 0 ? 6 : 4;
  v11 = (a4 + 0x220000000000LL) / 48;
  if ( (MiFlags & 0x80u) != 0LL && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((a4 + 0x220000000000LL) / 48);
    v5 = v35;
  }
  if ( a2 )
  {
    if ( (v8 & 1) != 0 )
    {
      if ( KeGetCurrentPrcb()->MmInternal )
      {
        v25 = (__int64 *)MiMapPageInHyperSpaceWorker(v11, 0LL, 0x80000000);
        v26 = v25;
        v27 = v10 - (_QWORD)v25;
        v28 = 512LL;
        do
        {
          *v25 = *(__int64 *)((char *)v25 + v27);
          ++v25;
          --v28;
        }
        while ( v28 );
        if ( (MiFlags & 0x8000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140E2D809) != 0 )
        {
          for ( i = v26; i < v26 + 512; ++i )
          {
            if ( (*i & 0x21) == 0x21 )
              MiWriteValidPteNewProtection(i, *i & 0xFFFFFFFFFFFFFFDFuLL);
          }
        }
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)((((unsigned __int64)v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      else
      {
        MxCopyPage(v11, (__int64)(a3 << 25) >> 16);
      }
    }
  }
  else
  {
    if ( (v8 & 1) != 0 )
    {
      if ( (PVOID)((v8 >> 12) & 0xFFFFFFFFFFLL) == qword_140E36180[0] )
        goto LABEL_4;
      v24 = *(_QWORD *)v10;
    }
    else
    {
      v24 = *(_QWORD *)(v5 + 168);
    }
    MiFillPhysicalPages(0LL, v11, v5, v24);
  }
LABEL_4:
  LeafVa = MiGetLeafVa(a3);
  if ( LeafVa < 0x7FFFFFFF0000LL
    || LeafVa >= qword_140E2DFC0 && LeafVa <= qword_140E2DFD0
    || LeafVa >= v13 && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 2;
  }
  *(_QWORD *)a4 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  v15 = v34 | 0x90000000;
  if ( a2 )
    v15 = v34 | 0x98000000;
  ValidPte = MiMakeValidPte(a3, v11, v15);
  v17 = ValidPte;
  if ( (MiFlags & 0x8000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140E2D809) != 0 )
    v17 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
  if ( a2 == 3 && (MiFlags & 0x30) != 0 && (v9 & 2) == 0 )
  {
    v30 = MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE(PsInitialSystemProcess, a3);
    v18 = *(_QWORD *)a3;
    ContainingPageTable = v30;
  }
  else
  {
    v18 = *(_QWORD *)a3;
    if ( a2 != 3 && !v18 )
    {
      v19 = 4608LL;
      v20 = 0LL;
      goto LABEL_17;
    }
  }
  v19 = 512LL;
  v20 = v18 & 1;
  if ( (v18 & 1) != 0 && ContainingPageTable != v11 )
    v19 = 2560LL;
LABEL_17:
  MiInitializePfnForOtherProcess(v11, a3, ContainingPageTable, v19);
  if ( a2 )
  {
    if ( v20 && (unsigned int)MiIsPageAGapPage((PVOID)((v18 >> 12) & 0xFFFFFFFFFFLL), a2) )
    {
      v32 = a1;
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiLockNestedPageTable(*(_QWORD *)(a1 + 32), a3);
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(a4 + 24) < 0 );
      }
      *(_QWORD *)(a4 + 24) = *(_QWORD *)(a4 + 24) & 0xC000000000000000uLL | 0x201;
      MiInitializeUsedPtesCount(a4, 512LL, v31, v32);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), a3);
    }
    if ( a2 == 3 )
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36200);
  }
  if ( (v18 & 1) != 0 )
  {
    if ( (v18 & 0x20) != 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140E2D809) != 0 )
      MiClearPteAccessedBitRange(a1, a2, a3);
    MiTransformValidPteInPlace(a3, a2);
    if ( a2 != 3 )
      goto LABEL_23;
    v21 = v35;
    v22 = *(_QWORD *)(v35 + 136);
    if ( !v22 )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      MiInitializeTbFlushList(
        (_DWORD)ProcessorFlushList,
        *(_QWORD *)(a1 + 32),
        *((_DWORD *)ProcessorFlushList + 3),
        8,
        116);
      *(_QWORD *)(v21 + 136) = v22;
    }
    MiInsertRecursiveTbFlushEntries(v22, 3LL, a3);
  }
  else
  {
    *(_QWORD *)a3 = v17;
    if ( a2 != 3 )
    {
LABEL_23:
      if ( !a2 && *(_DWORD *)(v35 + 120) == 3 )
      {
        v34 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v34);
          while ( *(__int64 *)(a4 + 24) < 0 );
        }
        *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 32) & 0xFFFF0000 | 2;
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      return;
    }
    v21 = v35;
  }
  if ( *(_DWORD *)(v21 + 120) != 1 )
    MiReplicatePteChange(a3, 1LL);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
}
