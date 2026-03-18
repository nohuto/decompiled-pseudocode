/*
 * XREFs of MiReleasePtes @ 0x140281CE0
 * Callers:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiDeleteCachedKernelStack @ 0x14028FE5C (MiDeleteCachedKernelStack.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1402A97A0 (MiDeleteCachedKernelShadowStack.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140363E10 (MiMapContiguousMemory.c)
 *     MiValidateInPageEntries @ 0x14038C410 (MiValidateInPageEntries.c)
 *     MiCreateKernelStackSlow @ 0x1403D1640 (MiCreateKernelStackSlow.c)
 *     MmDeleteKernelStack @ 0x1404162AC (MmDeleteKernelStack.c)
 *     MiReturnPteMappingSet @ 0x140457050 (MiReturnPteMappingSet.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140480C40 (MiUpdateImagePfnImportRelocations.c)
 *     MiDeleteProcessShadow @ 0x140483DCC (MiDeleteProcessShadow.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     MiReleasePteCopyList @ 0x1404E03EC (MiReleasePteCopyList.c)
 *     MmMapMdl @ 0x1404E1360 (MmMapMdl.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiUnmapSinglePage @ 0x140505014 (MiUnmapSinglePage.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiChangePagingFileMaximum @ 0x1406F88B0 (MiChangePagingFileMaximum.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140700050 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyMemoryPagefileData @ 0x14070C8A0 (MiCopyMemoryPagefileData.c)
 *     MiReleasePageHash @ 0x14070FEE0 (MiReleasePageHash.c)
 *     MiFreeZeroCalibrationBuffer @ 0x140710730 (MiFreeZeroCalibrationBuffer.c)
 *     MiExpandPartitionIds @ 0x140869008 (MiExpandPartitionIds.c)
 *     MiUnlockEntireDriver @ 0x14086D940 (MiUnlockEntireDriver.c)
 *     MmFreeIsrStack @ 0x140875EE8 (MmFreeIsrStack.c)
 *     MiCreatePfnBitMaps @ 0x140879CE0 (MiCreatePfnBitMaps.c)
 *     MiDeleteSparseRange @ 0x14087A3B4 (MiDeleteSparseRange.c)
 *     MiRelocateImageAgain @ 0x14087B470 (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x1409CEA4C (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 *     MmFreeMappingAddress @ 0x140B12E50 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x140B1AE1C (MmReleaseDumpHibernateResources.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3C35C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 *     MiReleaseHotPatchResources @ 0x140B55540 (MiReleaseHotPatchResources.c)
 *     MmFreeNonCachedMemory @ 0x140B685F0 (MmFreeNonCachedMemory.c)
 *     MiAllocateEnclaveVad @ 0x140B693A0 (MiAllocateEnclaveVad.c)
 *     MiDeleteEnclavePages @ 0x140C01AD8 (MiDeleteEnclavePages.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 *     MiCreateRetpolineBitmap @ 0x140CFAA88 (MiCreateRetpolineBitmap.c)
 *     MiInitializePteInfo @ 0x140CFEE68 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140CFF6B4 (MiInitializeTbFlush.c)
 * Callees:
 *     MiInsertCachedPte @ 0x1402821D0 (MiInsertCachedPte.c)
 *     MiCheckPteRelease @ 0x14028271C (MiCheckPteRelease.c)
 *     MiVaToFlushVm @ 0x1402843F8 (MiVaToFlushVm.c)
 *     MiReturnSystemPtes @ 0x1402A3A58 (MiReturnSystemPtes.c)
 *     MiAttemptCoalesce @ 0x1402A42E8 (MiAttemptCoalesce.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiSetPteTimeStamp @ 0x14048051C (MiSetPteTimeStamp.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned __int64 __fastcall MiReleasePtes(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v7; // r15
  ULONG_PTR v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r10
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // r9
  bool i; // zf
  __int64 v14; // r10
  unsigned __int64 result; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r8
  int v21; // eax
  BOOL v22; // ecx
  ULONG_PTR v23; // r10
  unsigned __int64 v24; // r8
  volatile signed __int32 *v25; // r9
  _QWORD *v26; // rcx
  ULONG_PTR v27; // rdx
  unsigned __int64 v28; // rcx
  ULONG_PTR v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+4Ch] [rbp-B4h]
  unsigned int v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+54h] [rbp-ACh]
  bool v38; // [rsp+58h] [rbp-A8h]
  __int16 v39; // [rsp+59h] [rbp-A7h]
  int v40; // [rsp+5Ch] [rbp-A4h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]

  v3 = a3;
  memset_0(&v33, 0, 0xC8uLL);
  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
    MiCheckPteRelease(a1, a2, (unsigned int)v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 32)) >> 3;
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    BugCheckParameter4 >>= 4;
  v7 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    v7 = v3;
  if ( (unsigned int)v3 < 0x200
    || (_KWAIT_BLOCK **)a1 != &stru_140E36558.WaitBlockList && (_UNKNOWN *)a1 != &unk_140E34A40 )
  {
    v8 = *(_QWORD *)a1;
    v32 = 0;
    if ( BugCheckParameter4 >= v8 )
      goto LABEL_12;
    if ( v7 > 1 )
    {
      if ( v8 - BugCheckParameter4 < v7 )
        goto LABEL_12;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)(v9 + 8 * (BugCheckParameter4 >> 6));
      v11 = v9 + 8 * (BugCheckParameter4 >> 6);
      v12 = v9 + 8 * ((BugCheckParameter4 + v7 - 1) >> 6);
      if ( v11 == v12 )
      {
        if ( (v10 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4)) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4 )
          goto LABEL_12;
      }
      else
      {
        for ( i = (v10 & (-1LL << BugCheckParameter4)) == -1LL << BugCheckParameter4; ; i = v14 == -1 )
        {
          if ( !i )
            goto LABEL_12;
          v14 = *(_QWORD *)(v11 + 8);
          v11 += 8LL;
          if ( v11 == v12 )
            break;
        }
        if ( (v14 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1))) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1) )
LABEL_12:
          KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
      }
    }
    else if ( v7 != 1
           || !_bittest64(
                 (const signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * (BugCheckParameter4 >> 6)),
                 BugCheckParameter4 & 0x3F) )
    {
      goto LABEL_12;
    }
    if ( !(_DWORD)v3 )
      goto LABEL_23;
    goto LABEL_44;
  }
  v32 = 1;
LABEL_44:
  v26 = a2;
  v27 = v3;
  do
  {
    *v26++ = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    --v27;
  }
  while ( v27 );
LABEL_23:
  result = MiInsertCachedPte(a1, a2, (unsigned int)v3);
  if ( !(_DWORD)result )
  {
    if ( v32 == 1 )
    {
      return MiReturnSystemPtes(a1, 1LL, BugCheckParameter4, (v3 + 511) & 0xFFFFFFFFFFFFFE00uLL);
    }
    else
    {
      v31 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( (unsigned __int64)&v31 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v31 <= 0xFFFFF6FB7DBED7F8uLL )
        v16 = MiReadPteShadow(&v31, *(_QWORD *)&CLFS_LSN_NULL_EXT);
      _InterlockedOr(v30, 0);
      v17 = MiSetPteTimeStamp(v16, (unsigned int)KiTbFlushTimeStamp);
      v31 = v17;
      if ( (_DWORD)v3 )
      {
        v29 = v3;
        do
        {
          *a2++ = v17;
          --v29;
        }
        while ( v29 );
      }
      if ( qword_140E2D740 && (v17 & 0x10) == 0 )
        v17 &= qword_140E2D748;
      if ( !(unsigned int)(v17 >> 31) )
      {
        v18 = MiVaToFlushVm((__int64)((_QWORD)&a2[-v3] << 25) >> 16);
        v35 = 20;
        v36 = 8;
        v20 = v18;
        v37 = 1;
        v33 = v18;
        v38 = (*(_DWORD *)(v18 + 184) & 0x40) != 0;
        if ( (*(_DWORD *)(v18 + 184) & 0xF) != 0
          || (struct _LIST_ENTRY **)v18 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v21 = v36;
          v22 = (*(_DWORD *)(v20 + 184) & 0xF) == 0;
        }
        else
        {
          v22 = 0;
          v21 = 9;
        }
        v34 = v22;
        v36 = v21 & 0xFFFFFFDB;
        v39 = 0;
        v40 = 0;
        v41 = 0LL;
        v42 = 0LL;
        MiInsertTbFlushEntry(&v33, v19, v3);
        MiFlushTbList(&v33);
      }
      v23 = BugCheckParameter4 & 0x1F;
      v24 = v7;
      v25 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
      if ( v7 + v23 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd(v25, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v23));
          v24 = v7 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          ++v25;
        }
        if ( v24 >= 0x20 )
        {
          v28 = v24 >> 5;
          v24 += -32LL * (v24 >> 5);
          do
          {
            *v25++ = 0;
            --v28;
          }
          while ( v28 );
        }
        if ( v24 )
          _InterlockedAnd(v25, -1 << v24);
      }
      else if ( v7 == 32 )
      {
        *v25 = 0;
      }
      else
      {
        _InterlockedAnd(v25, ~(((1 << v7) - 1) << v23));
      }
      result = v3 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v3);
      if ( result > 0x200000 )
        return MiAttemptCoalesce(a1, BugCheckParameter4, v7);
    }
  }
  return result;
}
