/*
 * XREFs of MiUnmapMdlCommon @ 0x14051F5C4
 * Callers:
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x14086AC10 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiDecreaseUsedPtes @ 0x1403410A0 (MiDecreaseUsedPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiSplitPageChain @ 0x1404BDA6C (MiSplitPageChain.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiUnmapMdlCommon(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter4)
{
  __int64 v5; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // r14
  unsigned __int64 *v11; // rbx
  unsigned __int64 DemandZeroPte; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v14; // r13
  __int64 v15; // r11
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int8 v20; // r14
  KIRQL v21; // bl
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r15
  int v27; // r13d
  __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 ValidPte; // rbx
  unsigned __int8 v32; // r14
  unsigned __int64 ContainingPageTable; // rax
  __int64 *ProcessorFlushList; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+38h] [rbp-A0h]
  ULONG_PTR v36; // [rsp+40h] [rbp-98h]
  unsigned __int64 v37; // [rsp+40h] [rbp-98h]
  unsigned __int64 v38; // [rsp+48h] [rbp-90h]
  ULONG_PTR v39; // [rsp+50h] [rbp-88h]
  _QWORD *v40; // [rsp+58h] [rbp-80h]
  char *AnyMultiplexedVm; // [rsp+60h] [rbp-78h]
  unsigned __int8 v42; // [rsp+68h] [rbp-70h]
  __int128 v43; // [rsp+70h] [rbp-68h] BYREF
  __int64 v44; // [rsp+80h] [rbp-58h]
  unsigned int v45; // [rsp+E0h] [rbp+8h] BYREF
  int v46; // [rsp+E8h] [rbp+10h]
  ULONG_PTR BugCheckParameter3; // [rsp+F0h] [rbp+18h]
  int v48; // [rsp+F8h] [rbp+20h]

  LODWORD(BugCheckParameter3) = a3;
  v43 = 0LL;
  v44 = 0LL;
  v5 = 0LL;
  v40 = (_QWORD *)(a4 + 48);
  if ( a2 )
  {
    AnyMultiplexedVm = (char *)a2;
    v48 = 0;
  }
  else
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
    v48 = 8;
  }
  v8 = 0xFFFFF68000000000uLL;
  v9 = 0xFFFFF68000000000uLL;
  v10 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v36 = v10 + 8 * BugCheckParameter4;
  v11 = (unsigned __int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v35 = (unsigned __int64)v11;
  if ( (*v11 & 0x80u) == 0LL )
  {
    DemandZeroPte = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v39 = 1LL;
  }
  else
  {
    v39 = 512LL;
    DemandZeroPte = MiMakeDemandZeroPte(16);
  }
  v45 = v5;
  v38 = v5;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  if ( a2 )
  {
    v46 = 1;
    if ( CurrentIrql == 2 )
    {
      v14 = 17;
      MiLockWorkingSetSharedAtDpc(a2);
    }
    else
    {
      v14 = MiLockWorkingSetShared(a2, v8, v5);
    }
  }
  else
  {
    v46 = v5;
    if ( KeGetCurrentIrql() == 2 )
    {
      v14 = 17;
    }
    else
    {
      v14 = KeGetCurrentIrql();
      if ( v14 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags != (_DWORD)v5 )
      {
        LOBYTE(v8) = 2;
        LOBYTE(v9) = v14;
        KiRaiseIrqlProcessIrqlFlags(v9, v8);
      }
    }
  }
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList(
    (__int64)ProcessorFlushList,
    (__int64)AnyMultiplexedVm,
    *((_DWORD *)ProcessorFlushList + 3),
    v48,
    1);
  if ( v10 < v36 )
  {
    while ( 1 )
    {
      if ( v46 )
      {
        if ( v38 )
        {
          if ( (v10 & 0xFFF) != 0 )
            goto LABEL_28;
          if ( v45 )
          {
            MiDecreaseUsedPtes(v45, v38, (_KPROCESS *)v45);
            v15 = (__int64)ProcessorFlushList;
            v45 = 0;
          }
          MiFlushTbList(v15);
          MiUnlockPageTableInternal(a2, v38);
        }
        v38 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(a2, v38, 0);
      }
      else
      {
        if ( (v10 & 0xFFF) != 0 )
          goto LABEL_28;
        MiFlushTbList(v15);
      }
      v15 = (__int64)ProcessorFlushList;
LABEL_28:
      if ( v39 == 1 )
      {
        v16 = *(_QWORD *)v10;
        if ( (*(_QWORD *)v10 & 1) == 0 )
          KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
        ++v45;
        v17 = (v16 >> 12) & 0xFFFFFFFFFFLL;
        *(_QWORD *)v10 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        MiInsertTbFlushEntry(v15, (__int64)(v10 << 25) >> 16, 1LL, 0);
      }
      else
      {
        v16 = *v11;
        v17 = (v16 >> 12) & 0xFFFFFFFFFFLL;
        if ( (v16 & 0x80u) == 0LL || *v40 != v17 )
          KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
        MiRewritePteWithLockBit(a2, 0, v35, DemandZeroPte);
        MiInsertLargeTbFlushEntry((__int64)ProcessorFlushList, 1, v35);
        v35 += 8LL;
      }
      v40 += v39;
      v10 += 8 * v39;
      if ( (v16 & 0x200) == 0 && (v17 > qword_140E2D920 || ((*(_QWORD *)(48 * v17 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
        MiDereferenceIoPages(1LL, v17, v39);
      v15 = (__int64)ProcessorFlushList;
      if ( v10 >= v36 )
        break;
      v11 = (unsigned __int64 *)v35;
    }
  }
  MiFlushTbList(v15);
  MiReleaseProcessorFlushList();
  if ( v46 )
  {
    if ( v38 )
    {
      if ( v45 )
        MiDecreaseUsedPtes(v19, v38, (_KPROCESS *)v45);
      MiUnlockPageTableInternal(a2, v38);
    }
    LOBYTE(v18) = v14;
    MiUnlockWorkingSetShared(a2, v18);
  }
  else if ( v14 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    __writecr8(v14);
  }
  if ( v39 != 1 )
  {
    v20 = v42;
    if ( v42 == 2 )
    {
      v21 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34CE8);
    }
    else
    {
      v21 = ExAcquireSpinLockExclusive(&dword_140E34CE8);
    }
    MiSplitPageChain((__int64)&xmmword_140E34CF8, BugCheckParameter4 >> 9, &v43);
    if ( v21 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34CE8);
    else
      ExReleaseSpinLockExclusive(&dword_140E34CE8, v21);
    v24 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v25 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v26 = 0LL;
    v37 = v25;
    if ( a2 )
    {
      if ( v42 == 2 )
      {
        LOBYTE(BugCheckParameter4) = 17;
        MiLockWorkingSetSharedAtDpc(a2);
      }
      else
      {
        LOBYTE(BugCheckParameter4) = MiLockWorkingSetShared(a2, v22, v23);
      }
      v27 = 1;
    }
    else
    {
      v27 = 0;
      LOBYTE(BugCheckParameter4) = 17;
    }
    if ( v24 < v25 )
    {
      do
      {
        if ( !v27 )
          goto LABEL_69;
        if ( v26 )
        {
          if ( (v24 & 0xFFF) != 0 )
            goto LABEL_69;
          MiUnlockPageTableInternal(a2, v26);
        }
        v26 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(a2, v26, 0);
LABEL_69:
        v28 = MiUnlinkPageChainHead((__int64)&v43);
        ValidPte = MiMakeValidPte(v24, (__int64)(v28 + 0x44000000000LL) / 48, -1879048186);
        if ( v27 || v20 == 2 )
        {
          v32 = 17;
          v45 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v28 + 6, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v45);
            while ( v28[3] < 0 );
          }
        }
        else
        {
          v32 = KeGetCurrentIrql();
          if ( v32 != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v29) = 2;
            LOBYTE(v30) = v32;
            KiRaiseIrqlProcessIrqlFlags(v30, v29);
          }
          v45 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v28 + 6, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v45);
            while ( v28[3] < 0 );
          }
        }
        v28[1] = v24;
        ContainingPageTable = MiGetContainingPageTable(v24);
        MiSetPfnContainingFrame((__int64)v28, ContainingPageTable);
        *v28 = 0LL;
        _InterlockedAnd64(v28 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        if ( v32 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
          __writecr8(v32);
        }
        v20 = v42;
        *(_QWORD *)v24 = ValidPte;
        v24 += 8LL;
      }
      while ( v24 < v37 );
    }
    if ( v27 )
    {
      if ( v26 )
        MiUnlockPageTableInternal(a2, v26);
      LOBYTE(v22) = BugCheckParameter4;
      MiUnlockWorkingSetShared(a2, v22);
    }
  }
}
