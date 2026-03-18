/*
 * XREFs of MiFreePagesFromMdl @ 0x1403454C0
 * Callers:
 *     HalFreeCommonBufferVector @ 0x140343C00 (HalFreeCommonBufferVector.c)
 *     IopLiveDumpWriteDumpFile @ 0x140343D08 (IopLiveDumpWriteDumpFile.c)
 *     HalFreeCommonBufferDmarThin @ 0x1403441A0 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x1403442A0 (HalFreeCommonBufferDmaThin.c)
 *     MmFreePagesFromMdlEx @ 0x140345450 (MmFreePagesFromMdlEx.c)
 *     MmFreePagesFromMdl @ 0x1403454A0 (MmFreePagesFromMdl.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140355EBC (BgpFwAllocateMemory.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140393D74 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     MmFreeSecureKernelPages @ 0x1403C1E80 (MmFreeSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x1403C2E54 (MmFreeNonChargedSecurePages.c)
 *     MiFreeSecureKernelPage @ 0x1403C3010 (MiFreeSecureKernelPage.c)
 *     MiFreePhysicalPageChain @ 0x1403C73D4 (MiFreePhysicalPageChain.c)
 *     EtwpFreeTraceBuffer @ 0x140488B18 (EtwpFreeTraceBuffer.c)
 *     EtwpFreePartitionMemory @ 0x140488BA8 (EtwpFreePartitionMemory.c)
 *     EtwpAllocateTraceBuffer @ 0x1404BCFC4 (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePartitionMemory @ 0x1404BD074 (EtwpAllocatePartitionMemory.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404CC380 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404D18A4 (HalpAllocateCommonBufferVectorInternal.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1404E4914 (IopLiveDumpFreeDumpBuffers.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404F1E84 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpDmaFreeChildAdapter @ 0x14050FED0 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x140589E20 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HvlpWithdrawPages @ 0x1405BB614 (HvlpWithdrawPages.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x1405CD8A4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D304C (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     DifMmFreePagesFromMdlWrapper @ 0x140666E80 (DifMmFreePagesFromMdlWrapper.c)
 *     MiReturnMdlExcess @ 0x1406EEC54 (MiReturnMdlExcess.c)
 *     MiFreeAwePagesFromMdl @ 0x1407016C0 (MiFreeAwePagesFromMdl.c)
 *     MiFreeZeroCalibrationBuffer @ 0x140710730 (MiFreeZeroCalibrationBuffer.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MiPartitionTransferAllocateSmallPages @ 0x14087CBB4 (MiPartitionTransferAllocateSmallPages.c)
 *     KiComputeNumaCosts @ 0x140CC93EC (KiComputeNumaCosts.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140CD6EF4 (PpmHeteroInitializeIntelWpsSupport.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140CFEB84 (MiMeasureDemandCoalesceTimeBounds.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiInitializeMdlPfnSecureState @ 0x14033BD48 (MiInitializeMdlPfnSecureState.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x1403C4140 (MiFreeMdlPageRun.c)
 *     MiRetardMdl @ 0x140504688 (MiRetardMdl.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetSecurePageState @ 0x140531F30 (MiGetSecurePageState.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MiLogMdlRangeEvent @ 0x1406EE848 (MiLogMdlRangeEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned __int64 __fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v7; // r13
  char *v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  ULONG_PTR *v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r12
  __int64 v16; // r15
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int SecurePageState; // eax
  __int64 v23; // rcx
  int v24; // r13d
  unsigned __int8 v25; // al
  bool v26; // zf
  int v27; // r13d
  _QWORD *InitialStack; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  int v31; // eax
  unsigned int v32; // eax
  _QWORD *v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  ULONG_PTR *v37; // rcx
  __int64 v38; // rdi
  ULONG_PTR *v39; // r14
  unsigned __int64 result; // rax
  unsigned int v41; // [rsp+30h] [rbp-108h]
  int v42; // [rsp+34h] [rbp-104h]
  int v44; // [rsp+3Ch] [rbp-FCh] BYREF
  __int64 v45; // [rsp+40h] [rbp-F8h]
  __int64 v46; // [rsp+48h] [rbp-F0h]
  __int64 v47; // [rsp+50h] [rbp-E8h]
  __int64 v48; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v49; // [rsp+60h] [rbp-D8h]
  __int64 v50; // [rsp+68h] [rbp-D0h]
  __int64 CurrentIrql; // [rsp+70h] [rbp-C8h]
  __int64 v52; // [rsp+80h] [rbp-B8h] BYREF
  char v53; // [rsp+88h] [rbp-B0h] BYREF

  v41 = a2;
  memset_0(&v52, 0, 0x60uLL);
  v7 = 0LL;
  v8 = &v53;
  v45 = 0LL;
  v9 = 4LL;
  do
  {
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 - 1) = 0x3FFFFFFFFFLL;
    *(_QWORD *)v8 = 0x3FFFFFFFFFLL;
    v8 += 24;
    --v9;
  }
  while ( v9 );
  v10 = 0;
  v42 = 1;
  if ( _bittest16((const signed __int16 *)(BugCheckParameter2 + 10), 9u) )
  {
    v41 = a2 & 0xFFFFFFFE;
    MiRetardMdl(BugCheckParameter2);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 10) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
  if ( (*(_WORD *)(BugCheckParameter2 + 10) & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), 0LL);
  v11 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v12 = ((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
      + *(unsigned int *)(BugCheckParameter2 + 40)
      + 4095LL;
  v46 = 0LL;
  v13 = v12 >> 12;
  v49 = v13;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    MiLogMdlRangeEvent(a4, BugCheckParameter2 + 48, 633, v13, 1LL);
    v13 = v49;
  }
  v14 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  while ( v13 )
  {
    if ( *v11 > qword_140E2D7A0 || ((*(_QWORD *)(48 * *v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1237uLL, BugCheckParameter2, (ULONG_PTR)v11, *v11);
    v50 = 48 * *v11;
    v16 = v50 - 0x220000000000LL;
    if ( (*(_QWORD *)(v50 - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v11, *v11);
    v17 = *v11;
    v48 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
    v19 = MiPageToNode(v17);
    v20 = *(_QWORD *)(v16 + 40) >> 60;
    if ( (v20 & 7) == 3 )
    {
      if ( (_BYTE)CurrentIrql == 2 )
      {
        LOBYTE(v47) = 17;
        v44 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v44);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
      }
      else
      {
        v21 = KeGetCurrentIrql();
        v47 = v21;
        if ( (_BYTE)v21 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v18) = 2;
          LOBYTE(v20) = v21;
          KiRaiseIrqlProcessIrqlFlags(v20, v18);
        }
        v44 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v44);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
      }
      SecurePageState = MiGetSecurePageState(v16);
      v24 = SecurePageState & 0x10;
      if ( (SecurePageState & 0x10) != 0 && (SecurePageState & 0x20) != 0 )
        KeBugCheckEx(0x1Au, 0x1248uLL, 7uLL, SecurePageState, *v11);
      MiSetPfnIdentity(v23, 0LL);
      MiInitializeMdlPfnSecureState(v16, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v25 = v47;
      if ( (unsigned __int8)v47 < 2u )
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v47);
          v25 = v47;
        }
        __writecr8(v25);
      }
      v26 = v24 == 0;
      v7 = v45;
      if ( v26 )
        _InterlockedDecrement64(&qword_140E2D7A8);
      else
        _InterlockedDecrement64(&qword_140E2D7B0);
    }
    if ( (*(_DWORD *)(v16 + 32) & 0xC00000) == 0xC00000 )
      MiChangePageAttribute(v16, 1u);
    if ( !v15 )
    {
      v15 = 1LL;
      v27 = (*(_DWORD *)(v16 + 32) >> 22) & 3;
      v45 = v48;
      v42 = v27;
      if ( !stru_140E36558.InitialStack )
        goto LABEL_52;
      if ( ((*(_QWORD *)(v16 + 40) >> 60) & 7) != 1 )
        goto LABEL_52;
      InitialStack = stru_140E36558.InitialStack;
      v29 = v50 / 48;
      if ( !stru_140E36558.InitialStack )
        goto LABEL_52;
      do
      {
        v30 = InitialStack[3];
        if ( v29 < v30 )
        {
          InitialStack = (_QWORD *)*InitialStack;
        }
        else
        {
          if ( v29 - v30 < InitialStack[4] )
            break;
          InitialStack = (_QWORD *)InitialStack[1];
        }
      }
      while ( InitialStack );
      if ( InitialStack )
        v31 = 4;
      else
LABEL_52:
        v31 = 0;
      v14 = v31 | v14 & 0xFFFFFFFB;
      goto LABEL_85;
    }
    v32 = v14 & 0xFFFFFFFD;
    v14 = v14 & 0xFFFFFFFD | 2;
    if ( v7 == v48 )
      v14 = v32;
    if ( (v14 & 2) != 0 )
      goto LABEL_77;
    if ( stru_140E36558.InitialStack )
    {
      if ( ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 1 )
      {
        v33 = stru_140E36558.InitialStack;
        v34 = v50 / 48;
        if ( stru_140E36558.InitialStack )
        {
          do
          {
            v35 = v33[3];
            if ( v34 < v35 )
            {
              v33 = (_QWORD *)*v33;
            }
            else
            {
              if ( v34 - v35 < v33[4] )
                break;
              v33 = (_QWORD *)v33[1];
            }
          }
          while ( v33 );
          if ( v33 )
            goto LABEL_77;
        }
      }
    }
    if ( ((*(_DWORD *)(v16 + 32) >> 22) & 3) != v42 || v19 != v10 )
      goto LABEL_77;
    v36 = *(v11 - 1);
    if ( *v11 == v36 + 1 )
    {
      if ( v15 == 1 || (v14 & 1) != 0 )
      {
        v14 |= 1u;
LABEL_72:
        ++v15;
        goto LABEL_86;
      }
LABEL_79:
      v37 = v11 - 1;
      goto LABEL_80;
    }
    if ( *v11 != v36 - 1 )
    {
LABEL_77:
      if ( (v14 & 1) == 0 )
        goto LABEL_79;
    }
    else if ( v15 == 1 || (v14 & 1) == 0 )
    {
      v14 &= ~1u;
      goto LABEL_72;
    }
    v37 = &v11[-v15];
LABEL_80:
    MiFreeMdlPageRun(*v37, (__int64)&v52);
    v38 = v15 + v46;
    v46 += v15;
    if ( (v14 & 2) != 0 )
    {
      MiZeroAndReleasePages(&v52, v41, a3);
      if ( (v14 & 4) == 0 && (a3 & 2) == 0 )
        _InterlockedAdd64((volatile signed __int64 *)(v45 + 23488), -v38);
      v45 = v48;
      v46 = 0LL;
    }
    v15 = 1LL;
    v42 = (*(_DWORD *)(v16 + 32) >> 22) & 3;
LABEL_85:
    v10 = v19;
LABEL_86:
    v7 = v45;
    v13 = --v49;
    ++v11;
  }
  if ( (v14 & 1) != 0 )
    v39 = &v11[-v15];
  else
    v39 = v11 - 1;
  MiFreeMdlPageRun(*v39, (__int64)&v52);
  MiZeroAndReleasePages(&v52, v41, a3);
  result = 2LL;
  if ( (a3 & 2) == 0 && (v14 & 4) == 0 )
  {
    result = -(v15 + v46);
    _InterlockedAdd64((volatile signed __int64 *)(v7 + 23488), result);
  }
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}
