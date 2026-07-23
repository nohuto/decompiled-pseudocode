/*
 * XREFs of HvpAddBin @ 0x140B87980
 * Callers:
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvpDoAllocateCell @ 0x1408E20F0 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     HvpGrowDirtyVectors @ 0x14048CC48 (HvpGrowDirtyVectors.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpViewMapShrinkStorage @ 0x140862EC8 (HvpViewMapShrinkStorage.c)
 *     HvpShrinkMap @ 0x140866938 (HvpShrinkMap.c)
 *     HvpFreeBin @ 0x1408BDE7C (HvpFreeBin.c)
 *     HvpViewMapExtendStorage @ 0x1408BED58 (HvpViewMapExtendStorage.c)
 *     HvpSetRangeProtection @ 0x1408BF43C (HvpSetRangeProtection.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1408BF948 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpProtectBinPartial @ 0x1408BFB2C (HvpProtectBinPartial.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408E37B4 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpPointMapEntriesToBuffer @ 0x1408E3AD0 (HvpPointMapEntriesToBuffer.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140A88570 (HvpAdjustHiveFreeDisplay.c)
 *     HvpAllocateBin @ 0x140A8F15C (HvpAllocateBin.c)
 *     CmpClaimGlobalQuota @ 0x140A8F33C (CmpClaimGlobalQuota.c)
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     HvpExpandMap @ 0x140ABBACC (HvpExpandMap.c)
 *     CmpCanGrowHive @ 0x140ADE2DC (CmpCanGrowHive.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140AFCC90 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, signed int a3, int *a4)
{
  unsigned int v5; // edi
  char v7; // r12
  __int64 *v8; // rdx
  ULONG_PTR v9; // r15
  __int64 i; // rbx
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  unsigned int v13; // r13d
  int Bin; // esi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rbx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rax
  signed int v25; // edi
  unsigned int v26; // r10d
  int j; // esi
  unsigned int v28; // edi
  unsigned int v29; // r10d
  __int64 CellMap; // r11
  __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rcx
  signed __int64 v34; // rcx
  int v35; // eax
  int v36; // ebx
  ULONG v37; // eax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // r8
  _DWORD *v41; // rsi
  __int64 v42; // rax
  _DWORD *v43; // rbx
  __int64 v44; // r8
  int v45; // ecx
  void *v46; // rdx
  signed int v47; // ebx
  __int64 *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v52; // [rsp+30h] [rbp-38h]
  unsigned int v53; // [rsp+34h] [rbp-34h]
  unsigned int Size; // [rsp+38h] [rbp-30h]
  void *v55; // [rsp+40h] [rbp-28h] BYREF
  void *v56; // [rsp+48h] [rbp-20h] BYREF
  __int64 v57; // [rsp+50h] [rbp-18h]
  __int64 v58; // [rsp+58h] [rbp-10h]
  char v59; // [rsp+B0h] [rbp+48h]
  char v60; // [rsp+B8h] [rbp+50h]

  v5 = (a2 + 4127) & 0xFFFFF000;
  Size = 0;
  v59 = 0;
  v7 = 0;
  v55 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  v53 = 0;
  v60 = 0;
  if ( v5 <= 0x3000 && v5 - (unsigned __int64)a2 - 32 < 0xE00 )
    v5 += 4096;
  v8 = (__int64 *)(632LL * a3 + BugCheckParameter2 + 888);
  v58 = 632LL * a3;
  v9 = v58 + BugCheckParameter2;
  for ( i = *v8; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == v8 )
      goto LABEL_9;
    v11 = *(_DWORD *)(i + 16);
    if ( v11 >= v5 && v11 + *(_DWORD *)(i + 20) <= *(_DWORD *)(v9 + 280) )
      break;
  }
  if ( i )
  {
    v23 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) == i )
    {
      v24 = *(__int64 **)(i + 8);
      if ( *v24 == i )
      {
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        v25 = a3 << 31;
        Bin = HvpMarkDirty(BugCheckParameter2, (a3 << 31) + *(_DWORD *)(i + 20), *(_DWORD *)(i + 16), 0);
        if ( Bin >= 0 )
        {
          v26 = 0;
          for ( j = v25 + *(_DWORD *)(i + 20); v26 < v11; *(_DWORD *)(CellMap + 20) &= ~2u )
          {
            v28 = v26 + j;
            CellMap = HvpGetCellMap(BugCheckParameter2, v26 + j);
            if ( !CellMap )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v28, 0x394uLL);
            v31 = v29;
            v26 = v29 + 4096;
            *(_QWORD *)CellMap = v31;
          }
          guard_dispatch_icall_no_overrides(i, 24LL);
          *a4 = j;
          return 0;
        }
        v32 = (__int64 *)(BugCheckParameter2 + 632LL * a3 + 888);
        v33 = *v32;
        if ( *(__int64 **)(*v32 + 8) == v32 )
        {
          *(_QWORD *)i = v33;
          *(_QWORD *)(i + 8) = v32;
          *(_QWORD *)(v33 + 8) = i;
          *v32 = i;
          return (unsigned int)Bin;
        }
      }
    }
LABEL_89:
    __fastfail(3u);
  }
LABEL_9:
  v12 = *(_DWORD *)(v9 + 280);
  v52 = v12;
  v13 = v12 + v5;
  if ( !a3 && v5 <= 0x40000 && (((v12 + 4096) ^ (v13 + 4095)) & 0xFFFC0000) != 0 )
  {
    v52 = ((v12 + 266239) & 0xFFFC0000) - 4096;
    v13 = v52 + v5;
    Size = v52 - v12;
  }
  if ( v13 < v12 || !CmpCanGrowHive((struct _KTHREAD *)BugCheckParameter2, v13) )
    return (unsigned int)-1073741670;
  Bin = HvpExpandMap(BugCheckParameter2, a3, v12, v13);
  if ( Bin >= 0 )
  {
    v15 = a3;
    *(_DWORD *)(v58 + BugCheckParameter2 + 280) = v13;
    Bin = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v13, a3);
    if ( Bin < 0 )
    {
LABEL_53:
      HvpShrinkMap(BugCheckParameter2, v15, v13, v12);
      *(_DWORD *)(632LL * v15 + BugCheckParameter2 + 280) = v12;
      if ( v59 )
      {
        *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
        *(_DWORD *)(BugCheckParameter2 + 88) = v12 >> 9;
        v36 = *(_DWORD *)(BugCheckParameter2 + 104);
        v37 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
        *(_DWORD *)(BugCheckParameter2 + 104) = v37;
        _InterlockedAdd(&CmpDirtySectorCount, v37 - v36);
        v38 = *(_QWORD *)(BugCheckParameter2 + 120);
        *(_DWORD *)(BugCheckParameter2 + 112) = v12 >> 9;
        *(_QWORD *)(BugCheckParameter2 + 120) = v38;
        *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      }
      if ( v60 )
        HvpViewMapShrinkStorage(BugCheckParameter2 + 224, v12);
      if ( v55 && !v7 )
        HvpFreeBin(BugCheckParameter2, v52 - v12, (unsigned __int64)v55);
      if ( v57 )
        guard_dispatch_icall_no_overrides(v57, 24LL);
      if ( v56 && !v7 )
        HvpFreeBin(BugCheckParameter2, v13 - v52, (unsigned __int64)v56);
      if ( v53 )
        CmpReleaseGlobalQuota(v53);
      return (unsigned int)Bin;
    }
    if ( !a3 )
    {
      v19 = (_DWORD *)(BugCheckParameter2 + 160);
      v20 = *(_DWORD *)(BugCheckParameter2 + 160);
      v58 = BugCheckParameter2 + 160;
      if ( (v20 & 1) == 0 )
      {
        Bin = HvpGrowDirtyVectors(BugCheckParameter2, v13);
        if ( Bin < 0 )
          goto LABEL_52;
        v59 = 1;
        v58 = BugCheckParameter2 + 160;
      }
      if ( (*v19 & 0x8001) == 0 )
      {
        Bin = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v13 + 4096, 1);
        if ( Bin < 0 )
          goto LABEL_52;
        if ( (*(_DWORD *)(BugCheckParameter2 + 4120) & 0x800) != 0 )
        {
          v19 = (_DWORD *)v58;
          if ( !*(_DWORD *)(BugCheckParameter2 + 4236) )
            *(_DWORD *)(BugCheckParameter2 + 4236) = v12;
        }
      }
      if ( (*v19 & 0x20000) != 0 )
      {
        v17 = BugCheckParameter2 + 224;
        v21 = *(_DWORD *)(BugCheckParameter2 + 256);
        if ( (v21 & 1) != 0 )
        {
          v22 = *(_QWORD *)(BugCheckParameter2 + 240);
        }
        else if ( (v21 & 8) != 0 )
        {
          v22 = *(_QWORD *)(BugCheckParameter2 + 232);
        }
        else
        {
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v34 = v22 & 0xFFFFFFFFFFFFF000uLL;
        v35 = 2147479552;
        if ( v34 < 2147479552 )
          v35 = v34;
        if ( v13 <= v35 - 4096 )
        {
          Bin = HvpViewMapExtendStorage(BugCheckParameter2 + 224, v13);
          if ( Bin >= 0 )
          {
            v7 = 1;
            goto LABEL_48;
          }
LABEL_52:
          v15 = a3;
          HvpAdjustHiveFreeDisplay(BugCheckParameter2, v12, a3);
          goto LABEL_53;
        }
      }
    }
LABEL_48:
    if ( Size )
    {
      if ( v7 )
      {
        if ( !CmpClaimGlobalQuota(Size, v16, v17, v18) )
        {
LABEL_51:
          Bin = -1073741670;
          v60 = v7;
          goto LABEL_52;
        }
        v53 = Size;
        v60 = v7;
        Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v12, Size, &v55);
        if ( Bin < 0 )
          goto LABEL_52;
        v39 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v12, Size);
        v60 = v7;
      }
      else
      {
        v60 = 0;
        Bin = HvpAllocateBin(BugCheckParameter2, Size, a3, 808602947LL, (__int64 *)&v55);
        if ( Bin < 0 )
          goto LABEL_52;
        v39 = HvpProtectBinPartial(BugCheckParameter2, (unsigned __int64)v55, v40, 0, Size, 1);
        v60 = 0;
      }
      Bin = v39;
      if ( v39 < 0 )
        goto LABEL_52;
      v41 = v55;
      memset_0(v55, 0, Size);
      *v41 = 1852400232;
      v41[2] = Size;
      v41[1] = v12 & 0x7FFFFFFF;
      v41[7] = 0;
      v41[8] = Size - 32;
      v42 = guard_dispatch_icall_no_overrides(24LL, 0LL);
      v57 = v42;
      if ( !v42 )
        goto LABEL_51;
      *(_DWORD *)(v42 + 16) = Size;
      *(_DWORD *)(v42 + 20) = v12;
    }
    if ( v7 )
    {
      if ( !CmpClaimGlobalQuota(v5, v16, v17, v18) )
        goto LABEL_51;
      v53 += v5;
      v60 = v7;
      Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v52, v5, &v56);
      if ( Bin < 0 )
        goto LABEL_52;
      v60 = v7;
      Bin = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v52, v5);
      if ( Bin < 0 )
        goto LABEL_52;
      v43 = v56;
    }
    else
    {
      v60 = 0;
      Bin = HvpAllocateBin(BugCheckParameter2, v5, a3, 909200707LL, (__int64 *)&v56);
      if ( Bin < 0 )
        goto LABEL_52;
      v43 = v56;
      v60 = 0;
      Bin = HvpProtectBinPartial(BugCheckParameter2, (unsigned __int64)v56, v44, 0, v5, 1);
      if ( Bin < 0 )
        goto LABEL_52;
    }
    memset_0(v43, 0, v5);
    v45 = v52;
    v46 = v55;
    v43[1] = v52 & 0x7FFFFFFF;
    v43[8] = v5 - 32;
    *v43 = 1852400232;
    v43[2] = v5;
    v43[7] = 0;
    v47 = a3 << 31;
    if ( v46 )
    {
      HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v46, v52 - v12, v47 + v12, v7 ^ 1, v57);
      v48 = (__int64 *)(BugCheckParameter2 + 632LL * a3 + 888);
      v49 = *v48;
      if ( *(__int64 **)(*v48 + 8) != v48 )
        goto LABEL_89;
      v50 = v57;
      *(_QWORD *)v57 = v49;
      *(_QWORD *)(v50 + 8) = v48;
      *(_QWORD *)(v49 + 8) = v50;
      v45 = v52;
      *v48 = v50;
    }
    v52 = v47 + v45;
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v56, v5, v47 + v45, v7 ^ 1, 0LL);
    if ( !a3 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) == 0 )
      {
        v60 = v7;
        Bin = HvpMarkDirty(BugCheckParameter2, v12, v13 - v12, 0);
        if ( Bin < 0 )
          goto LABEL_52;
      }
      CmpUpdateSystemHiveHysteresis((struct _KTHREAD *)BugCheckParameter2, v13, v12);
      HvpSetRangeProtection(BugCheckParameter2, v12, v13 - v12, 4);
    }
    *a4 = v52;
    return 0;
  }
  return (unsigned int)Bin;
}
