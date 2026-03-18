/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A778C
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1401A609C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x140038038 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x14003CB24 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x14003E5E8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B09C (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x140054148 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x14007E5AC (-CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x1401A5CCC (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1401A8F60 (-InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1401A9354 (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1401FDB60 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetDriverStorePath @ 0x1403BCEA0 (DpiGetDriverStorePath.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x14040798C (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r15
  __int64 v5; // rcx
  wchar_t *v6; // rax
  wchar_t *v7; // rax
  const wchar_t *v8; // rax
  __int64 v9; // rdx
  _OWORD *v10; // rbx
  int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  unsigned int v16; // ebx
  unsigned int VidSchSibmitDataSize; // eax
  __int64 result; // rax
  DXGADAPTER *v19; // rcx
  bool IsDxgmms2; // bl
  __int64 v21; // rdx
  const wchar_t *v22; // r9
  unsigned int *v23; // rbx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r12d
  unsigned int v28; // esi
  DXGADAPTER *v29; // rcx
  _DWORD *v30; // rbx
  int v31; // eax
  __int64 i; // rsi
  DXGADAPTER *v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned int v36; // r12d
  DXGADAPTER *v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  unsigned __int16 *v40; // rsi
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  _DWORD *v44; // r15
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  int *v49; // rcx
  int AdapterInfo; // eax
  DXGADAPTER *v51; // rcx
  __int64 j; // rbx
  struct _DXGK_NODEMETADATA *v53; // r15
  int NodeMetadata; // r12d
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // r14
  DXGADAPTER *v58; // rcx
  int v59; // eax
  __int64 v60; // xmm1_8
  int v61; // eax
  __int64 v62; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  int SynchronizationObjectInternal; // eax
  __int64 v69; // rsi
  int *v70; // rcx
  unsigned int NumDifferentPhysicalAdapters; // ebx
  unsigned int v72; // ecx
  unsigned int v73; // edx
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // rax
  unsigned int *v76; // rax
  unsigned int *v77; // rsi
  unsigned int *v78; // rax
  DXGADAPTER *v79; // rcx
  int v80; // r13d
  char v81; // dl
  unsigned int *v82; // r12
  unsigned int v83; // ecx
  __int64 v84; // rbx
  const wchar_t *v85; // r9
  __int64 Flags; // [rsp+28h] [rbp-E0h]
  unsigned int v87; // [rsp+58h] [rbp-B0h] BYREF
  char v88; // [rsp+5Ch] [rbp-ACh]
  unsigned int v89; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v90[4]; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v91; // [rsp+68h] [rbp-A0h] BYREF
  _WORD v92[2]; // [rsp+6Ch] [rbp-9Ch] BYREF
  _DWORD *v93; // [rsp+70h] [rbp-98h]
  __int64 v94; // [rsp+78h] [rbp-90h] BYREF
  __int64 v95; // [rsp+80h] [rbp-88h]
  struct _DXGKARG_QUERYADAPTERINFO v96[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v97; // [rsp+E8h] [rbp-20h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v98; // [rsp+118h] [rbp+10h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v99; // [rsp+148h] [rbp+40h] BYREF
  __int128 v100; // [rsp+178h] [rbp+70h] BYREF
  __int64 v101; // [rsp+188h] [rbp+80h]
  int v102; // [rsp+190h] [rbp+88h]
  wchar_t Str[264]; // [rsp+198h] [rbp+90h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  *((_OWORD *)this + 34) = *(_OWORD *)(v3 + 1832);
  *((_OWORD *)this + 35) = *(_OWORD *)(v3 + 1864);
  *((_OWORD *)this + 36) = *(_OWORD *)(v3 + 1880);
  *((_OWORD *)this + 37) = *(_OWORD *)(v3 + 1848);
  if ( *((_WORD *)this + 296) )
  {
    v5 = *(_QWORD *)(v3 + 216);
    v89 = 520;
    if ( (int)DpiGetDriverStorePath(v5, Str, &v89) >= 0 )
    {
      v6 = wcsstr(Str, L"FileRepository");
      if ( v6 )
      {
        v7 = wcsstr(v6, L"\\");
        if ( v7 )
        {
          v8 = v7 + 1;
          if ( v8 )
          {
            if ( !wcsstr(*((const wchar_t **)this + 75), v8) )
            {
              if ( *((_WORD *)this + 280) )
              {
                *((_WORD *)this + 280) = 0;
                *((_QWORD *)this + 71) = 0LL;
              }
              if ( *((_WORD *)this + 288) )
              {
                *((_WORD *)this + 288) = 0;
                *((_QWORD *)this + 73) = 0LL;
              }
              *((_WORD *)this + 296) = 0;
              *((_QWORD *)this + 75) = 0LL;
            }
          }
        }
      }
    }
  }
  v9 = *v2;
  v10 = (_OWORD *)((char *)this + 320);
  *((_OWORD *)this + 38) = *(_OWORD *)(*v2 + 1976);
  *((_OWORD *)this + 39) = *(_OWORD *)(v9 + 1992);
  *((_OWORD *)this + 42) = *(_OWORD *)(v9 + 1912);
  *(_OWORD *)((char *)this + 696) = *(_OWORD *)(v9 + 1936);
  *((_DWORD *)this + 172) = *(_DWORD *)(v9 + 1928);
  *((_DWORD *)this + 173) = *(_DWORD *)(v9 + 1932);
  *((_DWORD *)this + 178) = *(_DWORD *)(v9 + 1952);
  *((_DWORD *)this + 179) = *(_DWORD *)(v9 + 1956);
  *((_OWORD *)this + 40) = *(_OWORD *)(v9 + 2008);
  *((_OWORD *)this + 41) = *(_OWORD *)(v9 + 2024);
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(v9 + 1792),
              (struct _UNICODE_STRING *)this + 20) < 0 )
  {
    v12 = v2;
    goto LABEL_202;
  }
  v11 = ADAPTER_RENDER::InitializeUserModeDriverNames(
          this,
          (struct _UNICODE_STRING *)(*v2 + 1808),
          (struct _UNICODE_STRING *)this + 26);
  v12 = v2;
  if ( v11 < 0 )
  {
LABEL_202:
    v16 = -1073741438;
    WdLogSingleEntry2(2LL, *v12, -1073741438LL);
    v85 = L"Adapter 0x%I64x: Invalidly formatted user mode driver name, returning 0x%I64x";
    WdLogGlobalForLineNumber = 932;
    goto LABEL_203;
  }
  if ( (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*v2 + 2104),
              (struct _UNICODE_STRING *)this + 32) < 0
    || (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*v2 + 2120),
              (struct _UNICODE_STRING *)this + 33) < 0 )
  {
    v16 = -1073741438;
    WdLogSingleEntry2(2LL, *v2, -1073741438LL);
    v85 = L"Adapter 0x%I64x: Invalidly formatted user mode display driver name, returning 0x%I64x";
    WdLogGlobalForLineNumber = 965;
LABEL_203:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v85, *v2, -1073741438LL, 0LL, 0LL, 0LL);
    return v16;
  }
  if ( *(_WORD *)v10 && **((_WORD **)this + 41) == 35 && *(_WORD *)(*v2 + 2064) )
    *v10 = *(_OWORD *)(*v2 + 2064);
  if ( *((_WORD *)this + 208) )
  {
    if ( **((_WORD **)this + 53) == 35 )
    {
      v13 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v13 + 2080) )
        *((_OWORD *)this + 26) = *(_OWORD *)(v13 + 2080);
    }
  }
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 173);
  v14 = *((_QWORD *)this + 2);
  v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 216) + 64LL) + 40LL) + 28LL);
  v89 = v15;
  if ( !*(_BYTE *)(v14 + 209) && !*((_WORD *)this + 160) && (*(_DWORD *)(v14 + 3016) & 8) == 0 )
  {
    v16 = -1073741438;
    WdLogSingleEntry2(2LL, v14, -1073741438LL);
    Flags = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 982;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x: Invalid user mode driver name, returning 0x%I64x",
      Flags,
      -1073741438LL,
      0LL,
      0LL,
      0LL);
    return v16;
  }
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize(this);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)((char *)this + 1424),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) < 0 )
  {
    WdLogSingleEntry3(3LL, this, -1073741801LL, 0LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 992;
    return result;
  }
  *((_BYTE *)this + 1369) = 1;
  v90[1] = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)v90);
  v19 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( !*((_BYTE *)v19 + 209) )
  {
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v19);
    *((_QWORD *)this + 95) = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + (IsDxgmms2 ? 8 : 0) + 264);
    v21 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + (IsDxgmms2 ? 8 : 0) + 280);
    *((_QWORD *)this + 92) = v21;
    if ( !*((_QWORD *)this + 95) || !v21 )
    {
      v16 = -1073741438;
      WdLogSingleEntry2(2LL, this, -1073741438LL);
      v22 = L"Adapter 0x%I64x: Unsupported display driver model, returning 0x%I64x";
      WdLogGlobalForLineNumber = 1021;
      goto LABEL_69;
    }
  }
  v23 = (unsigned int *)*((_QWORD *)this + 2);
  if ( DXGADAPTER::IsGpuVirtualAddressingSupported((DXGADAPTER *)v23) )
  {
    v24 = v23[74];
    v25 = 144 * v24;
    if ( !is_mul_ok(v24, 0x90uLL) )
      v25 = -1LL;
    v26 = operator new[](v25, 0x4B677844u, 256LL);
    *((_QWORD *)this + 158) = v26;
    if ( !v26 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1036;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate m_pGpuMmuCaps",
        1036LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_39:
      v16 = -1073741801;
      goto LABEL_40;
    }
    v27 = 63;
    v87 = 0;
    v28 = 0;
    while ( (unsigned int)v4 < (unsigned int)v24 )
    {
      v29 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v30 = (_DWORD *)(*((_QWORD *)this + 158) + 144LL * (unsigned int)v4);
      if ( (*((_DWORD *)v29 + 627) & 0x40) != 0 )
      {
        *(_QWORD *)&v97.Type = 13LL;
        *(_QWORD *)&v97.Flags.0 = 0LL;
        HIDWORD(v97.hKmdProcessHandle) = 0;
        v97.pInputData = &v94;
        *(_QWORD *)&v97.InputDataSize = 4LL;
        v97.pOutputData = v30;
        v97.OutputDataSize = 24;
        LODWORD(v94) = v4;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v29, &v97) >= 0 )
        {
          v31 = v30[2];
          if ( v28 )
          {
            if ( v31 != v28 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 1083;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Virtual address bit count must be the same on all physical adapters",
                1083LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_50;
            }
          }
          else
          {
            v87 = v30[2];
            if ( (unsigned int)(v31 - 13) > 0x32 )
            {
              WdLogSingleEntry2(2LL, 12LL, 63LL);
              WdLogGlobalForLineNumber = 1075;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"GpuMmu.VirtualAddressBitCount is invalid. It should be from %d to %d",
                12LL,
                63LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_50;
            }
          }
          if ( (unsigned int)(v30[4] - 2) > 4 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 1091;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"GpuMmu.PageDirectoryCount is invalid. It should be from 2 to DXGK_MAX_PAGE_TABLE_LEVEL_COUNT\n",
              1091LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v16 = -1073741438;
            goto LABEL_40;
          }
          if ( v15 < 0x5014 )
            *v30 &= ~0x20u;
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            if ( (unsigned int)i >= v30[4] )
            {
              v28 = v87;
              v15 = v89;
              goto LABEL_61;
            }
            v98.pInputData = v92;
            v33 = (DXGADAPTER *)*((_QWORD *)this + 2);
            *(_QWORD *)&v98.Type = 14LL;
            *(_QWORD *)&v98.InputDataSize = 4LL;
            v98.hKmdProcessHandle = 0LL;
            v93 = &v30[4 * i + 6 + (unsigned int)i];
            v98.pOutputData = v93;
            v92[0] = i;
            v92[1] = v4;
            *(_QWORD *)&v98.OutputDataSize = v89 < 0x5012 ? 16 : 20;
            if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v33, &v98) < 0 )
              break;
            if ( ((v93[4] - 1) & v93[4]) != 0 )
            {
              WdLogSingleEntry2(2LL, this, (unsigned int)i);
              WdLogGlobalForLineNumber = 1143;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Adapter 0x%I64x: Page table alignment of level %d must be power of 2",
                (__int64)this,
                (unsigned int)i,
                0LL,
                0LL,
                0LL);
              goto LABEL_50;
            }
          }
          v16 = -1073741438;
          WdLogSingleEntry2(2LL, this, -1073741438LL);
          v22 = L"Adapter 0x%I64x: Failed to query page table level descriptor, returning 0x%I64x";
          WdLogGlobalForLineNumber = 1138;
          goto LABEL_69;
        }
        v16 = -1073741438;
        WdLogSingleEntry2(2LL, this, -1073741438LL);
        v22 = L"Adapter 0x%I64x: Failed to query GpuMmu caps, returning 0x%I64x";
        WdLogGlobalForLineNumber = 1065;
