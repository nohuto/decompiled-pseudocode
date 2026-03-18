/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1401A1558
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1401A2764 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D3CBC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x14003118C (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1403A9ED8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403EC5CC (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403EC920 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v6; // rdi
  const struct _D3DKMT_DISPLAYMODE *v8; // r15
  PERESOURCE *v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  ADAPTER_RENDER *v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // r8
  UINT Width; // ecx
  UINT Height; // edx
  D3DDDI_ROTATION DisplayOrientation; // eax
  int v26; // eax
  int StandardAllocation; // eax
  unsigned int v28; // esi
  unsigned int NumDifferentPhysicalAdapters; // eax
  struct DXGPROCESS *v30; // rsi
  _DWORD *v31; // r15
  __int64 v32; // r13
  volatile signed __int32 *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // edx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rcx
  void *v41; // rax
  ADAPTER_RENDER *v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rax
  D3DDDI_ROTATION v46; // eax
  UINT v47; // ecx
  UINT v48; // edx
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // edx
  struct DXGPROCESS *v54; // rsi
  volatile signed __int32 *v55; // r14
  unsigned int v56; // r13d
  __int64 v57; // rax
  __int64 v58; // rsi
  int v59; // edx
  __int64 v60; // rsi
  int v61; // esi
  __int64 v62; // rax
  int v63; // edx
  struct COREDEVICEACCESS *v64; // [rsp+20h] [rbp-E0h]
  char v65; // [rsp+50h] [rbp-B0h]
  char v66; // [rsp+51h] [rbp-AFh]
  char v67; // [rsp+52h] [rbp-AEh]
  int v68; // [rsp+54h] [rbp-ACh]
  __int128 v69; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v70; // [rsp+68h] [rbp-98h]
  unsigned int v71; // [rsp+70h] [rbp-90h]
  struct DXGPROCESS *v72; // [rsp+78h] [rbp-88h]
  __int64 v73; // [rsp+80h] [rbp-80h]
  struct COREDEVICEACCESS *v74; // [rsp+88h] [rbp-78h]
  _DXGKARG_DESCRIBEALLOCATION v75; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v76[54]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v77; // [rsp+270h] [rbp+170h] BYREF
  _DWORD v78[3]; // [rsp+280h] [rbp+180h] BYREF
  D3DDDI_RATIONAL RefreshRate; // [rsp+28Ch] [rbp+18Ch]
  int v80; // [rsp+294h] [rbp+194h]

  v6 = a3;
  v71 = a3;
  v74 = a5;
  memset(v76, 0, 424);
  *(_QWORD *)&v77 = a4;
  v8 = a4;
  v69 = 0LL;
  v9 = (PERESOURCE *)*((_QWORD *)this + 2);
  memset(&v75, 0, sizeof(v75));
  v68 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v9)
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 835;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsCoreResourceExclusiveOwner() && pCddDevice->GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      835LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v11 = *((_QWORD *)this + 16);
  v12 = 4024 * v6;
  v72 = Current;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(4024 * v6 + v11)) )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741811LL);
    v64 = (struct COREDEVICEACCESS *)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 847;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current adapter 0x%I64x is no owned by current session, returning 0x%I64x.",
      (__int64)v64,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( *((_QWORD *)DXGPROCESS::GetCurrent() + 7) != *(_QWORD *)(**(_QWORD **)(v12 + *((_QWORD *)this + 16) + 24)
                                                              + 18656LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 855;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGPROCESS::GetCurrent()->GetEProcess() == m_pDisplaySource[VidPnSourceId].m_SessionAdapterOwner->GetOwne"
                "dSession().GetEProcessCSRSS()",
      855LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = *((_QWORD *)this + 16);
  if ( !*(_QWORD *)(v12 + v14 + 88) )
    goto LABEL_25;
  if ( !*(_QWORD *)(v12 + v14 + 600) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 862;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pDisplaySource[VidPnSourceId].m_pCddShadowAllocation != NULL",
      862LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v12 + *((_QWORD *)this + 16) + 88) + 48LL);
  if ( (*(_DWORD *)(v15 + 4) & 0x10) != 0 )
  {
LABEL_20:
    v18 = ADAPTER_DISPLAY::DestroyCddAllocations(this, a2, v6);
    v19 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry3(2LL, a2, v6, v18);
      WdLogGlobalForLineNumber = 910;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to destroy the existing CDD allocations on DXGDEVICE 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v6,
        v19,
        0LL,
        0LL);
      return (unsigned int)v19;
    }
    v20 = *((_QWORD *)this + 16);
    if ( *(_QWORD *)(v12 + v20 + 88) || *(_QWORD *)(v12 + v20 + 600) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 915;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(m_pDisplaySource[VidPnSourceId].m_pCddPrimaryAllocation[0] == NULL) && (m_pDisplaySource[VidPnSourceId"
                  "].m_pCddShadowAllocation == NULL)",
        915LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_25:
    v21 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *((_QWORD *)a2 + 237) == v21 || (*((_BYTE *)a2 + 1917) & 1) != 0 )
    {
      v65 = 1;
      v22 = 0;
    }
    else
    {
      v65 = 0;
      if ( (*(_DWORD *)(v21 + 444) & 0x10) == 0 )
      {
        v67 = 1;
        v65 = 0;
        v66 = 0;
        goto LABEL_59;
      }
      v22 = 1;
    }
    Width = v8->Width;
    Height = v8->Height;
    RefreshRate = v8->RefreshRate;
    v76[3] = v78;
    v66 = v22;
    v67 = 0;
    v80 = v6;
    v78[0] = Width;
    v78[1] = Height;
    v78[2] = 21;
    v76[1] = 0LL;
    v76[0] = 2049LL;
    LODWORD(v76[2]) = 1;
    if ( v22 )
    {
      if ( !*((_BYTE *)this + 289)
        && ((DisplayOrientation = v8->DisplayOrientation, DisplayOrientation == D3DDDI_ROTATION_90)
         || DisplayOrientation == D3DDDI_ROTATION_270) )
      {
        v26 = 4 * Height;
        DWORD1(v69) = 4 * Height * Width;
      }
      else
      {
        v26 = 4 * Width;
        DWORD1(v69) = 4 * Width * Height;
      }
      v68 = v26;
      v76[5] = &v69;
      v76[4] = DxgkCreateDoDPrimarySection;
    }
    StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v76, v74);
    v28 = StandardAllocation;
    if ( StandardAllocation < 0 )
    {
      WdLogSingleEntry5(3LL, v8->Width, v8->Height, a2, v6, StandardAllocation);
      WdLogGlobalForLineNumber = 990;
      return v28;
    }
    if ( !LODWORD(v76[1]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 999;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NULL != CreateStandardAlloc.hResource",
        999LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !HIDWORD(v76[1]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1001;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"0 != CreateStandardAlloc.hGlobalShare",
        1001LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
    if ( NumDifferentPhysicalAdapters )
    {
      v30 = v72;
      v31 = (_DWORD *)&v76[6] + 1;
      v70 = (struct DXGPROCESS *)((char *)v72 + 248);
      v32 = 4024 * v6 + 88;
      v33 = (volatile signed __int32 *)((char *)v72 + 248);
      v73 = NumDifferentPhysicalAdapters;
      do
      {
        LODWORD(v70) = *v31;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v33);
        v34 = ((unsigned int)v70 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v34 < *((_DWORD *)v30 + 74)
          && (v35 = *((_QWORD *)v30 + 35),
              v36 = *(_DWORD *)(v35 + 16 * v34 + 8),
              (((unsigned int)v70 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60))
          && (v36 & 0x2000) == 0
          && (v36 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(v35 + 16 * (((unsigned __int64)(unsigned int)v70 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
          {
            v37 = *(_QWORD *)(v35 + 16 * (((unsigned __int64)(unsigned int)v70 >> 6) & 0xFFFFFF));
          }
          else
          {
            WdLogSingleEntry0(2LL);
            v37 = 0LL;
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        else
        {
          v37 = 0LL;
        }
        _InterlockedDecrement(v33 + 4);
        ExReleasePushLockSharedEx(v33, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(*((_QWORD *)this + 16) + v32) = v37;
        if ( (*((_BYTE *)a2 + 1917) & 1) != 0 )
        {
          v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + v32) + 48LL);
          *(_DWORD *)(v38 + 4) |= 2u;
        }
        v30 = v72;
        v32 += 8LL;
        ++v31;
        --v73;
      }
      while ( v73 );
      LODWORD(v6) = v71;
      v8 = (const struct _D3DKMT_DISPLAYMODE *)v77;
    }
LABEL_59:
    v39 = 4024LL * (unsigned int)v6;
    v40 = *((_QWORD *)this + 16) + v39;
    if ( v65 )
    {
      v41 = *(void **)(*(_QWORD *)(*(_QWORD *)(v40 + 88) + 48LL) + 16LL);
      v42 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      v75.hAllocation = v41;
      v43 = ADAPTER_RENDER::DdiDescribeAllocation(v42, &v75);
      v44 = *((_QWORD *)this + 16);
      if ( v43 >= 0 )
      {
        *(D3DDDI_MULTISAMPLINGMETHOD *)(4024LL * (unsigned int)v6 + v44 + 1036) = v75.MultisampleMethod;
        *(_DWORD *)(*((_QWORD *)this + 16) + v39 + 1044) = v75.PrivateDriverFormatAttribute;
      }
      else
      {
        WdLogSingleEntry4(3LL, a2, *(_QWORD *)(4024LL * (unsigned int)v6 + v44 + 88), (unsigned int)v6, v43);
        v45 = *((_QWORD *)this + 16);
        WdLogGlobalForLineNumber = 1035;
        *(_DWORD *)(v45 + v39 + 1036) = 1;
        *(_DWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 1040) = 1;
        *(_DWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 1044) = 0;
      }
    }
    else
    {
      *(_DWORD *)(v40 + 1036) = 1;
      *(_DWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 1040) = 1;
      *(_DWORD *)(*((_QWORD *)this + 16) + v39 + 1044) = 0;
    }
    if ( v66 )
    {
      v63 = v69;
      if ( !(_DWORD)v69 || !*((_QWORD *)&v69 + 1) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1198;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(SectionCreationInfo.Size != 0) && (SectionCreationInfo.Section != NULL)",
          1198LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v63 = v69;
      }
      v61 = v68;
      *(_DWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 612) = v63;
      *(_QWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 616) = *((_QWORD *)&v69 + 1);
      *(_QWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 600) = *(_QWORD *)(4024LL * (unsigned int)v6
                                                                                        + *((_QWORD *)this + 16)
                                                                                        + 88);
      if ( v68 )
        goto LABEL_105;
      WdLogSingleEntry0(1LL);
      v62 = 1211LL;
      goto LABEL_104;
    }
    v77 = 0LL;
    if ( !*((_BYTE *)this + 289)
      && ((v46 = v8->DisplayOrientation, v46 == D3DDDI_ROTATION_90) || v46 == D3DDDI_ROTATION_270) )
    {
      v47 = v8->Height;
      v48 = v8->Width;
    }
    else
    {
      v47 = v8->Width;
      v48 = v8->Height;
    }
    DWORD2(v77) = v8->Format;
    v76[3] = &v77;
    *(_QWORD *)&v77 = __PAIR64__(v48, v47);
    v76[0] = 2LL;
    LODWORD(v76[2]) = 2;
    if ( v67 )
    {
      LODWORD(v76[0]) = 2051;
      v68 = 4 * v47;
      DWORD1(v69) = v48 * 4 * v47;
      v76[4] = DxgkCreateDoDPrimarySection;
      v76[5] = &v69;
    }
    v49 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v76, v74);
    v28 = v49;
    if ( v49 < 0 )
    {
      WdLogSingleEntry5(3LL, (unsigned int)v77, DWORD1(v77), a2, (unsigned int)v6, v49);
      WdLogGlobalForLineNumber = 1128;
      if ( v65 )
      {
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          *(struct DXGRESOURCE **)(*(_QWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 88) + 40LL),
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v50 = DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2));
        if ( v50 )
        {
          v51 = v50;
          v52 = 4024LL * (unsigned int)v6 + 88;
          do
          {
            *(_QWORD *)(v52 + *((_QWORD *)this + 16)) = 0LL;
            v52 += 8LL;
            --v51;
          }
          while ( v51 );
        }
      }
      return v28;
    }
    if ( !HIDWORD(v76[6]) || !LODWORD(v76[1]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1152;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(NULL != CreateStandardAlloc.hAllocation[0]) && (NULL != CreateStandardAlloc.hResource)",
        1152LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v53 = HIDWORD(v77);
    if ( !HIDWORD(v77) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1157;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != ShadowSurfaceData.Pitch", 1157LL, 0LL, 0LL, 0LL, 0LL);
      v53 = HIDWORD(v77);
    }
    v54 = v72;
    v55 = (volatile signed __int32 *)((char *)v72 + 248);
    *(_DWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 608) = v53;
    v56 = HIDWORD(v76[6]);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v55);
    v57 = (v56 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v57 < *((_DWORD *)v54 + 74) )
    {
      v58 = *((_QWORD *)v54 + 35);
      v59 = *(_DWORD *)(v58 + 16 * v57 + 8);
      if ( ((v56 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60) && (v59 & 0x2000) == 0 && (v59 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v58 + 16 * (((unsigned __int64)v56 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v60 = *(_QWORD *)(v58 + 16 * (((unsigned __int64)v56 >> 6) & 0xFFFFFF));
LABEL_91:
          _InterlockedDecrement(v55 + 4);
          ExReleasePushLockSharedEx(v55, 0LL);
          KeLeaveCriticalRegion();
          *(_QWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 600) = v60;
          if ( !*(_QWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 600) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1161;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pDisplaySource[VidPnSourceId].m_pCddShadowAllocation != NULL",
              1161LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 612) = 0;
          *(_QWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 616) = 0LL;
          if ( !v67 )
            goto LABEL_106;
          if ( (_DWORD)v69 && *((_QWORD *)&v69 + 1) )
          {
            *(_DWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 612) = v69;
            *(_QWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 616) = *((_QWORD *)&v69 + 1);
          }
          v61 = v68;
          *(_QWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 88) = *(_QWORD *)(4024LL * (unsigned int)v6
                                                                                           + *((_QWORD *)this + 16)
                                                                                           + 600);
          if ( v68 )
          {
LABEL_105:
            *(_DWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 608) = v61;
LABEL_106:
            if ( *(_DWORD *)(4024LL * (unsigned int)v6 + *((_QWORD *)this + 16) + 736) == 1 )
              ADAPTER_DISPLAY::RemoveVidPnOwnership(this, v6);
            ADAPTER_DISPLAY::SetCddDisplayMode((DXGADAPTER **)this, v6, v8);
            return 0LL;
          }
          WdLogSingleEntry0(1LL);
          v62 = 1187LL;
LABEL_104:
          WdLogGlobalForLineNumber = v62;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != DoDShadowPitch", v62, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_105;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v60 = 0LL;
    goto LABEL_91;
  }
  v16 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
  v75.hAllocation = *(HANDLE *)(v15 + 16);
  v17 = ADAPTER_RENDER::DdiDescribeAllocation(v16, &v75);
  if ( v17 < 0 )
  {
    WdLogSingleEntry4(3LL, a2, *(_QWORD *)(v12 + *((_QWORD *)this + 16) + 88), v6, v17);
    WdLogGlobalForLineNumber = 881;
    goto LABEL_20;
  }
  if ( v75.Width != v8->Width
    || v75.Height != v8->Height
    || v75.Format != D3DDDIFMT_A8R8G8B8
    || v75.RefreshRate.Numerator != v8->RefreshRate.Numerator
    || v75.RefreshRate.Denominator != v8->RefreshRate.Denominator
    || *(_DWORD *)(v12 + *((_QWORD *)this + 16) + 1020) != v8->DisplayOrientation )
  {
    goto LABEL_20;
  }
  return 0LL;
}
