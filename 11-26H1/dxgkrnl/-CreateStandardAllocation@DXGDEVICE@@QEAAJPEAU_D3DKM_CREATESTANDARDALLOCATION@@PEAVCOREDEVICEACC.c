/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1401A1558 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035450C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403971F0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?CreateStandardAllocCallout@@YAXPEAX@Z @ 0x140397610 (-CreateStandardAllocCallout@@YAXPEAX@Z.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403BB70C (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403CDBFC (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140423030 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1403983A0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1403986D4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     GetPixelSizeInBytes @ 0x140398A6C (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        struct COREDEVICEACCESS *a3)
{
  __int64 v5; // rcx
  UINT v6; // r12d
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // r14
  unsigned int NumDifferentPhysicalAdapters; // r15d
  D3DDDI_ALLOCATIONINFO *Pool2; // r13
  ADAPTER_RENDER *v11; // rcx
  D3DKMDT_STANDARDALLOCATION_TYPE v12; // eax
  int StandardAllocationDriverData; // eax
  __int64 v14; // r15
  unsigned __int64 AllocationPrivateDriverDataSize; // rcx
  void *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int *v19; // r12
  int PixelSizeInBytes; // eax
  __int64 v21; // rcx
  unsigned int v22; // ecx
  UINT v23; // r12d
  char v24; // dl
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // edx
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edx
  bool v34; // zf
  int v35; // ecx
  __int64 v36; // rax
  void **p_pPrivateDriverData; // r13
  __int64 v38; // rbx
  __int64 v40; // rax
  const wchar_t *v41; // r9
  int v42; // edx
  __int64 v43; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // edx
  struct DXGRESOURCE *v48; // rbx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rcx
  UINT v52; // [rsp+80h] [rbp-80h]
  char v53; // [rsp+84h] [rbp-7Ch]
  UINT v54; // [rsp+88h] [rbp-78h]
  unsigned int v55; // [rsp+8Ch] [rbp-74h]
  struct COREDEVICEACCESS *v56; // [rsp+90h] [rbp-70h] BYREF
  struct _EX_RUNDOWN_REF *v57; // [rsp+98h] [rbp-68h] BYREF
  void *v58; // [rsp+A0h] [rbp-60h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v59; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-28h]
  __int64 v61; // [rsp+E0h] [rbp-20h]
  struct _D3DKMT_CREATEALLOCATION v62; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v63[32]; // [rsp+140h] [rbp+40h] BYREF
  PVOID P; // [rsp+160h] [rbp+60h]
  _BYTE v65[384]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v66; // [rsp+2E8h] [rbp+1E8h]

  v56 = a3;
  memset(&v62, 0, sizeof(v62));
  v5 = *((_QWORD *)this + 2);
  v6 = 0;
  v7 = 0LL;
  v58 = 0LL;
  v57 = 0LL;
  v55 = 0;
  v8 = *(_QWORD *)(v5 + 16);
  NumDifferentPhysicalAdapters = 1;
  v54 = 1;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    if ( *(_BYTE *)(v8 + 3063) || DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v8) )
    {
LABEL_99:
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v8);
      v54 = NumDifferentPhysicalAdapters;
      goto LABEL_3;
    }
    v5 = *((_QWORD *)this + 2);
  }
  if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v5 + 16)) && *((_DWORD *)a2 + 4) == 4 )
  {
    v49 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( v49 != 1 && (unsigned int)(v49 - 3) > 1 )
      goto LABEL_4;
    goto LABEL_99;
  }
LABEL_3:
  if ( *((_DWORD *)a2 + 4) == 1 && !*(_QWORD *)(v8 + 3160) )
    *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL) = 0;
LABEL_4:
  P = 0LL;
  Pool2 = 0LL;
  v66 = 0;
  if ( NumDifferentPhysicalAdapters > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumDifferentPhysicalAdapters < 0x60 )
      goto LABEL_8;
    Pool2 = (D3DDDI_ALLOCATIONINFO *)ExAllocatePool2(256LL, 96LL * NumDifferentPhysicalAdapters, 1265072196LL);
    P = Pool2;
  }
  else
  {
    Pool2 = (D3DDDI_ALLOCATIONINFO *)v65;
    P = v65;
    if ( NumDifferentPhysicalAdapters )
    {
      memset(v65, 0, 96LL * NumDifferentPhysicalAdapters);
      Pool2 = (D3DDDI_ALLOCATIONINFO *)P;
    }
  }
  v66 = NumDifferentPhysicalAdapters;
