/*
 * XREFs of DxgkSetDisplayMode @ 0x1402D1030
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003D3C0 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1400463DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x14004C1C8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400508D0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE@@JQEBE@Z @ 0x140193BAC (-DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1402D290C (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1402D2A50 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D3940 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiPollDisplayChildren @ 0x1403E6480 (DpiPollDisplayChildren.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?IsAllocationPinnableOrNoNeedPin@DXGDEVICE@@QEAAHIPEBVDXGALLOCATION@@@Z @ 0x14042DCDC (-IsAllocationPinnableOrNoNeedPin@DXGDEVICE@@QEAAHIPEBVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkSetDisplayMode(char *Src)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  struct DXGDEVICE *v7; // r14
  __int64 v8; // r9
  int v9; // r15d
  __int64 v10; // r13
  struct DXGALLOCATION *v11; // rax
  unsigned int v12; // edx
  struct DXGADAPTERALLOCATION *v13; // rdi
  unsigned int v14; // r15d
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r14d
  ADAPTER_RENDER **v19; // rcx
  __int64 v20; // rcx
  ADAPTER_RENDER **v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v29; // ebx
  __int64 CurrentProcess; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  bool v36; // zf
  __int64 v37; // rdx
  __int64 v38; // rbx
  void *v39; // rdi
  struct DXGALLOCATION *v40; // [rsp+50h] [rbp-1B8h] BYREF
  int v41; // [rsp+58h] [rbp-1B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-1A8h]
  char v43; // [rsp+68h] [rbp-1A0h]
  struct DXGDEVICE *v44; // [rsp+70h] [rbp-198h] BYREF
  _BYTE v45[16]; // [rsp+78h] [rbp-190h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v46; // [rsp+88h] [rbp-180h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v47; // [rsp+90h] [rbp-178h] BYREF
  struct DXGDEVICE *Srca; // [rsp+98h] [rbp-170h] BYREF
  unsigned int v49; // [rsp+A0h] [rbp-168h]
  char *v50; // [rsp+A8h] [rbp-160h]
  _BYTE v51[24]; // [rsp+B0h] [rbp-158h] BYREF
  struct _KTHREAD **v52; // [rsp+C8h] [rbp-140h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v53; // [rsp+D0h] [rbp-138h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v54[4]; // [rsp+D8h] [rbp-130h] BYREF
  struct _D3DKMT_SETDISPLAYMODE_FLAGS v55[2]; // [rsp+E8h] [rbp-120h] BYREF
  _QWORD v56[2]; // [rsp+F8h] [rbp-110h] BYREF
  __int128 v57; // [rsp+108h] [rbp-100h]
  struct _GUID v58; // [rsp+118h] [rbp-F0h] BYREF
  _BYTE v59[160]; // [rsp+130h] [rbp-D8h] BYREF

  v50 = Src;
  LOBYTE(v46) = 0;
  v58 = 0LL;
  EtwActivityIdControl(3u, &v58);
  DisplayScenarioContextEnsureAndAssociate(&v58, 0x31u, 0, &v47, (unsigned __int8 *)&v46);
  v53 = v47;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v52 = Current;
  if ( Current )
  {
    *(_OWORD *)v54 = 0LL;
    memset(v55, 0, 12);
    v5 = 0LL;
    v49 = 0;
    RtlCopyFromUser(v54, Src, 0x1CuLL);
    Srca = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v54[0], Current, &Srca);
    v7 = Srca;
    if ( Srca )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58, Srca);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v51, (struct DXGPROCESS *)Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v51, 1u);
      DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
        (DXGPROCESSCOPYPROTECTIONMUTEX *)v45,
        (struct DXGPROCESS *)Current);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, (__int64)v7, 1, v8, 0);
      v9 = COREDEVICEACCESS::AcquireExclusive((__int64)v59, 2LL);
      if ( v9 < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v51);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
        v36 = v43 == 0;
        goto LABEL_84;
      }
      v10 = *((_QWORD *)v7 + 237);
      if ( v10 )
      {
        ++*(_DWORD *)(*(_QWORD *)(v10 + 3160) + 424LL);
        DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v40, v54[1]);
        v11 = v40;
        if ( v40 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 1) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) )
          {
            WdLogSingleEntry3(2LL, v7, v40, -1073741811LL);
            WdLogGlobalForLineNumber = 6527;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              (__int64)v7,
              (__int64)v40,
              -1073741811LL,
              0LL,
              0LL);
            DmmCacheInvalidDisplayModeChangeRequest(v10, (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
LABEL_51:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v40);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v51);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
            goto LABEL_52;
          }
          v12 = *(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL);
          if ( (v12 & 1) == 0 )
          {
            WdLogSingleEntry5(2LL, -1073741811LL, v7, (unsigned int)v54[1], v40, (v12 >> 6) & 0xF);
            WdLogGlobalForLineNumber = 6542;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"ret = 0x%I64x Device 0x%I64x: Only primary can be used 0x%I64x 0x%I64x 0x%I64x",
              -1073741811LL,
              (__int64)v7,
              (unsigned int)v54[1],
              (__int64)v40,
              (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
            DmmCacheInvalidDisplayModeChangeRequest(v10, (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v40);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v51);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
LABEL_52:
            v22 = (ADAPTER_RENDER **)v44;
            if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(v22[2], (struct DXGDEVICE *)v22);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
            goto LABEL_56;
          }
          if ( v10 != *((_QWORD *)v7 + 237) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6553;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter == pDevice->GetDisplayAdapter(PrimaryAllocationReference.m_pAllocation->m_pAlloca"
                        "tion->m_VidPnSourceId)",
              6553LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v11 = v40;
          }
          if ( (unsigned int)(v54[2] - 1) > 2 )
          {
            WdLogSingleEntry3(2LL, -1073741811LL, v7, v54[2]);
            WdLogGlobalForLineNumber = 6560;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"ret = 0x%I64x Device 0x%I64x: Invalid ScanLineOrdering specified 0x%I64x",
              -1073741811LL,
              (__int64)v7,
              v54[2],
              0LL,
              0LL);
            v37 = (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF;
          }
          else
          {
            if ( (unsigned int)(v54[3] - 1) <= 3 )
            {
              if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(ADAPTER_DISPLAY **)(v10 + 3160),
                     v7,
                     (*(_DWORD *)(*((_QWORD *)v11 + 6) + 4LL) >> 6) & 0xF) )
              {
                if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                      *(ADAPTER_DISPLAY **)(v10 + 3160),
                                      (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF) == 2
                   || *((_DWORD *)v7 + 116) == 1)
                  && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
                       *(ADAPTER_DISPLAY **)(v10 + 3160),
                       (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF,
                       0) )
                {
                  v9 = -1071774910;
                  WdLogSingleEntry5(
                    7LL,
                    -1071774910LL,
                    v7,
                    (unsigned int)v54[1],
                    v40,
                    (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
                  WdLogGlobalForLineNumber = 6611;
                }
                else
                {
                  if ( ADAPTER_DISPLAY::IsPartOfDesktop(
                         *(ADAPTER_DISPLAY **)(v10 + 3160),
                         (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF) )
                  {
                    if ( *((struct DXGDEVICE **)v40 + 1) == v7 )
                    {
                      if ( *((_DWORD *)v7 + 116) == 1 )
                      {
                        v13 = (struct DXGADAPTERALLOCATION *)*((_QWORD *)v40 + 6);
                        v14 = (*((_DWORD *)v13 + 1) >> 6) & 0xF;
                        LODWORD(Srca) = v14;
                        if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v10 + 3160), v14, 0) != v13
                          && !(unsigned int)DXGDEVICE::IsAllocationPinnableOrNoNeedPin(v7, v14, v40) )
                        {
                          WdLogSingleEntry5(
                            7LL,
                            -1073741811LL,
                            v7,
                            (unsigned int)v54[1],
                            v40,
                            (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
                          WdLogGlobalForLineNumber = 6670;
                          DmmCacheInvalidDisplayModeChangeRequest(
                            v10,
                            (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
                          DxgCreateLiveDumpWithWdLogs(403LL, 2056LL);
                          goto LABEL_51;
                        }
                        v15 = DXGDEVICE::PinPrimaryAllocations(v7, v14);
                        v9 = v15;
                        if ( v15 < 0 )
                        {
                          WdLogSingleEntry5(7LL, v15, v7, (unsigned int)v54[1], v40, (unsigned int)Srca);
                          WdLogGlobalForLineNumber = 6695;
                        }
LABEL_26:
                        WdLogSingleEntry2(7LL, (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF, v10);
                        WdLogGlobalForLineNumber = 6714;
                        if ( v9 >= 0 )
                        {
                          LODWORD(Srca) = 0;
                          if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304896) )
                            *((_BYTE *)v55 + 4) |= 1u;
                          v16 = DXGDEVICE::SetDisplayMode(
                                  v7,
                                  v40,
                                  v54[2],
                                  (enum _D3DDDI_ROTATION)v54[3],
                                  *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)((char *)v55 + 4),
                                  (unsigned int *)&Srca,
                                  v53);
                          v9 = v16;
                          if ( v16 == -1071774891 )
                          {
                            RtlCopyToUser(v50 + 16, &Srca, 4uLL);
                            v18 = v49;
                            goto LABEL_36;
                          }
                          if ( v16 >= 0 )
                          {
                            v17 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                                    *(ADAPTER_DISPLAY **)(v10 + 3160),
                                    (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
                            if ( v17 < 0 )
                            {
                              v38 = v17;
                              WdLogSingleEntry3(2LL, v10, (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF, v17);
                              WdLogGlobalForLineNumber = 6750;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000,
                                -1,
                                (__int64)L"Failed in restoring copy protection on VidPnSourceId 0x%I64x on DXGADAPTER 0x%I"
                                          "64x (status = 0x%I64x)",
                                v10,
                                (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF,
                                v38,
                                0LL,
                                0LL);
                            }
                            v56[0] = 7LL;
                            v56[1] = 0LL;
                            v57 = 0LL;
                            if ( (int)DxgkStatusChangeNotify(v56) < 0 )
                            {
                              WdLogSingleEntry0(1LL);
                              WdLogGlobalForLineNumber = 6758;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                262146,
                                -1,
                                (__int64)L"NT_SUCCESS(NotificationStatus)",
                                6758LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                            }
                            v5 = *(_QWORD *)(v10 + 412);
                            v18 = (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF;
                            goto LABEL_36;
                          }
                        }
                        v18 = v49;
LABEL_36:
                        if ( v9 == -1071774920 )
                        {
                          v39 = *(void **)(v10 + 216);
                          ObfReferenceObject(v39);
                          WdLogSingleEntry1(7LL);
                          WdLogGlobalForLineNumber = 6775;
                          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v59);
                          DpiPollDisplayChildren(v39, 4LL, v53);
                          ObfDereferenceObject(v39);
                        }
                        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v40);
                        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
                        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
                        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v51);
                        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
                        v19 = (ADAPTER_RENDER **)v44;
                        if ( v44
                          && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        {
                          ADAPTER_RENDER::DestroyDeviceNoLocks(v19[2], (struct DXGDEVICE *)v19);
                        }
                        if ( v9 >= 0 && (*((int (__fastcall **)(__int64, _QWORD))v52[11] + 53))(v5, v18) < 0 )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 6791;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"NT_SUCCESS(_Status)",
                            6791LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
                        if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                          McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
                        if ( (_BYTE)v46 )
                          DisplayScenarioContextDissociate(&v47);
                        return (unsigned int)v9;
                      }
                      v24 = *(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL);
                      if ( (v24 & 0x10) == 0 )
                        goto LABEL_26;
                      WdLogSingleEntry5(7LL, -1071775482LL, v7, (unsigned int)v54[1], v40, (v24 >> 6) & 0xF);
                      WdLogGlobalForLineNumber = 6702;
                      DmmCacheInvalidDisplayModeChangeRequest(v10, (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v40);
                      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
                      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
                      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v51);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
                      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
                      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
                      if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
                      v9 = -1071775482;
LABEL_68:
                      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v46);
                      return (unsigned int)v9;
                    }
                    WdLogSingleEntry5(2LL, -1073741811LL, v7, (unsigned int)v54[1], v40, *((_QWORD *)v40 + 1));
                    WdLogGlobalForLineNumber = 6642;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"ret = 0x%I64x Device 0x%I64x: Primary (0x%I64x 0x%I64x) must be on allocated on the speci"
                                "fied device (0x%I64x)",
                      -1073741811LL,
                      (__int64)v7,
                      (unsigned int)v54[1],
                      (__int64)v40,
                      *((_QWORD *)v40 + 1));
                    DmmCacheInvalidDisplayModeChangeRequest(v10, (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
                    DxgCreateLiveDumpWithWdLogs(403LL, 2055LL);
                    goto LABEL_89;
                  }
                  v9 = -1071774972;
                  WdLogSingleEntry5(
                    7LL,
                    -1071774972LL,
                    v7,
                    (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF,
                    (unsigned int)v54[1],
                    v40);
                  WdLogGlobalForLineNumber = 6627;
                }
              }
              else
              {
                v9 = -1071775744;
                WdLogSingleEntry5(
                  7LL,
                  -1071775744LL,
                  v7,
                  (unsigned int)v54[1],
                  v40,
                  (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
                WdLogGlobalForLineNumber = 6593;
              }
              DmmCacheInvalidDisplayModeChangeRequest(v10, (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v40);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v51);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
              v36 = v43 == 0;
LABEL_84:
              if ( !v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit);
              goto LABEL_68;
            }
            WdLogSingleEntry3(2LL, -1073741811LL, v7, v54[3]);
            WdLogGlobalForLineNumber = 6577;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"ret = 0x%I64x Device 0x%I64x: Invalid DisplayOrientation specified 0x%I64x",
              -1073741811LL,
              (__int64)v7,
              v54[3],
              0LL,
              0LL);
            v37 = (*(_DWORD *)(*((_QWORD *)v40 + 6) + 4LL) >> 6) & 0xF;
          }
        }
        else
        {
          WdLogSingleEntry3(2LL, -1073741811LL, v7, (unsigned int)v54[1]);
          WdLogGlobalForLineNumber = 6512;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"ret = 0x%I64x Device 0x%I64x: Invalid primary specified: 0x%I64x",
            -1073741811LL,
            (__int64)v7,
            (unsigned int)v54[1],
            0LL,
            0LL);
          v37 = 0xFFFFFFFFLL;
        }
        DmmCacheInvalidDisplayModeChangeRequest(v10, v37);
LABEL_89:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v40);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v51);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
LABEL_90:
        if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
        v9 = -1073741811;
        goto LABEL_68;
      }
      WdLogSingleEntry2(2LL, v7, -1073741811LL);
      WdLogGlobalForLineNumber = 6499;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Set display mode on render only device 0x%I64x, returning 0x%I64x.",
        (__int64)v7,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v51);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
    }
    else
    {
      v29 = v54[0];
      CurrentProcess = PsGetCurrentProcess(v6);
      WdLogSingleEntry3(2LL, -1073741811LL, CurrentProcess, (unsigned int)v29);
      WdLogGlobalForLineNumber = 6465;
      v31 = (unsigned int)v54[0];
      v33 = PsGetCurrentProcess(v32);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x returned due to an invalid device handle 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        v33,
        v31,
        0LL,
        0LL);
    }
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    goto LABEL_90;
  }
  v26 = PsGetCurrentProcess(v3);
  WdLogSingleEntry2(2LL, -1073741811LL, v26);
  WdLogGlobalForLineNumber = 6435;
  v28 = PsGetCurrentProcess(v27);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x 0x%I64x encountered exception",
    -1073741811LL,
    v28,
    0LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
LABEL_56:
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
  if ( (_BYTE)v46 )
    DisplayScenarioContextDissociate(&v47);
  return 3221225485LL;
}
