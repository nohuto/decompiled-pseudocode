/*
 * XREFs of MiClearDriverTablePtes @ 0x1404FF898
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiWriteWsle @ 0x14029ED40 (MiWriteWsle.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiDecreaseUsedPtesInPfn @ 0x1402EB080 (MiDecreaseUsedPtesInPfn.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiReducePteUseCount @ 0x1403631B0 (MiReducePteUseCount.c)
 *     MiGetSecurePageState @ 0x1405343D0 (MiGetSecurePageState.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiClearDriverTablePtes(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  char v6; // r13
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int64 *ProcessorFlushList; // rsi
  unsigned __int64 PteShadow; // rbx
  __int64 v11; // rcx
  char WsleContents; // al
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdx
  ULONG_PTR v17; // rbp
  unsigned int SecurePageState; // eax
  __int64 v19; // rdx
  int v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  v4 = (unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0) + (*(_DWORD *)(a1 + 64) >> 12);
  v5 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) + 8 * v4 - 0x98000000000LL;
  v6 = MiLockWorkingSetShared((__int64)&unk_140E36F80, v4, a3);
  v7 = v5
     + 8LL
     * (((unsigned int)(HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget)) >> 12)
      + (((HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget)) & 0xFFF) != 0));
  v21 = v7;
  v8 = (__int64)(v5 << 25) >> 16;
  ProcessorFlushList = 0LL;
  while ( v5 < v7 )
  {
    if ( !v3 )
      goto LABEL_8;
    if ( (v5 & 0xFFF) == 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal((__int64)&unk_140E36F80, v3);
LABEL_8:
      v3 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal((signed __int64)&unk_140E36F80, v3, 0);
    }
    PteShadow = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v5, *(_QWORD *)v5);
    if ( PteShadow )
    {
      if ( PteShadow == MiMakeDemandZeroPte(16) )
      {
        *(_QWORD *)v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        MiReducePteUseCount(v11, v5, 1u);
      }
      else
      {
        WsleContents = MiGetWsleContents(v11, v8);
        if ( (WsleContents & 0xF) == 9 )
        {
          LOBYTE(v13) = WsleContents & 0xF;
          MiWriteWsle(v13, v8, WsleContents & 0xF0 | 0xA);
        }
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList(
            (__int64)ProcessorFlushList,
            (__int64)&unk_140E36F80,
            *((_DWORD *)ProcessorFlushList + 3),
            8,
            1);
        }
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v8, 1LL, 0);
        v14 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL);
        v15 = v14 - 0x220000000000LL;
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v20);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        if ( (*(_BYTE *)(v15 + 34) & 7) != 6 )
          MiBadShareCount(v14 - 0x220000000000LL);
        v16 = (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
        *(_QWORD *)(v15 + 24) = v16 ^ (*(_QWORD *)(v15 + 24) ^ v16) & 0xC000000000000000uLL;
        if ( !v16 )
          MiPfnShareCountIsZero(v14 - 0x220000000000LL, 0LL);
        *(_QWORD *)v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          KeBugCheckEx(0x1Au, 0x515C0uLL, v5, v14 / 48, *(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        *(_DWORD *)(v15 + 32) = *(_DWORD *)(v15 + 32) & 0xFFF8FFFF | 0x60000;
        *(_QWORD *)(v15 + 24) = (*(_QWORD *)(v15 + 24) + 1LL) ^ (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0xC000000000000000uLL;
        *(_QWORD *)(v15 + 24) |= 0x4000000000000000uLL;
        v17 = 48 * (*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v20);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        MiDecreaseUsedPtesInPfn(v17, 1uLL);
        *(_QWORD *)(v17 + 24) = (*(_QWORD *)(v17 + 24) - 1LL) ^ (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) - 1LL)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiSetPfnContainingFrame(v15, 0x3FFFFFFFFELL);
        *(_QWORD *)(v15 + 8) = 0LL;
        SecurePageState = MiGetSecurePageState(v15);
        *(_QWORD *)(v15 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        *(_QWORD *)(v15 + 16) = MiUpdatePageFileHighInPte(*(__int64 *)&CLFS_LSN_NULL_EXT, SecurePageState);
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v7 = v21;
    v5 += 8LL;
    v8 += 4096LL;
  }
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  MiUnlockPageTableInternal((__int64)&unk_140E36F80, v3);
  LOBYTE(v19) = v6;
  MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v19);
}
