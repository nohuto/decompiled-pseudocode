/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x14040D00C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsOverlayEnabled@ADAPTER_RENDER@@QEBAEXZ @ 0x1400747C8 (-IsOverlayEnabled@ADAPTER_RENDER@@QEBAEXZ.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?DdiCreateAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEALLOCATION@@@Z @ 0x1402A5CE4 (-DdiCreateAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEALLOCATION@@@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1403986D4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        ADAPTER_RENDER **this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        struct DXGRESOURCE *a6,
        void **a7,
        void **a8,
        D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a10,
        int a11,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a12)
{
  bool IsCoreResourceSharedOwner; // al
  __int64 v16; // r11
  UINT NumAllocations; // ecx
  UINT v18; // esi
  struct _D3DDDI_ALLOCATIONINFO2 *v19; // r10
  __int64 v20; // rcx
  UINT PrivateDriverDataSize; // r9d
  __int64 v22; // r8
  void *v23; // rcx
  HANDLE *v24; // rdx
  int v25; // eax
  UINT v26; // eax
  void *v27; // rax
  UINT v29; // edx
  __int64 v30; // rax
  int v31; // eax
  struct DXGALLOCATION *v32; // r13
  UINT v33; // esi
  struct DXGRESOURCE *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rdx
  UINT *pPrivateDriverData; // r8
  bool v38; // zf
  __int64 v39; // r8
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // r9d
  __int64 v41; // rax
  const wchar_t *v42; // r9
  int v43; // edx
  __int64 v44; // rcx
  int v45; // r8d
  UINT v46; // edx
  UINT v47; // edx
  __int64 v48; // rax
  SIZE_T v49; // rdx
  _DWORD *v50; // roff
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // ecx
  __int64 v52; // r15
  SIZE_T Size; // rdx
  SIZE_T v54; // r8
  unsigned int NumDifferentPhysicalAdapters; // eax
  DXGADAPTER *v56; // rcx
  unsigned int v57; // r10d
  int v58; // edx
  __int64 v59; // rcx
  UINT v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  DXGADAPTER **v63; // r9
  __int64 v64; // r10
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v65; // eax
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS v69; // eax
  int v70; // r9d
  __int64 v71; // r8
  unsigned int v72; // eax
  int v73; // ecx
  UINT v74; // edx
  UINT v75; // ecx
  int v76; // ecx
  __int64 v77; // rax
  int v78; // edx
  unsigned int v79; // edx
  UINT v80; // edx
  int v81; // ecx
  __int64 v82; // rax
  UINT v83; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v84; // edx
  const wchar_t *v85; // r9
  HANDLE hResource; // rcx
  HANDLE v87; // rdx
  HANDLE v88; // rcx
  HANDLE v89; // rax
  _DXGKARG_CREATEALLOCATION v91; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v92; // [rsp+C8h] [rbp+48h]

  *((_DWORD *)&v91.Flags + 1) = 0;
  v92 = 0;
  IsCoreResourceSharedOwner = ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]);
  v16 = 0LL;
  if ( !IsCoreResourceSharedOwner )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3077;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3077LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v16 = 0LL;
  }
  NumAllocations = a2->NumAllocations;
  v18 = 0;
  if ( NumAllocations )
  {
    v19 = a3;
    do
    {
      v20 = v18;
      if ( v19[v20].pPrivateDriverData )
      {
        PrivateDriverDataSize = v19[v20].PrivateDriverDataSize;
        v22 = v18;
        a4[v22].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          a4[v22].pPrivateDriverData = v19[v20].pPrivateDriverData;
        }
        else
        {
          v23 = a7[v18];
          a4[v22].pPrivateDriverData = v23;
          memmove(v23, a8[v18], PrivateDriverDataSize);
          v19 = a3;
          v16 = 0LL;
        }
      }
      NumAllocations = a2->NumAllocations;
      ++v18;
    }
    while ( v18 < NumAllocations );
  }
  v91.Flags.Value = 0;
  if ( a6 )
  {
    v24 = (HANDLE *)*((_QWORD *)a6 + 7);
    v25 = *((_DWORD *)a6 + 1);
    v91.Flags.Value = 1;
    if ( (v25 & 1) != 0 )
      v91.hResource = v24[2];
    else
      v91.hResource = v24;
  }
  else
  {
    v91.hResource = 0LL;
  }
  v26 = a2->PrivateDriverDataSize;
  v91.NumAllocations = NumAllocations;
  v91.pAllocationInfo = a4;
  if ( v26 && a2->pStandardAllocation )
  {
    v91.PrivateDriverDataSize = v26;
    v27 = (void *)operator new[](v26, 0x4B677844u, 258LL);
    v91.pPrivateDriverData = v27;
    if ( !v27 )
    {
      v92 = -1073741801;
      WdLogSingleEntry3(3LL, this, v91.PrivateDriverDataSize, -1073741801LL);
      WdLogGlobalForLineNumber = 3148;
      goto LABEL_175;
    }
    if ( !a11 )
      pStandardAllocation = a2->pStandardAllocation;
    memmove(v27, pStandardAllocation, v91.PrivateDriverDataSize);
    v16 = 0LL;
  }
  else
  {
    v91.PrivateDriverDataSize = 0;
    v91.pPrivateDriverData = 0LL;
  }
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 && DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this[2] + 2)) )
    {
      v29 = v16;
      if ( a2->NumAllocations > (unsigned int)v16 )
      {
        do
        {
          v30 = v29++;
          v91.pAllocationInfo[v30].Flags.Value |= 0x400u;
        }
        while ( v29 < a2->NumAllocations );
        v16 = 0LL;
      }
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0
    || (v31 = ADAPTER_RENDER::DdiCreateAllocation(this[2], &v91), v16 = 0LL, v92 = v31, v31 >= 0) )
  {
    v32 = a5;
    v33 = v16;
    v34 = a6;
    while ( 1 )
    {
      if ( v33 >= a2->NumAllocations )
      {
        if ( v34 )
        {
          if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
          {
            hResource = v91.hResource;
            v87 = *(HANDLE *)(*((_QWORD *)v34 + 7) + 16LL);
            if ( v87 && v91.hResource && v91.hResource != v87 )
            {
              WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, v16, v16);
              hResource = v91.hResource;
              WdLogGlobalForLineNumber = 3633;
            }
            *(_QWORD *)(*((_QWORD *)v34 + 7) + 16LL) = hResource;
          }
          else
          {
            v88 = (HANDLE)*((_QWORD *)v34 + 7);
            v89 = v91.hResource;
            if ( v88 && v91.hResource && v88 != v91.hResource )
            {
              WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, v16, v16);
              v89 = v91.hResource;
              WdLogGlobalForLineNumber = 3648;
            }
            *((_QWORD *)v34 + 7) = v89;
          }
        }
        goto LABEL_175;
      }
      if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 64) & 1) != 0 )
        *(&a4[v33].AllocationPriority + 1) &= ~0x40u;
      if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 64) & 8) != 0 && ((_DWORD)this[61] & 8) != 0 )
      {
        v35 = v33;
        if ( !LOWORD(a4[v35].Size) )
        {
          *(&a4[v35].AllocationPriority + 1) |= 0x40u;
          a4[v35].Alignment = 0x10000;
        }
      }
      if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
      {
        v36 = v33;
        if ( a4[v36].PrivateDriverDataSize < 0x40 )
        {
          WdLogSingleEntry0(2LL);
          v41 = 3227LL;
          v42 = L"Invalid private driver data size for NoKmdAccess";
LABEL_154:
          WdLogGlobalForLineNumber = v41;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v42, v41, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_156;
        }
        if ( (a3[v33].Flags.Value & 1) != 0 )
        {
          WdLogSingleEntry0(2LL);
          v41 = 3233LL;
          v42 = L"Primary cannot be used with NoKmdAccess";
          goto LABEL_154;
        }
        *((_DWORD *)v32 + 18) |= 0x200000u;
        *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) |= 0x10000000u;
        pPrivateDriverData = (UINT *)a4[v36].pPrivateDriverData;
        v38 = (*(_WORD *)(*((_QWORD *)this[2] + 2) + 5088LL) & 1) == 0;
        a4[v36].SupportedReadSegmentSet = pPrivateDriverData[8];
        if ( v38 )
        {
          a4[v36].Alignment = *pPrivateDriverData;
        }
        else
        {
          LOWORD(a4[v36].Alignment) = *(_WORD *)pPrivateDriverData;
          HIWORD(a4[v36].Alignment) = *((_WORD *)pPrivateDriverData + 1);
        }
        a4[v36].Size = pPrivateDriverData[2];
        a4[v36].PitchAlignedSize = pPrivateDriverData[4];
        a4[v36].HintedBank.Value = pPrivateDriverData[6];
        a4[v36].PreferredSegment.Value = pPrivateDriverData[7];
        a4[v36].SupportedWriteSegmentSet = pPrivateDriverData[9];
        a4[v36].EvictionSegmentSet = pPrivateDriverData[10];
        a4[v36].MaximumRenamingListLength = pPrivateDriverData[11];
        a4[v36].Flags.Value = pPrivateDriverData[12];
        a4[v36].AllocationPriority = pPrivateDriverData[13];
        *(&a4[v36].AllocationPriority + 1) = pPrivateDriverData[14];
      }
      v39 = v33;
      *(_QWORD *)(*((_QWORD *)v32 + 6) + 16LL) = a4[v39].hAllocation;
      *(_QWORD *)(*((_QWORD *)v32 + 6) + 24LL) = a4[v39].pAllocationUsageHint;
      *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) & 0xFFFFF7FF | ((a4[v39].Flags.Value & 0x30) != 0 ? 0x800 : 0);
      *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) ^ (a4[v39].Flags.Value << 17)) & 0x80000;
      a4[v39].Flags.Value &= 0x807FFFFu;
      Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)a4[v39].Flags.Value;
      if ( *(int *)(*((_QWORD *)this[2] + 2) + 2776LL) < 12288 )
      {
        if ( (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
          *(&a4[v39].AllocationPriority + 1) = 0;
      }
      else if ( *(&a4[v39].AllocationPriority + 1) >= 0x80 )
      {
        WdLogSingleEntry0(2LL);
        v41 = 3297LL;
        v42 = L"Flags2.Reserved is not zero";
        goto LABEL_154;
      }
      v43 = (int)Value;
      v44 = *((_QWORD *)this[2] + 2);
      if ( (*(_DWORD *)(v44 + 2508) & 0x40) != 0 && *(_BYTE *)(v44 + 3077) )
      {
        v43 = *(_DWORD *)&Value | 0x8000;
        a4[v39].Flags.Value = *(_DWORD *)&Value | 0x8000;
      }
      v45 = v43;
      if ( (v43 & 0x8000) != 0 && *(_BYTE *)(*((_QWORD *)this[2] + 2) + 3078LL) )
      {
        v45 = v43 | 0x10000;
        a4[v33].Flags.Value = v43 | 0x10000;
      }
      if ( a10 )
      {
        if ( (*(_DWORD *)a10 & 0x1000) != 0 )
          a4[v33].Flags.Value = v45 | 0x20000;
        v46 = *((_DWORD *)a10 + 96);
        if ( v46 )
        {
          a4[v33].SupportedWriteSegmentSet = v46;
          a4[v33].PreferredSegment.Value = *((_DWORD *)a10 + 97);
        }
        v47 = *((_DWORD *)a10 + 98);
        if ( v47 )
          a4[v33].Alignment = v47;
        if ( (*(_DWORD *)a10 & 0x2000) != 0 )
        {
          v48 = *((_QWORD *)a5 + 12 * v33 + 6);
          *(_DWORD *)(v48 + 4) |= 0x8000u;
        }
        v49 = *((_QWORD *)a10 + 50);
        if ( v49 )
          a4[v33].Size = v49;
        if ( (*(_DWORD *)a10 & 0x8000) != 0 )
          a4[v33].Flags.Value |= 0x8000u;
        if ( *((_DWORD *)a10 + 4) == 5 )
        {
          v50 = (_DWORD *)(*((_QWORD *)a5 + 12 * v33 + 6) + 4LL);
          *v50 |= 0x10000u;
          a4[v33].Flags.Value |= 0x8000u;
        }
      }
      Flags = a2->Flags;
      if ( (*(_DWORD *)&Flags & 0x10000) != 0 )
      {
        v52 = v33;
        Size = a4[v52].Size;
        v54 = a12->ExistingHeapData.Size;
        if ( Size != v54 )
        {
          WdLogSingleEntry3(2LL, Size, v54, -1073741811LL);
          WdLogGlobalForLineNumber = 3362;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Mismatch between Driver returned allocation size:0x%I64x and ExistingSysMem                     buf"
                      "fer size:0xI64x, returning 0x%I64x",
            a4[v52].Size,
            a12->ExistingHeapData.Size,
            -1073741811LL,
            0LL,
            0LL);
LABEL_156:
          v92 = -1073741811;
          goto LABEL_175;
        }
        if ( (*(_DWORD *)&Flags & 0x20020) != 0 )
          goto LABEL_79;
      }
      if ( a10 && (*((_QWORD *)a10 + 42) || *((_QWORD *)a10 + 41)) )
LABEL_79:
        a4[v33].Flags.Value |= 1u;
      if ( *((_DWORD *)this + 116) == 2 )
      {
        NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this[2] + 2));
        if ( NumDifferentPhysicalAdapters > v57
          && !DXGADAPTER::ReplicateGdiContent(v56)
          && (a3[v33].Flags.Value & 1) == 0 )
        {
          a4[v33].MaximumRenamingListLength = *(_DWORD *)(*((_QWORD *)this[2] + 2) + 3188LL);
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this[2] + 2)) )
      {
        v59 = v33;
        v60 = v58 ^ (v58 ^ (a4[v59].MaximumRenamingListLength << 12)) & 0x3F000;
        v61 = *((_QWORD *)v32 + 6);
        *((_DWORD *)v32 + 18) = v60;
        *(_DWORD *)(v61 + 4) ^= (*(_DWORD *)(v61 + 4) ^ (a4[v59].MaximumRenamingListLength << 21)) & 0x7E00000;
      }
      else
      {
        *((_DWORD *)v32 + 18) = v58 & 0xFFFC0FFF;
      }
      if ( DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this[2] + 2)) && (*(_DWORD *)&a2->Flags & 0x80800) == 0x80000 )
      {
        WdLogSingleEntry3(2LL, this, v62, -1073741637LL);
        v85 = L"Device 0x%I64x: Driver tried to create non-cross adapter physically contiguous buffer, adapter 0x%I64x, returning 0x%I64x";
        WdLogGlobalForLineNumber = 3418;
        goto LABEL_159;
      }
      v65 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)a4[v33].Flags.Value;
      if ( (*(_WORD *)&v65 & 0x200) != 0
        && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_STOPCAPTURE *))(v62 + 688) == ADAPTER_RENDER::DefaultDdiStopCapture )
      {
        WdLogSingleEntry3(2LL, this, v62, -1073741637LL);
        v85 = L"Device 0x%I64x: Driver tried to create capture buffer but didn't supply StopCapture, adapter 0x%I64x, returning 0x%I64x";
        WdLogGlobalForLineNumber = 3434;
        goto LABEL_159;
      }
      if ( (*(_WORD *)&v65 & 0x100) != 0 && !ADAPTER_RENDER::IsOverlayEnabled(v63) )
      {
        WdLogSingleEntry3(2LL, this, v66, -1073741637LL);
        v85 = L"Device 0x%I64x: Driver tried to create overlay but didn't supply Overlay DDI, adapter 0x%I64x, returning 0x%I64x";
        WdLogGlobalForLineNumber = 3449;
LABEL_159:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)v85,
          (__int64)this,
          *((_QWORD *)this[2] + 2),
          -1073741637LL,
          0LL,
          0LL);
        v92 = -1073741637;
        goto LABEL_175;
      }
      v67 = *((_QWORD *)v32 + 6);
      if ( *(_QWORD *)(v67 + 16) == v16 && (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
      {
        WdLogSingleEntry3(2LL, this, v32, -1073741811LL);
        WdLogGlobalForLineNumber = 3460;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Driver did not return an allocation handle for 0x%I64x, returning 0x%I64x",
          (__int64)this,
          (__int64)v32,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_156;
      }
      v68 = 96LL * v33;
      if ( (*(_DWORD *)(v68 + v64 + 32) & 2) != 0 )
        *(_DWORD *)(v67 + 4) |= 0x1000u;
      if ( (*(_DWORD *)(v68 + v64 + 32) & 1) != 0 && (a4[v33].Flags.Value & 0x100) == 0 )
        break;
      v84 = a2->Flags;
      if ( (*(_BYTE *)&v84 & 2) != 0 )
      {
        a4[v33].Flags.Value |= 0x20000000u;
        v84 = a2->Flags;
      }
      if ( *((_DWORD *)this + 116) == 2
        && this[237] != *((ADAPTER_RENDER **)this[2] + 2)
        && (*((_DWORD *)this[5] + 102) & 0x100) == 0
        && a10
        && *((_QWORD *)a10 + 4) != v16
        && *((_QWORD *)a10 + 5) != v16
        && *((_DWORD *)a10 + 4) == 2
        && (*(_BYTE *)&v84 & 0x22) == 2 )
      {
        *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) |= 2u;
        *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) |= 4u;
        a4[v33].Flags.Value = a4[v33].Flags.Value & 0x3DBFFFFF | 0x2400000;
      }