LABEL_69:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v22, (__int64)this, -1073741438LL, 0LL, 0LL, 0LL);
        goto LABEL_40;
      }
      v30[2] = 63;
LABEL_61:
      if ( v27 >= v30[2] )
        v27 = v30[2];
      LODWORD(v4) = v4 + 1;
    }
    v4 = 0LL;
    if ( (_DWORD)v24 )
    {
      v34 = 0LL;
      v35 = v24;
      do
      {
        v34 += 144LL;
        *(_DWORD *)(*((_QWORD *)this + 158) + v34 - 136) = v27;
        --v35;
      }
      while ( v35 );
    }
  }
  if ( *(int *)(*((_QWORD *)this + 2) + 2776LL) >= 4864 )
  {
    v36 = 0;
    while ( 2 )
    {
      v37 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v89 = v36;
      if ( v36 < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v37) )
      {
        v40 = (unsigned __int16 *)(*(_QWORD *)(v38 + 3032) + 352LL * v36);
        v91 = *v40;
        v41 = v91;
        v42 = 74LL * v91;
        if ( !is_mul_ok(v91, 0x4AuLL) )
          v42 = v39;
        v43 = operator new[](v42, 0x4B677844u, 256LL);
        v93 = (_DWORD *)v43;
        v44 = (_DWORD *)v43;
        if ( !v43 )
        {
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 1187;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Adapter 0x%I64x: Failed to allocate pNodeMetadata",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_39;
        }
        *((_QWORD *)v40 + 4) = v43;
        v45 = 44 * v41;
        v95 = *((_QWORD *)this + 2);
        if ( !is_mul_ok(v41, 0x2CuLL) )
          v45 = -1LL;
        v46 = operator new[](v45, 0x4B677844u, 256LL);
        if ( !v46 )
        {
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 1198;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Adapter 0x%I64x: Failed to allocate pNodePerfData",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_39;
        }
        *((_QWORD *)v40 + 13) = v46;
        v47 = 8 * v41;
        if ( !is_mul_ok(v41, 8uLL) )
          v47 = -1LL;
        v48 = operator new[](v47, 0x4B677844u, 256LL);
        if ( !v48 )
        {
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 1208;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Adapter 0x%I64x: Failed to allocate pNodePerfDataQueryTimes",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_39;
        }
        *((_QWORD *)v40 + 14) = v48;
        v49 = (int *)*((_QWORD *)this + 2);
        if ( v49[761] >= 2400 )
        {
          v87 = v36;
          v96[0].pInputData = &v87;
          *(_QWORD *)&v96[0].Type = 26LL;
          v96[0].pOutputData = v40 + 92;
          *(_QWORD *)&v96[0].InputDataSize = 4LL;
          *(_QWORD *)&v96[0].Flags.0 = 0LL;
          HIDWORD(v96[0].hKmdProcessHandle) = 0;
          v96[0].OutputDataSize = 28;
          AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v49, v96);
          if ( (int)(AdapterInfo + 0x80000000) >= 0 && AdapterInfo != -1073741637 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1229;
          }
          v51 = (DXGADAPTER *)*((_QWORD *)this + 2);
          v96[0].pOutputData = v40 + 106;
          v96[0].Type = DXGKQAITYPE_GPUVERSION;
          v96[0].OutputDataSize = 128;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v51, v96) < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1239;
          }
        }
        v88 = 0;
        for ( j = 0LL; (unsigned int)j < v91; j = (unsigned int)(j + 1) )
        {
          v53 = (struct _DXGK_NODEMETADATA *)((char *)v44 + 74 * (unsigned int)j);
          NodeMetadata = DXGADAPTER::DdiGetNodeMetadata(*((DXGADAPTER **)this + 2), (unsigned int)j | (v36 << 16), v53);
          if ( NodeMetadata < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1250;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Adapter 0x%I64x: Driver reported failure getting node metadata with valid parameters.",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            v16 = NodeMetadata;
            goto LABEL_40;
          }
          v55 = *((_QWORD *)this + 2);
          if ( *(_DWORD *)(v55 + 2320) >= 0x9000u )
          {
            if ( (*(_BYTE *)&v53->Flags.0 & 1) != 0 )
            {
              if ( !v53->IoMmuSupported && !*((_BYTE *)v40 + 49) )
              {
                WdLogSingleEntry2(2LL, this, (unsigned int)j);
                WdLogGlobalForLineNumber = 1267;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported ContextScheduling support for a node, but it d"
                            "oesn't support GPU VA.",
                  (__int64)this,
                  (unsigned int)j,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_50;
              }
              if ( (**(_DWORD **)(v55 + 3048) & 0x20000) == 0 )
              {
                WdLogSingleEntry2(2LL, this, j);
                WdLogGlobalForLineNumber = 1273;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported ContextScheduling support for a node, but the "
                            "OS didn't allow HwSch to be enabled.",
                  (__int64)this,
                  j,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_50;
              }
              *((_BYTE *)this + 1880) = 1;
            }
            v44 = v93;
            v56 = *(_DWORD *)((char *)v93 + 74 * (unsigned int)j + 68);
            if ( (v56 & 8) != 0 )
            {
              if ( *(int *)(v55 + 3044) < 3100 )
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 1285;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Adapter 0x%I64x: UserModeSubmission is only supported on WDDM3.1 and above.",
                  (__int64)this,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_50;
              }
              if ( (v56 & 1) == 0 )
              {
                WdLogSingleEntry2(2LL, this, j);
                WdLogGlobalForLineNumber = 1291;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported UserModeSubmission support for a node which do"
                            "esn't support ContextScheduling.",
                  (__int64)this,
                  j,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_50;
              }
              if ( (**(_DWORD **)(v55 + 3048) & 0x8000000) == 0 )
              {
                WdLogSingleEntry2(2LL, this, j);
                WdLogGlobalForLineNumber = 1297;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported UserModeSubmission support, but the OS didn't "
                            "allow UserModeSubmission to be enabled.",
                  (__int64)this,
                  j,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_50;
              }
              if ( (*(_DWORD *)(v95 + 2504) & 0x800) == 0 )
              {
                WdLogSingleEntry2(2LL, this, j);
                WdLogGlobalForLineNumber = 1303;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported UserModeSubmission support, but NativeGpuFence"
                            " cap is not set.",
                  (__int64)this,
                  j,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_50;
              }
              if ( !*(_QWORD *)(v55 + 1528)
                || !*(_QWORD *)(v55 + 1552)
                || !*(_QWORD *)(v55 + 1536)
                || !*(_QWORD *)(v55 + 1544)
                || !*(_QWORD *)(v55 + 1560) )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 1315;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Driver reports UserModeSubmission support, but does not support all relevant Doorbell DDIs.",
                  1315LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_50;
              }
              v88 = 1;
            }
            else if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305952)
                   && (*((_BYTE *)v44 + 74 * (unsigned int)j + 68) & 1) != 0 )
            {
              *((_DWORD *)this + 318) |= 1u;
              *((_DWORD *)this + 319) = 512;
              *((_DWORD *)this + 320) = 512;
            }
            if ( (*(_DWORD *)((char *)v44 + 74 * (unsigned int)j + 68) & 0xFFC0) != 0 )
            {
              WdLogSingleEntry2(2LL, this, j);
              WdLogGlobalForLineNumber = 1335;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver should not set reserved bits.",
                (__int64)this,
                j,
                0LL,
                0LL,
                0LL);
              goto LABEL_50;
            }
          }
          else
          {
            v53->Flags.Value = 0;
            v44 = v93;
          }
          v57 = v95;
          if ( *((_BYTE *)v44 + 74 * (unsigned int)j + 72) )
          {
            if ( (*(_DWORD *)(v95 + 2508) & 0x40) == 0 )
            {
              WdLogSingleEntry2(2LL, this, j);
              WdLogGlobalForLineNumber = 1344;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported GpuMmu support for a node, but the adapter caps do not match.",
                (__int64)this,
                j,
                0LL,
                0LL,
                0LL);
              goto LABEL_50;
            }
            if ( (*((_DWORD *)v40 + 4) & 0xC0) != 0 )
            {
              WdLogSingleEntry2(2LL, this, j);
              WdLogGlobalForLineNumber = 1349;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver set GpuMmuSupported, but adapter requires GpuVaIoMmu",
                (__int64)this,
                j,
                0LL,
                0LL,
                0LL);
              goto LABEL_50;
            }
            if ( (_DWORD)j == v40[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 3081LL) )
              *((_BYTE *)v40 + 48) = 1;
            *((_BYTE *)v40 + 49) = 1;
          }
          if ( *((_BYTE *)v44 + 74 * (unsigned int)j + 73) )
          {
            if ( (*(_DWORD *)(v57 + 2508) & 0x80u) == 0 )
            {
              WdLogSingleEntry2(2LL, this, j);
              WdLogGlobalForLineNumber = 1363;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported IoMmu support for a node, but the adapter caps do not match.",
                (__int64)this,
                j,
                0LL,
                0LL,
                0LL);
              goto LABEL_50;
            }
            if ( (*((_DWORD *)v40 + 4) & 0xC0) != 0 )
            {
              WdLogSingleEntry2(2LL, this, j);
              WdLogGlobalForLineNumber = 1368;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver set IoMmuSupported, but adapter requires GpuVaIoMmu",
                (__int64)this,
                j,
                0LL,
                0LL,
                0LL);
              goto LABEL_50;
            }
            if ( (_DWORD)j == v40[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 3081LL) )
              *((_BYTE *)v40 + 48) = 1;
          }
          v36 = v89;
        }
        v4 = 0LL;
        if ( !v88 )
        {
LABEL_137:
          ++v36;
          continue;
        }
        v58 = (DXGADAPTER *)*((_QWORD *)this + 2);
        v101 = 0LL;
        v102 = 0;
        memset(&v99, 0, 24);
        v99.Type = DXGKQAITYPE_NUMPOWERCOMPONENTS|0x20;
        v99.pOutputData = &v100;
        *(_OWORD *)&v99.OutputDataSize = 0LL;
        v99.OutputDataSize = 28;
        v100 = 0LL;
        v16 = DXGADAPTER::DdiQueryAdapterInfo(v58, &v99);
        if ( (v16 & 0x80000000) == 0 )
        {
          if ( (unsigned int)(DWORD1(v100) - 1) > 0xFFF )
          {
            WdLogSingleEntry2(2LL, DWORD1(v100), 4096LL);
            WdLogGlobalForLineNumber = 1397;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DoorbellSize (0x%u) must be greater than 0 and less than 0x%u.",
              DWORD1(v100),
              4096LL,
              0LL,
              0LL,
              0LL);
          }
          else if ( (v100 & 0xFFFFFFFE) != 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1404;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DXGKQAITYPE_USERMODESUBMISSION_CAPS: Driver should not set reserved bits, returning 0x%I64x.",
              -1073741811LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            if ( (v100 & 1) == 0 || (unsigned int)(DWORD2(v100) - 1) <= 0xFFF )
            {
              v59 = v102;
              v60 = v101;
              *(_OWORD *)((char *)this + 1272) = v100;
              *((_QWORD *)this + 161) = v60;
              *((_DWORD *)this + 324) = v59;
              goto LABEL_137;
            }
            WdLogSingleEntry2(2LL, DWORD2(v100), 4096LL);
            WdLogGlobalForLineNumber = 1414;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"SecondaryDoorbellSize (0x%u) must be greater than 0 and less than 0x%u.",
              DWORD2(v100),
              4096LL,
              0LL,
              0LL,
              0LL);
          }
