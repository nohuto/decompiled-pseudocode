/*
 * XREFs of MiLinkPoolCommitChain @ 0x140367300
 * Callers:
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiFlushTbAsNeeded @ 0x140361AE0 (MiFlushTbAsNeeded.c)
 *     MiMakeLinkedListPte @ 0x1403675E4 (MiMakeLinkedListPte.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiIsPoolPteInUse @ 0x140447A80 (MiIsPoolPteInUse.c)
 *     MiLockAndIncrementShareCount @ 0x1404CAEE8 (MiLockAndIncrementShareCount.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1404D2D08 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned int v5; // r14d
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rbx
  ULONG_PTR v12; // r14
  unsigned __int64 DemandZeroPte; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r8
  unsigned __int64 ContainingPageTable; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  ULONG_PTR v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 80) )
    v3 = *(_QWORD *)(a1 + 80);
  v5 = 0;
  if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
  {
    v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    DemandZeroPte = MiMakeDemandZeroPte(24);
    if ( v14 != DemandZeroPte )
    {
      v18 = MiMakeDemandZeroPte(16);
      if ( v19 != v18 )
      {
        if ( (*(_WORD *)(a1 + 100) & 0x800) == 0
          || (v24 = MiMakeDemandZeroPte(24), v25 != v24) && (v26 = MiMakeDemandZeroPte(16), v19 != v26) )
        {
          if ( (unsigned int)MiIsPoolPteInUse(v19) )
            KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)((v2 << 25) - (v22 << 25)) >> 16, v20, 0LL);
          if ( !v20 )
            MiIncreaseUsedPtes(v21, v22 + (v23 & (v12 >> 9)), (unsigned int)(v21 + 1), 0LL);
        }
      }
    }
    *(_QWORD *)(a1 + 48) += 512LL;
    v15 = (MiUnlinkPageChainHead(a1 + 16) + 0x220000000000LL) / 48;
    MiUpdateLargePageBitMap(&MiSystemPartition, v15, v16, 7LL);
    *(_QWORD *)v12 = MiMakeValidPte(
                       0LL,
                       v15,
                       (*(unsigned __int16 *)(a1 + 100) >> 3) & 0x1F | ((*(_WORD *)(a1 + 100) & 0x800 | 0xFFFA4000) << 12));
    ContainingPageTable = MiGetContainingPageTable(v12);
    MiLockAndIncrementShareCount(ContainingPageTable);
    LOBYTE(v8) = MiInitializeLargeNonPagedPoolLeafFrames(v2, v15);
  }
  else
  {
    MiFlushTbAsNeeded(*(_QWORD *)(a1 + 72), a2, ((__int64)(v3 - a2) >> 3) + 1, 1);
    v7 = *(_QWORD *)(a1 + 56);
    LOBYTE(v8) = 0;
    v9 = 0xFFFFF6C000000000uLL;
    while ( v2 <= v3 )
    {
      v10 = *(_QWORD *)v2 & 0xBE0LL;
      if ( (*(_QWORD *)v2 & 1LL) == 0 )
      {
        if ( v10 == 0 && (*(_QWORD *)v2 & 0x400LL) == 0 )
        {
          if ( v7 )
            v11 = (__int64)(v7 - v9) >> 3;
          else
            v11 = 0x7FFFFFFFFFLL;
          ++v5;
          v8 = MiMakeLinkedListPte(v11) | 0x3E0;
          v7 = v2;
          *(_QWORD *)v2 = v8;
        }
        else
        {
          LOBYTE(v6) = v10 == 992;
          LOBYTE(v8) = (*(_QWORD *)v2 & 0x400LL) == 0;
          if ( ((v10 == 992) & (unsigned __int8)v8) != 0 )
            KeBugCheckEx(0x1Au, 0x5308uLL, v2, *(_QWORD *)v2, *(_QWORD *)v2 & 1LL);
        }
      }
      v2 += 8LL;
    }
    if ( v5 )
      LOBYTE(v8) = MiIncreaseUsedPtes(v6, *(_QWORD *)(a1 + 88), v5, 2LL);
    *(_QWORD *)(a1 + 56) = v7;
  }
  return v8;
}