LABEL_8:
  v11 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v53 = *(_BYTE *)(*((_QWORD *)v11 + 2) + 209LL);
  v12 = *((_DWORD *)a2 + 4);
  memset(&v59, 0, sizeof(v59));
  v59.StandardAllocationType = v12;
  v59.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v11, &v59);
  v14 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
    WdLogGlobalForLineNumber = 7574;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
      (__int64)this,
      v14,
      0LL,
      0LL,
      0LL);
    goto LABEL_57;
  }
  AllocationPrivateDriverDataSize = v59.AllocationPrivateDriverDataSize;
  if ( !v59.AllocationPrivateDriverDataSize && !v59.ResourcePrivateDriverDataSize )
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 7582;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData"
                " buffer, returning 0x%I64x",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_90:
    if ( P != v65 && P )
      ExFreePoolWithTag(P, 0);
    LODWORD(v14) = -1073741811;
    goto LABEL_58;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 90) != v59.ResourcePrivateDriverDataSize )
    {
      WdLogSingleEntry3(2LL, this, -1073741811LL, 1LL);
      WdLogGlobalForLineNumber = 7596;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Input ResourcePrivateDriverDataSize does not match the driver's ResourcePrivateDriverDa"
                  "taSize, returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        1LL,
        0LL,
        0LL);
      goto LABEL_90;
    }
    if ( *((_DWORD *)a2 + 94) != v59.AllocationPrivateDriverDataSize )
    {
      WdLogSingleEntry3(2LL, this, -1073741811LL, 2LL);
      WdLogGlobalForLineNumber = 7603;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Input TotalPrivateDriverDataBufferSize does not match the driver's AllocationPrivateDri"
                  "verDataSize, returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        2LL,
        0LL,
        0LL);
      goto LABEL_90;
    }
  }
  if ( v59.ResourcePrivateDriverDataSize )
  {
    v58 = (void *)operator new[](v59.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL);
    if ( !v58 )
    {
      LODWORD(v14) = -1073741801;
      WdLogSingleEntry3(3LL, this, v59.ResourcePrivateDriverDataSize, -1073741801LL);
      WdLogGlobalForLineNumber = 7617;
      goto LABEL_56;
    }
    AllocationPrivateDriverDataSize = v59.AllocationPrivateDriverDataSize;
  }
  while ( 1 )
  {
    v52 = v6;
    if ( v6 >= v54 )
      break;
    v16 = 0LL;
    if ( (_DWORD)AllocationPrivateDriverDataSize )
    {
      v16 = (void *)operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, 256LL);
      if ( !v16 )
      {
        LODWORD(v14) = -1073741801;
        WdLogSingleEntry3(3LL, this, v59.AllocationPrivateDriverDataSize, -1073741801LL);
        WdLogGlobalForLineNumber = 7635;
        goto LABEL_53;
      }
      ++v55;
    }
    v17 = 96LL * v6;
    *(void **)((char *)&Pool2->pPrivateDriverData + v17) = v16;
    *(UINT *)((char *)&Pool2->PrivateDriverDataSize + v17) = v59.AllocationPrivateDriverDataSize;
    v59.pAllocationPrivateDriverData = v16;
    v59.pResourcePrivateDriverData = v58;
    if ( v54 > 1 )
      v59.PhysicalAdapterIndex = v6;
    else
      v59.PhysicalAdapterIndex = *((_DWORD *)a2 + 95);
    v18 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*((ADAPTER_RENDER **)this + 2), &v59);
    v14 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry3(1LL, this, v18, 0LL);
      WdLogGlobalForLineNumber = 7656;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Device 0x%I64x: Driver fialed to generate pPrivateDriverData buffer, returning 0x%I64x",
        (__int64)this,
        v14,
        0LL,
        0LL,
        0LL);
      goto LABEL_53;
    }
    if ( (*(_DWORD *)a2 & 0x60) != 0 )
    {
      v19 = (unsigned int *)*((_QWORD *)a2 + 3);
      if ( v19[2] )
      {
        PixelSizeInBytes = GetPixelSizeInBytes();
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 444LL) & 8) == 0 )
        {
          if ( PixelSizeInBytes )
          {
            v21 = v19[5];
            if ( (_DWORD)v21 )
            {
              if ( (_DWORD)v21 != ((PixelSizeInBytes * *v19 + 127) & 0xFFFFFF80) )
              {
                LODWORD(v14) = -1073741811;
                WdLogSingleEntry4(2LL, this, v21, *v19, -1073741811LL);
                v50 = *v19;
                v51 = v19[5];
                WdLogGlobalForLineNumber = 7682;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Device 0x%I64x: Driver returned invalid pitch (0x%I64x) for the cross adapter allocation widt"
                            "h (0x%I64x), returning 0x%I64x",
                  (__int64)this,
                  v51,
                  v50,
                  -1073741811LL,
                  0LL);
                goto LABEL_53;
              }
            }
          }
        }
      }
      v6 = v52;
    }
    if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7692;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pCreateStandardAllocation->Flags.OpenCrossAdapter || !pCreateStandardAllocation->Flags.Primary",
        7692LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)a2 + 4) == 1 )
    {
      *(&Pool2->VidPnSourceId + 24 * v6) = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
      *(&Pool2->Flags.Value + 24 * v6) |= 1u;
    }
    AllocationPrivateDriverDataSize = v59.AllocationPrivateDriverDataSize;
    ++v6;
  }
  v22 = *(_DWORD *)a2;
  v23 = 0;
  v24 = *(_DWORD *)a2;
  v62.hDevice = *((_DWORD *)a2 + 1);
  v62.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)v58;
  v62.PrivateDriverDataSize = v59.ResourcePrivateDriverDataSize;
  v62.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
  v62.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
  *(_QWORD *)&v62.hResource = 0LL;
  v62.NumAllocations = v54;
  v62.pAllocationInfo = Pool2;
  v62.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v62.Flags & 0xFFFFA094 | (v22 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v22 & 1 | (2 * (v22 & 2 | (2 * (v22 & 0x804 | (4 * (v22 & 0x18 | (2 * (v24 & 0x60)))))))))));
  v25 = DXGDEVICE::CreateAllocation(this, &v62, 0, 0, 0LL, a2, v56, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LODWORD(v14) = v25;
  if ( v25 < 0 )
  {
    WdLogSingleEntry3(3LL, this, v25, 1LL);
    WdLogGlobalForLineNumber = 7735;
    goto LABEL_53;
  }
  while ( v23 < v54 )
  {
    v60 = *((_QWORD *)this + 5);
    v26 = *(&Pool2->hAllocation + 24 * v23);
    v61 = v60 + 248;
    LODWORD(v57) = v26;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v60 + 248));
    v27 = ((unsigned int)v57 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *(_DWORD *)(v60 + 296) )
    {
      v28 = *(_QWORD *)(v60 + 280);
      v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
      if ( (((unsigned int)v57 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
        && (v29 & 0x2000) == 0
        && (v29 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v28 + 16 * (((unsigned __int64)(unsigned int)v57 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v30 = *(struct _EX_RUNDOWN_REF **)(v28 + 16 * (((unsigned __int64)(unsigned int)v57 >> 6) & 0xFFFFFF));
          goto LABEL_39;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v30 = 0LL;
LABEL_39:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v56, v30);
    v31 = v61;
    _InterlockedDecrement((volatile signed __int32 *)(v61 + 16));
    ExReleasePushLockSharedEx(v31, 0LL);
    KeLeaveCriticalRegion();
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    v7 = (struct _EX_RUNDOWN_REF *)v56;
    v57 = (struct _EX_RUNDOWN_REF *)v56;
    v56 = 0LL;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v56);
    v32 = 96LL * v23;
    if ( !v7 )
    {
      LODWORD(v14) = -1073741811;
      WdLogSingleEntry3(1LL, this, *(unsigned int *)((char *)&Pool2->hAllocation + v32), -1073741811LL);
      WdLogGlobalForLineNumber = 7749;
      v41 = L"Device 0x%I64x: created standard allocation but the allocation handle (0x%I64x) lookup failed!, returning 0x%I64x";
      v42 = 262146;
      v40 = *(&Pool2->hAllocation + 24 * v23);
LABEL_73:
      DxgkLogInternalTriageEvent(0LL, v42, -1, (__int64)v41, (__int64)this, v40, -1073741811LL, 0LL, 0LL);
      if ( !v62.hResource )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7817;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"CreateAlloc.hResource != NULL",
          7817LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      Current = DXGPROCESS::GetCurrent(v43);
      if ( !Current )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7825;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 7825LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v63, Current);
      v45 = (v62.hResource >> 6) & 0xFFFFFF;
      if ( (unsigned int)v45 < *((_DWORD *)Current + 74)
        && (v46 = *((_QWORD *)Current + 35),
            v47 = *(_DWORD *)(v46 + 16 * v45 + 8),
            ((v62.hResource >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60))
        && (v47 & 0x2000) == 0
        && (v47 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v46 + 16 * (((unsigned __int64)v62.hResource >> 6) & 0xFFFFFF) + 8) & 0x1F) != 4 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_83;
        }
        v48 = *(struct DXGRESOURCE **)(v46 + 16 * (((unsigned __int64)v62.hResource >> 6) & 0xFFFFFF));
        if ( v48 )
        {
          *(_DWORD *)(v46 + 16 * (((unsigned __int64)v62.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
LABEL_85:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63);
          if ( v48 )
            DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v48, 0LL, DXGDEVICE::DestroyFlagsDefault);
          goto LABEL_53;
        }
      }
      else
      {
LABEL_83:
        v48 = 0LL;
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7831;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 7831LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_85;
    }
    *((_DWORD *)a2 + v23 + 13) = *(D3DKMT_HANDLE *)((char *)&Pool2->hAllocation + v32);
    if ( !v53
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                    + 168LL))(*(_QWORD *)(v7[6].Count + 8)) )
    {
      v33 = *((_DWORD *)a2 + 4);
      if ( v33 == 4 )
      {
        if ( *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) != 2 )
          goto LABEL_46;
      }
      else if ( v33 == 5 )
      {
        goto LABEL_46;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2508LL) & 0x200) == 0 || v33 != 1 )
      {
        LODWORD(v14) = -1073741811;
        WdLogSingleEntry3(2LL, this, *((int *)a2 + 4), -1073741811LL);
        v40 = *((int *)a2 + 4);
        v41 = L"Device 0x%I64x: Driver did not create CPUVisible allocation for standard allocation type 0x%I64x, returning 0x%I64x";
        WdLogGlobalForLineNumber = 7775;
        v42 = 0x40000;
        goto LABEL_73;
      }
    }
LABEL_46:
    ++v23;
  }
  v34 = *((_DWORD *)a2 + 4) == 4;
  *((_DWORD *)a2 + 2) = v62.hResource;
  *((_DWORD *)a2 + 3) = v62.hGlobalShare;
  if ( v34 && ((v35 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL), v35 == 6) || v35 == 8) )
    v36 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 640LL))(v7[3].Count);
  else
    v36 = 0LL;
  *((_QWORD *)a2 + 41) = v36;
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    memmove(*((void **)a2 + 46), Pool2->pPrivateDriverData, *((unsigned int *)a2 + 94));
    memmove(*((void **)a2 + 44), v59.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
  }
LABEL_53:
  if ( v55 )
  {
    p_pPrivateDriverData = &Pool2->pPrivateDriverData;
    v38 = v55;
    do
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*p_pPrivateDriverData);
      p_pPrivateDriverData += 12;
      --v38;
    }
    while ( v38 );
  }
LABEL_56:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v58);
LABEL_57:
  if ( P != v65 && P )
    ExFreePoolWithTag(P, 0);
LABEL_58:
  P = 0LL;
  v66 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v57);
  return (unsigned int)v14;
}