LABEL_50:
          v16 = -1073741811;
          goto LABEL_40;
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1389;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter 0x%I64x: Driver reported failure getting User mode submission Caps.",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_40:
        DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v90);
        return v16;
      }
      break;
    }
    if ( *(int *)(v38 + 2776) < 8960 )
      *(_DWORD *)(v38 + 2504) &= 0xFFFFF87F;
  }
  v61 = DXGADAPTER::CheckMcdmDdiSubmission(*((DXGADAPTER **)this + 2));
  if ( v61 < 0 )
  {
LABEL_161:
    v16 = v61;
    goto LABEL_40;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    v87 = 0;
    v61 = ADAPTER_RENDER::ConfigureSysMm(this, (union SYSMM_IOMMU_STATE *)&v87);
    if ( v61 < 0 )
      goto LABEL_161;
    v62 = *((_QWORD *)this + 92);
    Global = DXGGLOBAL::GetGlobal();
    v64 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v62 + 8) + 24LL))(
            this,
            *(_QWORD *)(*((_QWORD *)this + 2) + 216LL),
            (__int64)Global + 152);
    *((_QWORD *)this + 93) = v64;
    if ( !v64 )
      goto LABEL_39;
    v65 = 0LL;
    if ( (v87 & 1) != 0 )
    {
      v65 = 1LL;
      if ( (v87 & 2) != 0 )
        v65 = 3LL;
    }
    v66 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, __int64))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 8LL))(
            this,
            v65);
    *((_QWORD *)this + 96) = v66;
    if ( !v66 )
      goto LABEL_39;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 32LL))(
      *((_QWORD *)this + 93),
      v66);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 16LL))(
      *((_QWORD *)this + 96),
      *((_QWORD *)this + 93));
  }
  memset(v96, 0, sizeof(v96));
  HIDWORD(v96[0].pInputData) |= 1u;
  LOBYTE(v67) = 1;
  LODWORD(v96[0].pInputData) = 3;
  SynchronizationObjectInternal = CreateSynchronizationObjectInternal(
                                    0LL,
                                    v67,
                                    this,
                                    v96,
                                    11,
                                    0,
                                    (char *)this + 904,
                                    0LL,
                                    0LL);
  v69 = SynchronizationObjectInternal;
  if ( SynchronizationObjectInternal < 0 )
  {
    WdLogSingleEntry2(2LL, this, SynchronizationObjectInternal);
    WdLogGlobalForLineNumber = 1509;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x: CreateSynchronizationObjectInternal failed. Returning 0x%I64x",
      (__int64)this,
      v69,
      0LL,
      0LL,
      0LL);
    v16 = v69;
    goto LABEL_40;
  }
  v70 = (int *)*((_QWORD *)this + 2);
  if ( v70[694] >= 4864 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v70);
    v89 = NumDifferentPhysicalAdapters;
    v87 = 0;
    v72 = 0;
    v73 = 0;
    while ( v72 < NumDifferentPhysicalAdapters )
    {
      v74 = *(unsigned __int16 *)(352LL * v73 + *(_QWORD *)(*((_QWORD *)this + 2) + 3032LL));
      v75 = 4 * v74;
      if ( !is_mul_ok(v74, 4uLL) )
        v75 = -1LL;
      v76 = (unsigned int *)operator new[](v75, 0x4B677844u, 64LL);
      v77 = v76;
      if ( !v76 )
        goto LABEL_39;
      v91 = v87;
      v96[0].pOutputData = v76;
      v96[0].OutputDataSize = 4 * v74;
      v78 = &v87;
      v79 = (DXGADAPTER *)*((_QWORD *)this + 2);
      if ( NumDifferentPhysicalAdapters <= 1 )
        v78 = &v91;
      *(_QWORD *)&v96[0].Type = 10LL;
      *(_QWORD *)&v96[0].InputDataSize = 4LL;
      *(_QWORD *)&v96[0].Flags.0 = 0LL;
      HIDWORD(v96[0].hKmdProcessHandle) = 0;
      v96[0].pInputData = v78;
      v80 = DXGADAPTER::DdiQueryAdapterInfo(v79, v96);
      v81 = 1;
      if ( v80 < 0 )
        goto LABEL_191;
      if ( (_DWORD)v74 )
      {
        v82 = v77;
        do
        {
          v83 = *v82;
          if ( *v82 && v83 < 0x20 || v83 > 0x40 )
          {
            v84 = *v82;
            WdLogSingleEntry3(2LL, this, v84, v4);
            WdLogGlobalForLineNumber = 1557;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Adapter 0x%I64x: Invalid timestamp precision. Valid domain is {0, [32-64]}. Precision=%d, Node=%d",
              (__int64)this,
              v84,
              v4,
              0LL,
              0LL);
            v81 = 0;
          }
          else if ( !v83 )
          {
            *((_BYTE *)this + 968) = 1;
          }
          ++v4;
          ++v82;
          --v74;
        }
        while ( v74 );
        v4 = 0LL;
        if ( !v81 )
        {
LABEL_191:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v77);
          *((_BYTE *)this + 968) = 0;
          v77 = 0LL;
          if ( v80 >= 0 )
          {
            v16 = -1073741438;
            WdLogSingleEntry2(2LL, this, -1073741438LL);
            v22 = L"Adapter 0x%I64x: Precision data is bad. Returning 0x%I64x";
            WdLogGlobalForLineNumber = 1597;
            goto LABEL_69;
          }
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 1589;
        }
      }
      NumDifferentPhysicalAdapters = v89;
      *(_QWORD *)(352LL * v87 + *(_QWORD *)(*((_QWORD *)this + 2) + 3032LL) + 40) = v77;
      v72 = v87 + 1;
      v87 = v72;
      v73 = v72;
    }
    if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
    {
      *((_QWORD *)this + 129) = -500000LL;
      KeInitializeTimer((PKTIMER)((char *)this + 1040));
      KeInitializeDpc((PRKDPC)((char *)this + 1104), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
    }
    if ( *((_BYTE *)this + 968) )
      KeInitializeSpinLock((PKSPIN_LOCK)this + 157);
  }
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v90);
  return 0LL;
}
