/*
 * XREFs of MiReservePtes @ 0x14035DE50
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140363E10 (MiMapContiguousMemory.c)
 *     MiMapSinglePage @ 0x14036A87C (MiMapSinglePage.c)
 *     MiValidateInPageEntries @ 0x14038C410 (MiValidateInPageEntries.c)
 *     MiCreateKernelStackSlow @ 0x1403D1640 (MiCreateKernelStackSlow.c)
 *     MiCreatePteCopyList @ 0x1404500A8 (MiCreatePteCopyList.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140480C40 (MiUpdateImagePfnImportRelocations.c)
 *     MmMapMdl @ 0x1404E1360 (MmMapMdl.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiBuildDynamicRegion @ 0x1406F4FA0 (MiBuildDynamicRegion.c)
 *     MiInitializePageFaultResources @ 0x1406F76AC (MiInitializePageFaultResources.c)
 *     MiInitializeDebuggerSupport @ 0x1406FEDCC (MiInitializeDebuggerSupport.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140700050 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyMemoryPagefileData @ 0x14070C8A0 (MiCopyMemoryPagefileData.c)
 *     MiReservePageHash @ 0x14070FF40 (MiReservePageHash.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140710120 (MiAllocateZeroCalibrationBuffer.c)
 *     MiExpandPartitionIds @ 0x140869008 (MiExpandPartitionIds.c)
 *     MiLockAndMapEntireDriver @ 0x14086D784 (MiLockAndMapEntireDriver.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140872E78 (MiMapHotPatchImageInSystemSpace.c)
 *     MiCreatePfnBitMaps @ 0x140879CE0 (MiCreatePfnBitMaps.c)
 *     MiRelocateImageAgain @ 0x14087B470 (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x1409CEA4C (MiRelocateImagePfn.c)
 *     MiAllocateProcessShadow @ 0x140ABD950 (MiAllocateProcessShadow.c)
 *     MmAllocateMappingAddressEx @ 0x140AF1F50 (MmAllocateMappingAddressEx.c)
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 *     MmAllocateDumpHibernateResources @ 0x140B2A818 (MmAllocateDumpHibernateResources.c)
 *     MmAllocateNonCachedMemory @ 0x140B37D20 (MmAllocateNonCachedMemory.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3C35C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 *     MiAllocateEnclaveVad @ 0x140B693A0 (MiAllocateEnclaveVad.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     MiSectionInitialization @ 0x140CF86BC (MiSectionInitialization.c)
 *     MiInitializeMirroring @ 0x140CF8AE4 (MiInitializeMirroring.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 *     MiCreateRetpolineBitmap @ 0x140CFAA88 (MiCreateRetpolineBitmap.c)
 *     MiInitializeRetpoline @ 0x140CFABB8 (MiInitializeRetpoline.c)
 *     MiInitializeKernelCfg @ 0x140CFE970 (MiInitializeKernelCfg.c)
 *     MiInitializePteInfo @ 0x140CFEE68 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140CFF6B4 (MiInitializeTbFlush.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiSystemVaTypeToVm @ 0x140285CBC (MiSystemVaTypeToVm.c)
 *     MiMakeSystemPtesAppear @ 0x1402A5C9C (MiMakeSystemPtesAppear.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiCheckProcessorPteCache @ 0x14035EA80 (MiCheckProcessorPteCache.c)
 *     MiExpandPtes @ 0x14035ED90 (MiExpandPtes.c)
 *     MiEmptyPteBins @ 0x14035F190 (MiEmptyPteBins.c)
 *     RtlFindClearBitsEx @ 0x14035F9A0 (RtlFindClearBitsEx.c)
 *     MiCheckPteReserve @ 0x1404C3D18 (MiCheckPteReserve.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned __int64 __fastcall MiReservePtes(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // eax
  ULONG_PTR BugCheckParameter4; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  int v11; // edx
  ULONG_PTR v12; // r8
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 v16; // r15
  __int64 v17; // r8
  __int128 *v18; // r13
  __int128 v19; // rax
  unsigned __int64 ClearBits; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r10
  volatile signed __int32 *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  signed __int32 v26; // eax
  int v27; // r10d
  signed __int32 v28; // ett
  signed __int32 v29; // eax
  int v30; // r10d
  signed __int32 v31; // ett
  signed __int32 v32; // eax
  int v33; // r11d
  signed __int32 v34; // ett
  const signed __int64 *v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r11
  volatile signed __int32 *v38; // r9
  unsigned int v39; // r8d
  unsigned __int64 *v40; // r9
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 i; // rcx
  int v44; // ecx
  void *volatile *v45; // rax
  struct _LIST_ENTRY **v46; // rbx
  unsigned __int64 v47; // rdi
  int v48; // r12d
  bool v49; // al
  int v50; // r15d
  int v51; // eax
  int v52; // eax
  BOOL v53; // ecx
  ULONG_PTR v54; // rsi
  ULONG_PTR v55; // rbx
  __int64 v56; // rcx
  ULONG_PTR v57; // rbx
  unsigned __int64 v58; // r11
  volatile signed __int32 *v59; // r10
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rcx
  int v62; // r8d
  int v63; // r8d
  int v64; // r10d
  unsigned __int64 v65; // rcx
  char v66; // dl
  __int64 v67; // rax
  unsigned __int64 v68; // r10
  unsigned __int64 v69; // r15
  volatile signed __int32 *v70; // r11
  unsigned __int64 v71; // rcx
  signed __int32 v72[8]; // [rsp+0h] [rbp-100h] BYREF
  int v73; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v74; // [rsp+38h] [rbp-C8h]
  __int128 v75; // [rsp+40h] [rbp-C0h] BYREF
  struct _LIST_ENTRY **v76; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v77; // [rsp+58h] [rbp-A8h]
  int v78; // [rsp+5Ch] [rbp-A4h]
  unsigned int v79; // [rsp+60h] [rbp-A0h]
  int v80; // [rsp+64h] [rbp-9Ch]
  bool v81; // [rsp+68h] [rbp-98h]
  __int16 v82; // [rsp+69h] [rbp-97h]
  char v83; // [rsp+6Bh] [rbp-95h]
  int v84; // [rsp+6Ch] [rbp-94h]
  __int64 v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h]
  char v87[160]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *(_DWORD *)(a1 + 40);
  BugCheckParameter4 = a2;
  v8 = a2;
  v75 = 0LL;
  if ( (v4 & 1) != 0 )
  {
    v8 = (unsigned __int64)a2 >> 4;
  }
  else if ( a2 <= 0x40uLL && (_KWAIT_BLOCK **)a1 == &stru_140E36558.WaitBlockList )
  {
    v9 = MiCheckProcessorPteCache(a2);
    v74 = v9;
    if ( v9 )
    {
LABEL_5:
      v10 = v9;
      goto LABEL_6;
    }
  }
  if ( a2 >= 0x200 )
  {
    MiEmptyPteBins(a1, BugCheckParameter4, 6LL);
    v13 = MiExpandPtes(a1, BugCheckParameter4);
    v14 = v13;
    if ( v13 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
        MiCheckPteReserve(a1, v13, BugCheckParameter4);
      return v14;
    }
    if ( (_KWAIT_BLOCK **)a1 == &stru_140E36558.WaitBlockList || (_UNKNOWN *)a1 == &unk_140E34A40 )
    {
LABEL_13:
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
      return 0LL;
    }
  }
  v16 = 0LL;
  v73 = 0;
  while ( 1 )
  {
LABEL_17:
    v17 = *(_QWORD *)(a1 + 64);
    v18 = (__int128 *)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_154;
    v16 = *(_QWORD *)(a1 + 72);
    if ( v16 )
    {
      if ( *(_QWORD *)a1 < v16 )
      {
        v16 = 0LL;
      }
      else
      {
        *(_QWORD *)&v19 = *(_QWORD *)a1 - v16;
        *((_QWORD *)&v19 + 1) = *(_QWORD *)(a1 + 8) + 8 * (v16 >> 6);
        v75 = v19;
        v18 = &v75;
        if ( v17 )
          v17 -= v16;
      }
    }
    ClearBits = RtlFindClearBitsEx(v18, v8, v17, a4);
    v21 = ClearBits;
    if ( ClearBits == -1LL )
    {
LABEL_154:
      if ( v16 && v16 != *(_QWORD *)(a1 + 72) || (unsigned int)MiMakeSystemPtesAppear(a1, BugCheckParameter4, &v73) )
        continue;
      v9 = MiExpandPtes(a1, BugCheckParameter4);
      v74 = v9;
      if ( v9 )
        goto LABEL_5;
      if ( v73 != 6 )
      {
        v73 = 6;
        MiEmptyPteBins(a1, BugCheckParameter4, 1LL);
        continue;
      }
      goto LABEL_13;
    }
    a4 = ClearBits & 0x1F;
    v22 = v8;
    v23 = (volatile signed __int32 *)((*((_QWORD *)v18 + 1) + (ClearBits >> 3)) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( a4 + v8 <= 0x20 )
      break;
    if ( (ClearBits & 0x1F) == 0 )
      goto LABEL_25;
    v29 = *v23;
    v30 = ((1 << (32 - (v21 & 0x1F))) - 1) << a4;
    do
    {
      if ( (v29 & v30) != 0 )
        goto LABEL_17;
      v31 = v29;
      v29 = _InterlockedCompareExchange(v23, v30 | v29, v29);
    }
    while ( v31 != v29 );
    v22 = v8 - (32 - (unsigned int)(v21 & 0x1F));
    ++v23;
LABEL_25:
    while ( v22 >= 0x20 )
    {
      if ( _InterlockedCompareExchange(v23, -1, 0) )
      {
        if ( v8 != v22 )
        {
          v58 = v8 - v22;
          v59 = (volatile signed __int32 *)(*((_QWORD *)v18 + 1) + 4 * (v21 >> 5));
          if ( v58 + a4 <= 0x20 )
            goto LABEL_116;
          if ( a4 )
          {
            v62 = v21 & 0x1F;
            _InterlockedAnd(v59, ~(((1 << (32 - v62)) - 1) << a4));
            v58 -= (unsigned int)(32 - v62);
            ++v59;
          }
          if ( v58 >= 0x20 )
          {
            v61 = v58 >> 5;
            v58 += -32LL * (v58 >> 5);
            do
            {
              *v59++ = 0;
              --v61;
            }
            while ( v61 );
          }
LABEL_128:
          if ( v58 )
            _InterlockedAnd(v59, -1 << v58);
        }
        goto LABEL_17;
      }
      ++v23;
      v22 -= 32LL;
    }
    if ( !v22 )
      goto LABEL_27;
    v32 = *v23;
    v33 = (1 << v22) - 1;
    while ( (v32 & v33) == 0 )
    {
      v34 = v32;
      v32 = _InterlockedCompareExchange(v23, v33 | v32, v32);
      if ( v34 == v32 )
        goto LABEL_27;
    }
    v58 = v8 - v22;
    v59 = (volatile signed __int32 *)(*((_QWORD *)v18 + 1) + 4 * (v21 >> 5));
    if ( v58 + a4 > 0x20 )
    {
      if ( a4 )
      {
        v63 = v21 & 0x1F;
        _InterlockedAnd(v59, ~(((1 << (32 - v63)) - 1) << a4));
        v58 -= (unsigned int)(32 - v63);
        ++v59;
      }
      if ( v58 >= 0x20 )
      {
        v60 = v58 >> 5;
        v58 += -32LL * (v58 >> 5);
        do
        {
          *v59++ = 0;
          --v60;
        }
        while ( v60 );
      }
      goto LABEL_128;
    }
LABEL_116:
    if ( v58 == 32 )
      *v59 = 0;
    else
      _InterlockedAnd(v59, ~(((1 << v58) - 1) << a4));
  }
  v26 = *v23;
  if ( v8 == 32 )
    v27 = -1;
  else
    v27 = ((1 << v8) - 1) << a4;
  do
  {
    if ( (v26 & v27) != 0 )
      goto LABEL_17;
    v28 = v26;
    v26 = _InterlockedCompareExchange(v23, v27 | v26, v26);
  }
  while ( v28 != v26 );
LABEL_27:
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)BugCheckParameter4);
  v24 = v21 + v16;
  if ( v18 != &v75 )
    v24 = v21;
  v25 = 16 * v24;
  *(_QWORD *)(a1 + 64) = v24 + v8;
  if ( (*(_BYTE *)(a1 + 40) & 1) == 0 )
    v25 = v24;
  v10 = *(_QWORD *)(a1 + 32) + 8 * v25;
  v74 = v10;
LABEL_6:
  v11 = *(_DWORD *)(a1 + 40);
  if ( (v11 & 4) != 0 )
  {
    v12 = (__int64)(v10 << 25) >> 16;
    if ( !a2 )
      KeBugCheckEx(0xDAu, 0x200uLL, v12, 0LL, 0LL);
    v66 = v11 & 1;
    v67 = v10 - *(_QWORD *)(a1 + 32);
    LOBYTE(v10) = 1;
    v68 = 2 * ((unsigned __int64)(unsigned int)(v67 >> 3) >> (4 * v66));
    LODWORD(v69) = 0;
    while ( 1 )
    {
      v35 = *(const signed __int64 **)(a1 + 24);
      if ( v68 >= 2 * ((unsigned __int64)(unsigned int)(v67 >> 3) >> (4 * v66))
                + 2 * (BugCheckParameter4 >> (4 * v66))
                - 2 )
        break;
      if ( !_bittest64(v35, v68) )
        KeBugCheckEx(
          0xDAu,
          0x201uLL,
          v12,
          v12
        + (((v68 << 11) - ((unsigned __int64)(unsigned int)(v67 >> 3) >> (4 * v66) << 12)) & 0xFFFFFFFFFFFFF000uLL),
          BugCheckParameter4);
      v69 = v68 & 0x1F;
      v70 = (volatile signed __int32 *)v35 + (v68 >> 5);
      if ( v69 + 1 > 0x20 )
      {
        if ( (v68 & 0x1F) == 0 )
          goto LABEL_150;
        _InterlockedAnd(v70, ~(((1 << (32 - (v68 & 0x1F))) - 1) << v69));
        v10 = 1LL - (32 - (unsigned int)(v68 & 0x1F));
        ++v70;
        if ( v10 < 0x20 )
        {
          LODWORD(v69) = 0;
        }
        else
        {
          v71 = v10 >> 5;
          v10 += -32LL * (v10 >> 5);
          LODWORD(v69) = 0;
          do
          {
            *v70++ = 0;
            --v71;
          }
          while ( v71 );
        }
        if ( v10 )
LABEL_150:
          _InterlockedAnd(v70, -1 << v10);
        LOBYTE(v10) = 1;
      }
      else
      {
        LOBYTE(v10) = 1;
        _InterlockedAnd(v70, ~(1 << v69));
        LODWORD(v69) = 0;
      }
      v68 += 2LL;
    }
    v36 = v68 & 0x1F;
    LOBYTE(v37) = 2;
    v38 = (volatile signed __int32 *)v35 + (v68 >> 5);
    if ( v36 + 2 > 0x20 )
    {
      if ( (v68 & 0x1F) == 0 )
        goto LABEL_98;
      v64 = v68 & 0x1F;
      _InterlockedAnd(v38, ~(((1 << (32 - v64)) - 1) << v36));
      v37 = 2LL - (unsigned int)(32 - v64);
      ++v38;
      if ( v37 >= 0x20 )
      {
        v65 = v37 >> 5;
        v37 += -32LL * (v37 >> 5);
        do
        {
          *v38++ = v69;
          --v65;
        }
        while ( v65 );
      }
      if ( v37 )
LABEL_98:
        _InterlockedAnd(v38, -1 << v37);
    }
    else
    {
      _InterlockedAnd(v38, ~(3 << v36));
    }
    v10 = v74;
  }
  if ( a2 > 0x10 )
    goto LABEL_63;
  v39 = 0;
  if ( a2 )
  {
    v40 = (unsigned __int64 *)v10;
    do
    {
      v41 = *v40;
      if ( qword_140E2D740 )
      {
        v42 = qword_140E2D748 & v41;
        v41 &= ~0x10uLL;
        if ( (*v40 & 0x10) == 0 )
          v41 = v42;
      }
      if ( (unsigned int)(v41 >> 31) )
        break;
      ++v39;
      ++v40;
    }
    while ( v39 < a2 );
  }
  if ( v39 != a2 )
  {
LABEL_63:
    for ( i = v10; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    if ( i >= 0xFFFF800000000000uLL )
    {
      if ( i > qword_140E2DE50 || i < qword_140E2DE40 )
        v44 = (unsigned __int8)byte_140E37A70[((i >> 39) & 0x1FF) - 256];
      else
        v44 = 1;
    }
    else
    {
      v44 = 1;
    }
    v45 = MiSystemVaTypeToVm(v44);
    v46 = (struct _LIST_ENTRY **)&unk_140E371C0;
    if ( v45 )
      v46 = (struct _LIST_ENTRY **)v45;
    v47 = v10;
    v83 = 0;
    memset_0(v87, 0, 0x98uLL);
    v48 = 0;
    v49 = ((_DWORD)v46[23] & 0x40) != 0;
    v78 = 20;
    v81 = v49;
    v50 = 0;
    v51 = *((_DWORD *)v46 + 46);
    v79 = 8;
    v80 = 1;
    v76 = v46;
    if ( (v51 & 0xF) != 0 || v46 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v52 = v79;
      v53 = ((_DWORD)v46[23] & 0xF) == 0;
    }
    else
    {
      v53 = 0;
      v52 = 9;
    }
    v77 = v53;
    v79 = v52 & 0xFFFFFFDB;
    v54 = 0LL;
    v82 = 0;
    v84 = 0;
    v85 = 0LL;
    v86 = 0LL;
    while ( 1 )
    {
LABEL_74:
      if ( v54 >= BugCheckParameter4 )
      {
        MiFlushTbList((__int64)&v76);
        return v74;
      }
      v55 = *(_QWORD *)v47;
      if ( (*(_QWORD *)v47 & 0xFE1LL) != 0 )
        KeBugCheckEx(0x1Au, 0x5100uLL, v47, BugCheckParameter4 - v54, *(_QWORD *)v47);
      if ( qword_140E2D740 )
      {
        v56 = qword_140E2D748 & v55;
        v55 &= ~0x10uLL;
        if ( (*(_QWORD *)v47 & 0x10) == 0 )
          v55 = v56;
      }
      v57 = v55 >> 31;
      *(_QWORD *)v47 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( !(_DWORD)v57 )
        break;
      if ( (_DWORD)v57 != v48 )
      {
        while ( 1 )
        {
          _InterlockedOr(v72, 0);
          if ( (unsigned int)(KiTbFlushTimeStamp - v57) > 2
            || (v57 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v57) >= 2 )
          {
LABEL_93:
            v50 = 0;
            v48 = v57;
            goto LABEL_81;
          }
          if ( (KiTbFlushTimeStamp & 1) == 0 )
            break;
          v73 = 0;
          _InterlockedOr(v72, 0);
          while ( _bittest(&KiTbFlushTimeStamp, 0) )
            KeYieldProcessorEx(&v73);
          if ( (v57 & 1) == 0 )
            goto LABEL_93;
        }
        MiInsertTbFlushEntry(&v76, (__int64)(v47 << 25) >> 16, 1LL);
        v48 = v57;
        v50 = 1;
        goto LABEL_81;
      }
      if ( !v50 )
        goto LABEL_81;
      MiInsertTbFlushEntry(&v76, (__int64)(v47 << 25) >> 16, 1LL);
      ++v54;
      v47 += 8LL;
    }
    v50 = 0;
    v48 = 0;
LABEL_81:
    ++v54;
    v47 += 8LL;
    goto LABEL_74;
  }
  return v10;
}
