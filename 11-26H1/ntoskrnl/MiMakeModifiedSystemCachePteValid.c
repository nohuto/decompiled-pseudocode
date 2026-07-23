/*
 * XREFs of MiMakeModifiedSystemCachePteValid @ 0x140485680
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     PfSnLogPageFault @ 0x140376CA0 (PfSnLogPageFault.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 */

void __fastcall MiMakeModifiedSystemCachePteValid(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 ValidPte; // rbx
  __int64 v5; // r14
  _QWORD *v8; // rbp
  int v9; // r13d
  unsigned __int64 v10; // rdi
  unsigned __int64 ContainingPageTable; // rax
  signed __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  __int64 *SubsectionFromPte; // rbx
  __int64 v20; // rsi
  void *v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // [rsp+40h] [rbp-48h]
  char v25; // [rsp+98h] [rbp+10h]
  int v26; // [rsp+A0h] [rbp+18h] BYREF
  int v27; // [rsp+A8h] [rbp+20h]

  v27 = a4;
  ValidPte = a3;
  v5 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  v8 = (_QWORD *)(48 * v5 - 0x220000000000LL);
  v9 = 0;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = v10;
  v25 = MiLockWorkingSetShared(a1, a2, a3);
  MiLockPageTableInternal(a1, v10, 0);
  ContainingPageTable = MiGetContainingPageTable(a2);
  v12 = *(_QWORD *)a2;
  v13 = 48 * ContainingPageTable - 0x220000000000LL;
  if ( (*(_QWORD *)a2 & 1) != 0 )
  {
    v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v17 = 0LL;
    MiLockAndDecrementShareCount((ULONG_PTR)v8, 2LL);
  }
  else
  {
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    *(_QWORD *)(v13 + 24) = (*(_QWORD *)(v13 + 24) + 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v12 & 8) != 0 )
      ValidPte = MiMakeValidPte(a2, v5, 536870913);
    v14 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL;
    v15 = v14 | ((unsigned __int64)(BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) & 1) << 8);
    if ( (v27 & 8) != 0 && (v8[5] & 0x20000000000000LL) != 0 )
      v15 = v14 & 0xFFFFFFFFFFFFFFBDuLL | ((unsigned __int64)(BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) & 1) << 8);
    v16 = v8[2];
    v17 = v8[1] | 0x8000000000000000uLL;
    MiAllocateWsle(a1, (signed __int64 *)a2, v8, 0, v15, 0, 0LL);
    if ( LODWORD(stru_140E67200.ThreadLock) && (v16 & 0x400) != 0 )
      v9 = 1;
  }
  MiUnlockPageTableInternal(a1, v24);
  LOBYTE(v18) = v25;
  MiUnlockWorkingSetShared(a1, v18);
  if ( v9 )
  {
    SubsectionFromPte = (__int64 *)MiGetSubsectionFromPte(v16);
    v20 = *SubsectionFromPte;
    v21 = MiReferenceControlAreaFileWithTag(*SubsectionFromPte, 0x63536D4Du, 0);
    v22 = MiStartingOffset(SubsectionFromPte, v17, 0xFFFFFFFF);
    PfSnLogPageFault((__int64)v21, v22, 4LL, v23);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v20 + 64), (ULONG_PTR)v21, 0x63536D4Du);
  }
}