LABEL_142:
      v34 = a6;
      if ( a6 && (*((_DWORD *)a6 + 1) & 8) != 0 )
        a4[v33].Flags.Value |= 0x88000u;
      if ( (*(_DWORD *)&a2->Flags & 0x1800) != 0 )
        a4[v33].Flags.Value |= 0x20100000u;
      if ( (*(_DWORD *)&a2->Flags & 0x400) != 0 )
        a4[v33].Flags.Value |= 0x200000u;
      if ( (*(_DWORD *)&a2->Flags & 0x400000) != 0 )
        *(&a4[v33].AllocationPriority + 1) |= 2u;
      v32 = (struct DXGALLOCATION *)*((_QWORD *)v32 + 8);
      ++v33;
    }
    v69 = a2->Flags;
    v70 = *(_DWORD *)(v68 + v64 + 28);
    if ( (*(_BYTE *)&v69 & 2) != 0 )
    {
      v76 = *((_DWORD *)this + 116);
      if ( v76 == 2 )
      {
        *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) |= 2u;
        v75 = a4[v33].Flags.Value | 0x40000000;
        v77 = v33;
        goto LABEL_126;
      }
      if ( (*(_WORD *)&v69 & 0x800) != 0 )
      {
        if ( (*(_WORD *)&v69 & 0x400) != 0 )
        {
          if ( v76 != 1 || (v78 = 0x2000, *(_BYTE *)(*((_QWORD *)this[2] + 2) + 2979LL) == (_BYTE)v16) )
            v78 = v16;
          *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) = v78 | *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) & 0xFFFFDFFF;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) |= 1u;
          a4[v33].Flags.Value |= 0x80000u;
        }
      }
      else if ( v76 == 1 )
      {
        if ( (*(_WORD *)&v69 & 0x400) != 0 )
        {
          if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 2979LL) != (_BYTE)v16 )
            *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) |= 0x2000u;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) |= 1u;
        }
      }
      v71 = v33;
      v79 = v16;
      if ( *((_DWORD *)this + 116) == 1 )
        v79 = 0x80000000;
      v80 = a4[v33].Flags.Value & 0x7FFFFFFF | v79;
      v81 = v16;
      a4[v33].Flags.Value = v80;
      if ( *((_DWORD *)this + 116) == (_DWORD)v16 )
        v81 = 0x40000000;
      v75 = v80 & 0xBFFFFFFF | v81 | 0x20000000;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) |= 1u;
      v71 = v33;
      v72 = v16;
      if ( *((_DWORD *)this + 116) == 1 )
        v72 = 0x80000000;
      v73 = v16;
      v74 = v72 | a4[v33].Flags.Value & 0x7FFFFFFF;
      a4[v33].Flags.Value = v74;
      if ( *((_DWORD *)this + 116) == (_DWORD)v16 )
        v73 = 0x40000000;
      v75 = v74 & 0xBFFFFFFF | v73;
    }
    v77 = v71;
LABEL_126:
    a4[v77].Flags.Value = v75;
    if ( (*((_DWORD *)this[5] + 102) & 0x100) == 0 && this[237] != *((ADAPTER_RENDER **)this[2] + 2) )
    {
      *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) |= 4u;
      v82 = v33;
      v83 = a4[v82].Flags.Value & 0x3DFFFFFF | 0x2000000;
      a4[v82].Flags.Value = v83;
      if ( (*(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) & 2) != 0 )
        a4[v33].Flags.Value = v83 | 0x20400000;
    }
    *(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) ^= ((unsigned __int16)*(_DWORD *)(*((_QWORD *)v32 + 6) + 4LL) ^ (unsigned __int16)((_WORD)v70 << 6)) & 0x3C0;
    goto LABEL_142;
  }
LABEL_175:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v91.pPrivateDriverData);
  return v92;
}
