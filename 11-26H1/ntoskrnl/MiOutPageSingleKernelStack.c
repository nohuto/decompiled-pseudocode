/*
 * XREFs of MiOutPageSingleKernelStack @ 0x14036A700
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiGetWorkingSetSwapSupport @ 0x14036A16C (MiGetWorkingSetSwapSupport.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiOutSwapKernelStackPage @ 0x1403FE32C (MiOutSwapKernelStackPage.c)
 *     MiCreateKernelStackNode @ 0x14050DB4C (MiCreateKernelStackNode.c)
 */

void __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  _QWORD *v6; // rsi
  unsigned __int64 DemandZeroPte; // rbx
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  __int64 WorkingSetSwapSupport; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 v21; // rbp
  unsigned __int64 *v22; // r15
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  int IsZero; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // [rsp+20h] [rbp-88h]
  unsigned __int64 v32; // [rsp+28h] [rbp-80h]
  void *v33; // [rsp+40h] [rbp-68h]
  unsigned __int64 v34; // [rsp+50h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp+8h] BYREF
  char v36; // [rsp+B8h] [rbp+10h]
  __int64 v37; // [rsp+C0h] [rbp+18h]
  __int64 v38; // [rsp+C8h] [rbp+20h]

  v37 = a3;
  v35 = a1;
  v4 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (_QWORD *)v31;
  v34 = v5;
  v38 = (unsigned int)((__int64)(v4 - v31) >> 3) + 1;
  DemandZeroPte = MiMakeDemandZeroPte(31);
  WorkingSetSwapSupport = 0LL;
  v12 = *(_QWORD *)(v11 + 544);
  v13 = *(unsigned __int16 *)(v12 + 1198);
  v14 = v12 + 1024;
  v15 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v13);
  if ( (ULONG *)v15 != &MiSystemPartition )
  {
    if ( !MiCreateKernelStackNode(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v13), a2) )
      return;
    v8 = 0xFFFFF68000000000uLL;
    v9 = 0x7FFFFFFFF8LL;
  }
  v16 = v8 + (v9 & (v5 >> 9));
  v32 = (v9 & (v4 >> 9)) + v8;
  v33 = MiVaToFlushVm(v31);
  v36 = MiLockWorkingSetShared((__int64)v33, v17, v18);
  MiLockPageTableInternal((signed __int64)v33, v16, 0);
  if ( v16 != v32 )
    MiLockNestedPageTable((signed __int64)v33, v16 + 8);
  *(_QWORD *)(a2[2] - 8LL) = v35;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1288));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1288));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v19);
  }
  do
  {
    v20 = (*v6 >> 12) & 0xFFFFFFFFFFLL;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v15, v6);
    *v6 = MiMakeTransitionPte(v20, 31);
    MiLockAndDecrementShareCount(48 * v20 - 0x220000000000LL, 2LL);
    ++v6;
  }
  while ( (unsigned __int64)v6 <= v4 );
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1288));
  v21 = (__int64)(v31 << 25) >> 16;
  v22 = (unsigned __int64 *)(v31 - 8);
  v23 = v38;
  while ( (unsigned __int64)v22 >= v34 && (*v22 & 1) != 0 )
  {
    v25 = (*v22 >> 12) & 0xFFFFFFFFFFLL;
    v26 = 48 * v25 - 0x220000000000LL;
    v27 = 48 * (*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    LODWORD(v35) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v35);
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
    if ( (unsigned __int16)*(_DWORD *)(v26 + 32) == 1 )
    {
      *v22 = DemandZeroPte;
      *(_QWORD *)(v26 + 24) |= 0x4000000000000000uLL;
      MiSetPfnIdentity(v26, 0LL);
    }
    else
    {
      *v22 = MiMakeTransitionPte(v25, 31);
    }
    if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
      MiBadShareCount(v26);
    v28 = (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v26 + 24) = v28 ^ (*(_QWORD *)(v26 + 24) ^ v28) & 0xC000000000000000uLL;
    if ( v28 )
      IsZero = 2;
    else
      IsZero = MiPfnShareCountIsZero(v26, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( IsZero != 3 )
    {
      LODWORD(v35) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( *(__int64 *)(v27 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v27 + 34) & 7) != 6 )
        MiBadShareCount(v27);
      v30 = (*(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v27 + 24) = v30 ^ (*(_QWORD *)(v27 + 24) ^ v30) & 0xC000000000000000uLL;
      if ( !v30 )
        MiPfnShareCountIsZero(v27, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v23 = v38 + 1;
    v21 -= 4096LL;
    v38 = (unsigned int)(v38 + 1);
    --v22;
  }
  if ( v16 != v32 )
    MiUnlockPageTableInternal((__int64)v33, v16 + 8);
  MiUnlockPageTableInternal((__int64)v33, v16);
  LOBYTE(v24) = v36;
  MiUnlockWorkingSetShared((__int64)v33, v24);
  MiInsertTbFlushEntry(v37, v21, v23, 0);
}
