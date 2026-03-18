/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140366154
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1400559D4 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x140056880 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x140061438 (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?SetCurrentVirtualMode@ADAPTER_DISPLAY@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x140063248 (-SetCurrentVirtualMode@ADAPTER_DISPLAY@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140064DE0 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x140204E94 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     _lambda_fe0a1c8bb5d899668299a10802864297_::operator() @ 0x1402688DC (_lambda_fe0a1c8bb5d899668299a10802864297_--operator().c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x140268F3C (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D3940 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4AF8 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4CC4 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140323480 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1403418DC (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x140364910 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140364A10 (-MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140365238 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkQueryDmmInterface @ 0x140365A0C (DxgkQueryDmmInterface.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x140365BB4 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14036BA6C (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A90F8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140412BCC (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGPROCESS *a2,
        int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v7; // rax
  struct DXGDEVICE *v8; // r14
  __int64 v9; // r8
  _DWORD *v10; // rbx
  const struct _LUID *v11; // r8
  ADAPTER_DISPLAY **v12; // rdi
  char v13; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  int v17; // eax
  ADAPTER_DISPLAY *v18; // rcx
  unsigned int v19; // r15d
  int i; // r12d
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r8
  unsigned __int64 v24; // xmm1_8
  __int64 v25; // r13
  int v26; // r9d
  int v27; // r15d
  char v28; // r8
  __int64 v29; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  unsigned int v31; // r8d
  __int64 v32; // r15
  int v33; // edx
  int v34; // ecx
  unsigned int v35; // r13d
  ADAPTER_DISPLAY *v36; // r8
  char v37; // r14
  int v38; // r12d
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  bool v41; // zf
  unsigned int v42; // ebx
  __int64 v44; // rax
  __int64 v45; // r15
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v47; // rcx
  __int128 v48; // xmm0
  int v49; // r8d
  __int128 v50; // xmm1
  __int64 v51; // xmm2_8
  int v52; // eax
  ADAPTER_DISPLAY *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // eax
  const struct _DXGDMM_INTERFACE *v57; // rax
  int v58; // edx
  bool v59; // sf
  const struct _DXGDMM_INTERFACE *v60; // rax
  int v61; // eax
  unsigned __int64 v62; // rdx
  int v63; // r8d
  struct DXGGLOBAL *Global; // rax
  int v65; // r8d
  unsigned int v66; // [rsp+40h] [rbp-C0h] BYREF
  int v67; // [rsp+48h] [rbp-B8h] BYREF
  char v68; // [rsp+4Ch] [rbp-B4h]
  _BYTE v69[3]; // [rsp+4Dh] [rbp-B3h] BYREF
  int v70; // [rsp+50h] [rbp-B0h] BYREF
  const struct _DXGDMM_INTERFACE *v71; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v72[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v73; // [rsp+70h] [rbp-90h]
  __int128 v74; // [rsp+80h] [rbp-80h] BYREF
  CCD_TOPOLOGY *v75; // [rsp+90h] [rbp-70h]
  unsigned int *v76; // [rsp+98h] [rbp-68h]
  __int128 v77; // [rsp+A0h] [rbp-60h] BYREF
  void (__fastcall *v78)(__int64, __int64); // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h]
  int v80; // [rsp+C0h] [rbp-40h]
  __int128 v81; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v82; // [rsp+E0h] [rbp-20h]
  _BYTE v83[32]; // [rsp+E8h] [rbp-18h] BYREF
  char v84; // [rsp+108h] [rbp+8h]
  char v85[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v86[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v87[88]; // [rsp+158h] [rbp+58h] BYREF

  v82 = a5;
  v70 = a3;
  v7 = *((_QWORD *)this + 8);
  v8 = 0LL;
  v66 = a4;
  v67 = 0;
  v69[0] = 0;
  v9 = *(_QWORD *)(v7 + 48) + 340LL * a4;
  *(_QWORD *)&v74 = &v67;
  v75 = this;
  v73 = 0LL;
  v10 = (_DWORD *)(v9 + 80);
  v72[0] = 0LL;
  *((_QWORD *)&v74 + 1) = v9 + 80;
  v76 = &v66;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v83, &v74);
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v72, v11);
  v12 = (ADAPTER_DISPLAY **)v72[0];
  if ( !v72[0] )
  {
    v67 = -1073741811;
    WdLogSingleEntry4(
      2LL,
      0LL,
      *(int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      -1073741811LL);
    v42 = v67;
    WdLogGlobalForLineNumber = 2308;
    if ( v84 )
      lambda_fe0a1c8bb5d899668299a10802864297_::operator()((__int64)v83);
    return v42;
  }
  v13 = *(_BYTE *)(*((_QWORD *)v72[0] + 395) + 288LL);
  v68 = v13;
  if ( v13 )
  {
    *(_BYTE *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 76) = 1;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v85, (struct DXGADAPTER *const)v12, 0LL);
    v67 = COREADAPTERACCESS::AcquireExclusive((__int64)v85, (unsigned int)(v63 + 1));
    if ( v67 >= 0 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(v12[395]) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v12[395], 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v85);
  }
  while ( 1 )
  {
    if ( v8 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v66),
        v8);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v8 + 2), v8);
      v73 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v66),
                                             v13);
    v67 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
        *(unsigned int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
        CddDeviceAndContextForCurrentSession);
      v41 = v84 == 0;
      WdLogGlobalForLineNumber = 2373;
      goto LABEL_42;
    }
    v8 = v73;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v74, v73);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v72, (struct DXGPROCESS *)((char *)a2 + 360), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v72);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, (__int64)v8, 1, v15, 0);
    v67 = COREDEVICEACCESS::AcquireExclusive((__int64)v85, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState(v8) )
      break;
    COREACCESS::~COREACCESS((COREACCESS *)v87, v16);
    COREACCESS::~COREACCESS((COREACCESS *)v86, v62);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
    if ( BYTE8(v74) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v74 + 136));
      KeLeaveCriticalRegion();
      BYTE8(v74) = 0;
    }
  }
  if ( v67 < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      *(int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      *((_QWORD *)this + 8),
      v67);
    WdLogGlobalForLineNumber = 2421;
LABEL_78:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v74);
    goto LABEL_40;
  }
  v71 = 0LL;
  v17 = DxgkQueryDmmInterface((DXGADAPTER *)v12, v16, &v71);
  v67 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(
      2LL,
      *(int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      v17);
    WdLogGlobalForLineNumber = 2437;
    goto LABEL_78;
  }
  v18 = v12[395];
  v19 = 0;
  for ( i = 1; v19 < *((_DWORD *)v18 + 24); i *= 2 )
  {
    if ( (i & *v10) != 0 )
    {
      v61 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v18, v19);
      v67 = v61;
      if ( v61 < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          v19,
          *(int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
          *(unsigned int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
          v61);
        WdLogGlobalForLineNumber = 2461;
      }
      ADAPTER_DISPLAY::SetCurrentVirtualMode(v12[395], v19, 0LL);
      ADAPTER_DISPLAY::ProcessModeChange(v12[395], v19);
    }
    if ( (i & v10[1]) != 0 )
    {
      v21 = *((_QWORD *)this + 8);
      v22 = 4024LL * v19;
      v23 = *((_QWORD *)v12[395] + 16);
      v81 = *(_OWORD *)(v22 + v23 + 688);
      v24 = v81;
      v25 = 296LL * *(unsigned int *)(*(_QWORD *)(v21 + 48) + 4 * (v19 + 85LL * v66) + 8);
      *(_OWORD *)(v22 + v23 + 688) = *(_OWORD *)(v21 + v25 + 224);
      if ( __PAIR128__(*((unsigned __int64 *)&v81 + 1), v24) != *(_OWORD *)(*((_QWORD *)this + 8) + v25 + 224) )
        v10[11] |= i;
      *(_DWORD *)(*((_QWORD *)this + 8) + v25 + 244) = ADAPTER_DISPLAY::GetDisplayId(v12[395], v19);
    }
    v18 = v12[395];
    ++v19;
  }
  v26 = *((_DWORD *)this + 20);
  v27 = v70;
  v28 = *((_DWORD *)this + 19) & 1;
  v29 = *((_QWORD *)this + 8);
  *((_QWORD *)&v77 + 1) = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0;
  LOBYTE(v77) = 0;
  *(_QWORD *)&v81 = 0LL;
  PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                               v29,
                                               (__int64)v12,
                                               v28,
                                               v26,
                                               v70,
                                               (__int64)&v81);
  v67 = PathModalityForAdapterWithCoreAccessHeld;
  if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      *((_QWORD *)this + 8),
      *(int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      PathModalityForAdapterWithCoreAccessHeld);
    WdLogGlobalForLineNumber = 2549;
  }
  else
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v77,
      v81,
      *((_QWORD *)v71 + 8),
      (__int64)v12);
    v31 = v27;
    v32 = *((_QWORD *)&v77 + 1);
    v67 = DmmSetTimingsOnAdapter(
            (__int64)v12,
            *((__int64 *)&v77 + 1),
            v31,
            1u,
            v10,
            (__int64)v69,
            (__int64)v8,
            (__int64)v85);
    DisplayScenarioJournalSetCommitVidPnStatus(
      340LL * v66 + 8 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL),
      *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v66 + 168);
    if ( v67 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v32,
        *((_QWORD *)this + 8),
        *(int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
        *(unsigned int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
        v67);
      WdLogGlobalForLineNumber = 2584;
      if ( (_BYTE)v77 )
        v78(v79, v32);
    }
    else
    {
      if ( (_BYTE)v77 )
        v78(v79, v32);
      if ( (v10[3] & v10[2]) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2593;
      }
      v33 = v10[2];
      if ( (v33 | v10[10]) != v33 || (v33 & v10[10]) != v10[10] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2599;
      }
      if ( v10[2] != (v10[2] & (*v10 | v10[1])) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2607;
      }
      v34 = v10[3];
      if ( v34 != (*v10 & v34) || (v34 & v10[1]) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2614;
      }
      WdLogSingleEntry5(
        7LL,
        *(int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
        *(unsigned int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
        (unsigned int)v10[2],
        (unsigned int)v10[10],
        (unsigned int)v10[3]);
      WdLogGlobalForLineNumber = 2621;
      v35 = 0;
      v36 = v12[395];
      if ( *((_DWORD *)v36 + 24) )
      {
        v37 = v68;
        do
        {
          v38 = 1 << v35;
          if ( ((1 << v35) & v10[21]) != 0 )
          {
            v10[3] |= v38 & *v10;
            CCD_TOPOLOGY::MarkPathsApplyFailure(
              this,
              (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v66),
              v35,
              v10[v35 + 22]);
          }
          else if ( (v38 & v10[1]) != 0 )
          {
            v44 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
            v71 = (const struct _DXGDMM_INTERFACE *)*((_QWORD *)this + 8);
            v45 = 296LL * *(unsigned int *)(v44 + 4 * (v35 + 85LL * v66) + 8);
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v36, v35);
            v47 = *((_QWORD *)this + 8);
            v48 = *(_OWORD *)DisplayModeInfo;
            v49 = *((_DWORD *)DisplayModeInfo + 10);
            v50 = *((_OWORD *)DisplayModeInfo + 1);
            v51 = *((_QWORD *)DisplayModeInfo + 4);
            LODWORD(DisplayModeInfo) = HIDWORD(*((_QWORD *)DisplayModeInfo + 3)) - 2;
            v77 = v48;
            if ( ((unsigned int)DisplayModeInfo & 0xFFFFFFFD) != 0 )
            {
              LODWORD(v77) = *(_DWORD *)(v45 + v47 + 208);
              v52 = *(_DWORD *)(v45 + v47 + 212);
            }
            else
            {
              LODWORD(v77) = *(_DWORD *)(v45 + v47 + 212);
              v52 = *(_DWORD *)(v45 + v47 + 208);
            }
            v53 = v12[395];
            DWORD1(v77) = v52;
            v54 = 4024LL * v35;
            v55 = *((_QWORD *)v53 + 16);
            *(_OWORD *)(v55 + v54 + 644) = v77;
            *(_OWORD *)(v55 + v54 + 660) = v50;
            *(_QWORD *)(v55 + v54 + 676) = v51;
            *(_DWORD *)(v55 + v54 + 684) = v49;
            *(_DWORD *)(*((_QWORD *)v53 + 16) + v54 + 1104) = -1;
            v56 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(v12[395], v35);
            if ( v56 < 0 )
            {
              WdLogSingleEntry4(
                7LL,
                v35,
                *(int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
                *(unsigned int *)(340LL * v66 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                v56);
              WdLogGlobalForLineNumber = 2698;
            }
            if ( v37 || (v38 & v10[2]) != 0 && (v38 & v10[10]) == 0 )
            {
              Global = DXGGLOBAL::GetGlobal();
              do
                v65 = _InterlockedIncrement((volatile signed __int32 *)Global + 348);
              while ( !v65 );
              *(_DWORD *)((char *)v71 + v45 + 244) = v65;
              ADAPTER_DISPLAY::SetDisplayId(v12[395], v35, v65);
            }
            v57 = v71;
            if ( (v38 & v10[17]) != 0 )
              *(_QWORD *)((char *)v71 + v45 + 252) = 0LL;
            v58 = *(_DWORD *)((char *)v57 + v45 + 84);
            v70 = 0;
            v59 = (int)DmmGetTargetLinkTrainingStatus((PERESOURCE *)v12, v58, (enum _DXGK_CONNECTION_STATUS *)&v70) < 0;
            v60 = v71;
            if ( !v59 && v70 == 12 )
              *(_DWORD *)((char *)v71 + v45 + 248) = 259;
            MonitorSetLastWireformatAndColorspace(
              (__int64)v12,
              *(_DWORD *)((char *)v60 + v45 + 84),
              *(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)((char *)v60 + v45 + 260),
              *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)((char *)v60 + v45 + 264));
          }
          if ( ((v10[15] | v10[21]) & v38) != 0 )
            ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource((PERESOURCE **)v12[395], v35);
          v36 = v12[395];
          ++v35;
        }
        while ( v35 < *((_DWORD *)v36 + 24) );
        v8 = v73;
      }
      if ( v68 )
        *((_BYTE *)v36 + 288) = 0;
      DmmHandleSetTimingsResult((DXGADAPTER ***)v12, (struct _DMM_SET_TIMING_RESULT *)v69, (GUID *)v82);
      v67 = 0;
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v87, v39);
  COREACCESS::~COREACCESS((COREACCESS *)v86, v40);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
  if ( BYTE8(v74) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v74 + 136));
    KeLeaveCriticalRegion();
  }
LABEL_40:
  if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v8 + 2), v8);
  v41 = v84 == 0;
LABEL_42:
  v42 = v67;
  if ( !v41 )
    lambda_fe0a1c8bb5d899668299a10802864297_::operator()((__int64)v83);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
  return v42;
}
