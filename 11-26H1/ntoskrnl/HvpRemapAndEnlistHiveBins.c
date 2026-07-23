/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x1408E23B0
 * Callers:
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmpProtectPoolEx @ 0x1404C3198 (CmpProtectPoolEx.c)
 *     MmSetPageProtection @ 0x1405031A0 (MmSetPageProtection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvIsRangeDirty @ 0x14077E264 (HvIsRangeDirty.c)
 *     HvpFreeBin @ 0x1408BDE7C (HvpFreeBin.c)
 *     HvpMapEntryIsPoolBacked @ 0x1408BF824 (HvpMapEntryIsPoolBacked.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpEnlistFreeCells @ 0x1408E2BC0 (HvpEnlistFreeCells.c)
 *     HvpEnlistFreeCell @ 0x1408E2D90 (HvpEnlistFreeCell.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408E37B4 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpPointMapEntriesToBuffer @ 0x1408E3AD0 (HvpPointMapEntriesToBuffer.c)
 *     HvpValidateLoadedBin @ 0x140A83730 (HvpValidateLoadedBin.c)
 *     HvpAllocateNonPagedBin @ 0x140A8F1BC (HvpAllocateNonPagedBin.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  ULONG_PTR v3; // r15
  __int64 j; // rbx
  bool v5; // zf
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // r11d
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r11d
  __int64 BinAddress; // r12
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rbx
  char v18; // di
  unsigned int i; // r14d
  __int64 v20; // rcx
  unsigned int v21; // r13d
  int v22; // r13d
  int v23; // r15d
  unsigned int v24; // edi
  int v25; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // r9
  unsigned int v37; // r10d
  unsigned int v38; // r11d
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  ULONG_PTR v42; // r13
  int v43; // eax
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rdi
  unsigned int k; // esi
  __int64 v49; // rcx
  __int64 v50; // r9
  const void *v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // r9d
  int v60; // [rsp+30h] [rbp-38h]
  unsigned __int8 v61; // [rsp+34h] [rbp-34h]
  unsigned int v62; // [rsp+38h] [rbp-30h]
  unsigned int v63; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v64; // [rsp+40h] [rbp-28h] BYREF
  __int64 v65; // [rsp+48h] [rbp-20h] BYREF
  void *CellMap; // [rsp+50h] [rbp-18h]
  __int16 v70; // [rsp+C8h] [rbp+60h] BYREF

  v3 = BugCheckParameter2;
  v70 = 0;
  j = a3;
  HvpGetBinContextInitialize(&v70);
  v5 = (*(_DWORD *)(v3 + 160) & 0x20000) == 0;
  v6 = *(_DWORD *)(v3 + 280);
  v65 = 0LL;
  v64 = 0LL;
  v61 = 0;
  v63 = v6;
  if ( v5 )
    v7 = 0;
  else
    v7 = *(_DWORD *)(v3 + 232) - 4096;
  v62 = v7;
  v8 = 0;
  v60 = 0;
  while ( 1 )
  {
    if ( v8 >= v7 )
      goto LABEL_44;
    CellMap = (void *)HvpGetCellMap(v3, v8);
    BinAddress = HvpMapEntryGetBinAddress(v9, CellMap, &v70, v10);
    v14 = *(unsigned int *)(BinAddress + 8);
    v15 = *(unsigned int *)(BinAddress + 4);
    if ( (int)v15 + (int)v14 > v63
      || (unsigned int)v14 < 0x1000
      || (int)v15 + (int)v14 < (unsigned int)v14
      || (v14 & 0xFFF) != 0
      || (_DWORD)v15 != v12
      || *(_DWORD *)BinAddress != 1852400232 )
    {
      v24 = -1073741492;
      SetFailureLocation(j, 1, 34, -1073741492, v11);
      if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(j, 0, 34, -1073741492, 32);
        return v24;
      }
      v27 = HvpMarkDirty(v3, v60, 4096, 0);
      v24 = v27;
      if ( v27 < 0 )
      {
        SetFailureLocation(j, 0, 34, v27, 48);
        return v24;
      }
      *(_OWORD *)(BinAddress + 12) = 0LL;
      memset_0((void *)(BinAddress + 36), 0, 0xFDCuLL);
      v7 = v62;
      *(_DWORD *)(BinAddress + 8) = 4096;
      *(_DWORD *)(BinAddress + 4) = v60 & 0x7FFFFFFF;
      *(_DWORD *)BinAddress = 1852400232;
      *(_DWORD *)(BinAddress + 28) = 0;
      *(_DWORD *)(BinAddress + 32) = 4064;
      *(_DWORD *)(*(_QWORD *)(v3 + 64) + 4088LL) |= 4u;
      v61 = 1;
    }
    v16 = *(_DWORD *)(BinAddress + 8);
    if ( v16 == 4096 )
      goto LABEL_12;
    HvpMapEntryReleaseBinAddress(v14, v15, &v70);
    HvpGetBinContextInitialize(&v70);
    if ( v16 + v8 > v7 )
      break;
    v31 = HvpViewMapPromoteRangeToMapping(v3 + 224, v8, v16, &v65);
    v24 = v31;
    if ( v31 < 0 )
    {
      SetFailureLocation(a3, 0, 34, v31, 64);
      return v24;
    }
    HvpPointMapEntriesToBuffer(v3, 0, 0LL);
    BinAddress = HvpMapEntryGetBinAddress(v32, CellMap, &v70, v33);
LABEL_12:
    v17 = *(_QWORD *)(v3 + 56);
    v18 = 0;
    *(_DWORD *)(v3 + 144) += 32;
    for ( i = 32; ; i += v21 )
    {
      v20 = *(unsigned int *)(BinAddress + 8);
      if ( i >= (unsigned int)v20 )
        break;
      CellMap = (void *)(BinAddress + i);
      v21 = *(_DWORD *)CellMap;
      if ( *(int *)CellMap < 0 )
        v21 = -v21;
      if ( i + v21 < i || i + v21 > (unsigned int)v20 || (v21 & 7) != 0 || !v21 )
      {
        v22 = -1073741492;
        v23 = -1073741492;
        SetFailureLocation(v17, 1, 26, -1073741492, 8);
        if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
        {
          v24 = -1073741492;
          v25 = 0;
LABEL_21:
          SetFailureLocation(v17, 0, 26, v22, v25);
          SetFailureLocation(a3, 0, 34, v23, 80);
          return v24;
        }
        v21 = *(_DWORD *)(BinAddress + 8) - i;
        v28 = HvpMarkDirty(BugCheckParameter2, i + v60, v21, 0);
        v23 = v28;
        v24 = v28;
        if ( v28 < 0 )
        {
          v22 = v28;
          v25 = 16;
          goto LABEL_21;
        }
        v29 = CellMap;
        memset_0(CellMap, 0, v21);
        v3 = BugCheckParameter2;
        *v29 = v21;
        v18 = 1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        SetFailureLocation(v17, 1, 26, 1073741833, 32);
      }
      else if ( *(int *)CellMap < 0 )
      {
        *(_DWORD *)(v3 + 152) += v21;
        continue;
      }
      *(_DWORD *)(v3 + 148) += v21;
      HvpEnlistFreeCell(v3, i + v60);
    }
    v30 = v61;
    if ( v18 )
      v30 = 1LL;
    v60 += v20;
    v61 = v30;
    HvpMapEntryReleaseBinAddress(v20, v30, &v70);
    HvpGetBinContextInitialize(&v70);
    j = a3;
    v7 = v62;
  }
  for ( j = a3; ; j = a3 )
  {
LABEL_44:
    if ( v8 >= v63 )
    {
      if ( v61 )
        return 1073741833;
      else
        return 0;
    }
    v34 = HvpGetCellMap(v3, v8);
    v39 = HvpMapEntryGetBinAddress(v35, v34, &v70, v36);
    if ( (unsigned __int8)HvpValidateLoadedBin(v39, v38, v37) )
    {
      v42 = BugCheckParameter2;
    }
    else
    {
      v24 = -1073741492;
      SetFailureLocation(j, 1, 34, -1073741492, 96);
      if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(j, 0, 34, -1073741492, 112);
        return v24;
      }
      v42 = BugCheckParameter2;
      v43 = HvpMarkDirty(BugCheckParameter2, v60, 4096, 0);
      v24 = v43;
      if ( v43 < 0 )
      {
        SetFailureLocation(j, 0, 34, v43, 128);
        return v24;
      }
      *(_OWORD *)(v39 + 12) = 0LL;
      memset_0((void *)(v39 + 36), 0, 0xFDCuLL);
      *(_DWORD *)(v39 + 8) = 4096;
      *(_DWORD *)(v39 + 4) = v60 & 0x7FFFFFFF;
      *(_DWORD *)v39 = 1852400232;
      *(_DWORD *)(v39 + 28) = 0;
      *(_DWORD *)(v39 + 32) = 4064;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      v61 = 1;
    }
    v44 = *(unsigned int *)(v39 + 8);
    if ( (_DWORD)v44 != 4096 )
      break;
LABEL_67:
    v3 = BugCheckParameter2;
    v56 = HvpEnlistFreeCells(BugCheckParameter2);
    v24 = v56;
    if ( v56 == 1073741833 )
    {
      v61 = 1;
    }
    else if ( v56 < 0 )
    {
      SetFailureLocation(a3, 0, 34, v56, 176);
      return v24;
    }
    v60 += *(_DWORD *)(v39 + 8);
    HvpMapEntryReleaseBinAddress(v58, v57, &v70);
    HvpGetBinContextInitialize(&v70);
  }
  HvpMapEntryReleaseBinAddress(v41, v40, &v70);
  HvpGetBinContextInitialize(&v70);
  if ( (*(_DWORD *)(v42 + 160) & 0x2000000) != 0 )
  {
    v24 = HvpAllocateNonPagedBin(v46, (unsigned int)v44, &v64);
    v59 = v24;
    if ( (v24 & 0x80000000) != 0 )
      goto LABEL_80;
    v47 = v64;
    goto LABEL_59;
  }
  LOBYTE(v45) = 1;
  v47 = guard_dispatch_icall_no_overrides((unsigned int)v44, v45);
  if ( v47 )
  {
LABEL_59:
    for ( k = 0; k < (unsigned int)v44; *(_DWORD *)(v34 + 16) = 0 )
    {
      v34 = HvpGetCellMap(v42, k + v60);
      v51 = (const void *)HvpMapEntryGetBinAddress(v49, v34, &v70, v50);
      memmove((void *)(v47 + k), v51, 0x1000uLL);
      HvpMapEntryReleaseBinAddress(v53, v52, &v70);
      HvpGetBinContextInitialize(&v70);
      if ( HvpMapEntryIsPoolBacked(v34) )
        HvpFreeBin(v42, 0x1000u, (unsigned __int64)v51);
      else
        CmpReleaseGlobalQuota(0x1000u);
      k += 4096;
      *(_QWORD *)v34 = 0LL;
      *(_QWORD *)(v34 + 8) = 0LL;
    }
    if ( !HvIsRangeDirty(v42, v60, v44) )
    {
      if ( (*(_DWORD *)(v42 + 160) & 0x2000000) != 0 )
        MmSetPageProtection(v47, v44, 2u);
      else
        CmpProtectPoolEx(v47, v47, v44, 2u);
    }
    HvpPointMapEntriesToBuffer(v42, 1, 0LL);
    v39 = HvpMapEntryGetBinAddress(v54, v34, &v70, v55);
    v64 = 0LL;
    goto LABEL_67;
  }
  v24 = -1073741670;
  v59 = -1073741670;
LABEL_80:
  SetFailureLocation(a3, 0, 34, v59, 144);
  if ( v64 )
    HvpFreeBin(v42, v44, v64);
  return v24;
}
