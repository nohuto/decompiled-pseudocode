/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14035948C (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140010BA4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002EBE4 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003D3C0 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004B4C4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x14006B684 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x14018DED4 (-VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x14018EE28 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1402D0A10 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2480 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140330244 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkDestroyClientAllocation @ 0x1403731B8 (DxgkDestroyClientAllocation.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A928C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1403AA578 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403F0E40 (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1403F3714 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1403FA184 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x14042F984 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x140432540 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *a2,
        char *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        unsigned int a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        char *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        unsigned __int8 a11)
{
  char *v11; // r15
  struct DXGPROCESS *v13; // r12
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v14; // ebx
  const unsigned int **v15; // rdx
  unsigned int v16; // r12d
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  __int64 v21; // rdi
  const char *v22; // rdx
  __int64 v23; // rcx
  struct DXGRESOURCE *v24; // r15
  const struct DXGALLOCATION *v25; // rdi
  unsigned int v26; // edx
  __int64 v27; // r13
  int v28; // r15d
  unsigned int v29; // r15d
  volatile signed __int64 *v30; // rax
  volatile signed __int64 *v31; // rdi
  __int64 v32; // r9
  const char *v33; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // edi
  struct DXGDEVICE *v42; // r13
  __int64 v43; // r12
  struct DXGRESOURCE *v44; // rdi
  struct DXGALLOCATION *v45; // rdi
  unsigned int v46; // edx
  int v47; // ecx
  ADAPTER_DISPLAY *v48; // rcx
  int v49; // r12d
  struct DXGALLOCATION *v50; // rdi
  unsigned int v51; // edx
  unsigned int v52; // edx
  int v53; // ecx
  ADAPTER_DISPLAY *v54; // rcx
  unsigned __int8 v55; // cl
  unsigned __int8 v56; // r12
  DXGADAPTER *v57; // r15
  char *v58; // rcx
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // eax
  __int64 v63; // r15
  __int64 v64; // r15
  DXGADAPTER *v65; // rax
  volatile signed __int32 *v66; // rdi
  unsigned int v67; // edi
  struct ADAPTER_RENDER *v68; // rdx
  struct DXGALLOCATION *v69; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  DXGADAPTER **v71; // r9
  unsigned int v72; // edx
  DXGADAPTER *v73; // r8
  char v74; // r8
  int v75; // ecx
  __int64 v76; // rcx
  DXGADAPTER *v77; // rbx
  char *v78; // rcx
  unsigned int v79; // ebx
  struct DXGPROCESS *v80; // rdi
  bool v81; // zf
  unsigned int v82; // ebx
  struct DXGPROCESS *v83; // rdi
  DXGGLOBAL *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  struct DXGSESSIONDATA *v88; // rbx
  int v89; // eax
  __int64 v90; // rdi
  __int64 v91; // rcx
  const char *v92; // rdx
  DXGDODPRESENT *v93; // rcx
  unsigned int j; // ebx
  struct DXGRESOURCE *v95; // r9
  unsigned __int8 v96; // bl
  DXGADAPTER *v97; // rdi
  char *v98; // rcx
  char v99; // r12
  void (__fastcall *v100)(_QWORD, _QWORD); // rax
  __int64 v101; // rax
  __int64 v102; // rbx
  DXGADAPTER *v103; // r14
  char *v104; // rcx
  DXGGLOBAL *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  struct DXGSESSIONDATA *v109; // rbx
  bool v110; // [rsp+50h] [rbp-328h] BYREF
  unsigned __int8 v111; // [rsp+51h] [rbp-327h] BYREF
  char v112; // [rsp+52h] [rbp-326h]
  bool v113; // [rsp+53h] [rbp-325h]
  char i; // [rsp+54h] [rbp-324h]
  unsigned __int8 v115; // [rsp+55h] [rbp-323h]
  unsigned __int8 v116; // [rsp+56h] [rbp-322h]
  unsigned int v117; // [rsp+58h] [rbp-320h]
  unsigned __int8 v118[4]; // [rsp+5Ch] [rbp-31Ch] BYREF
  unsigned int v119; // [rsp+60h] [rbp-318h]
  struct DXGPROCESS *v120; // [rsp+68h] [rbp-310h]
  struct DXGRESOURCE *v121; // [rsp+70h] [rbp-308h] BYREF
  struct DXGALLOCATION *v122; // [rsp+78h] [rbp-300h]
  __int64 v123; // [rsp+80h] [rbp-2F8h]
  DXGADAPTER *v124; // [rsp+88h] [rbp-2F0h]
  __int128 v125; // [rsp+90h] [rbp-2E8h] BYREF
  struct DXGALLOCATION **v126; // [rsp+A0h] [rbp-2D8h]
  __int128 v127; // [rsp+A8h] [rbp-2D0h] BYREF
  struct DXGDEVICE *v128; // [rsp+B8h] [rbp-2C0h]
  unsigned int v129; // [rsp+C0h] [rbp-2B8h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v130; // [rsp+C8h] [rbp-2B0h]
  _BYTE v131[16]; // [rsp+D0h] [rbp-2A8h] BYREF
  PERESOURCE *v132; // [rsp+E0h] [rbp-298h] BYREF
  char v133[16]; // [rsp+E8h] [rbp-290h] BYREF
  __int64 v134; // [rsp+F8h] [rbp-280h]
  _BYTE v135[88]; // [rsp+128h] [rbp-250h] BYREF
  __int64 v136; // [rsp+180h] [rbp-1F8h] BYREF
  struct DXGPROCESS *v137; // [rsp+188h] [rbp-1F0h]
  __int128 v138; // [rsp+190h] [rbp-1E8h]
  __int128 v139; // [rsp+1A0h] [rbp-1D8h]
  __int128 v140; // [rsp+1B0h] [rbp-1C8h]
  __int128 v141; // [rsp+1C0h] [rbp-1B8h]
  __int128 v142; // [rsp+1D0h] [rbp-1A8h]
  __int128 v143; // [rsp+1E0h] [rbp-198h]
  __int128 v144; // [rsp+1F0h] [rbp-188h]
  __int128 v145; // [rsp+200h] [rbp-178h]
  __int128 v146; // [rsp+210h] [rbp-168h]
  __int128 v147; // [rsp+220h] [rbp-158h]
  __int128 v148; // [rsp+230h] [rbp-148h]
  __int128 v149; // [rsp+240h] [rbp-138h]
  __int128 v150; // [rsp+250h] [rbp-128h]
  __int128 v151; // [rsp+260h] [rbp-118h]
  __int128 v152; // [rsp+270h] [rbp-108h]
  __int128 v153; // [rsp+280h] [rbp-F8h]
  __int128 v154; // [rsp+290h] [rbp-E8h]
  __int128 v155; // [rsp+2A0h] [rbp-D8h]
  __int128 v156; // [rsp+2B0h] [rbp-C8h]
  __int128 v157; // [rsp+2C0h] [rbp-B8h]
  __int128 v158; // [rsp+2D0h] [rbp-A8h]
  __int128 v159; // [rsp+2E0h] [rbp-98h]
  __int128 v160; // [rsp+2F0h] [rbp-88h]
  __int128 v161; // [rsp+300h] [rbp-78h]
  __int128 v162; // [rsp+310h] [rbp-68h]
  unsigned int v163; // [rsp+320h] [rbp-58h]

  v126 = a4;
  v11 = a3;
  v13 = a1;
  v120 = a1;
  v14.0 = a8.0;
  v15 = a6;
  v128 = (struct DXGDEVICE *)a6;
  v130 = a10;
  if ( a11 )
  {
    v16 = 0;
    v129 = 0;
    while ( v16 < a7 )
    {
      *(_DWORD *)&v11[4 * v16] = RtlReadULongFromUser((unsigned int *)&a9[4 * v16]);
      v129 = ++v16;
    }
    v15 = (const unsigned int **)v128;
    *(_QWORD *)v128 = v11;
    v13 = v120;
    a4 = v126;
  }
  else if ( a7 )
  {
    v17 = a7;
    do
    {
      *(_DWORD *)v11 = *(_DWORD *)&v11[a9 - a3];
      v11 += 4;
      --v17;
    }
    while ( v17 );
  }
  v121 = 0LL;
  v18 = ValidateDestroyAllocation(v13, a2, a5, *v15, a7, a4, &v121);
  if ( v18 == 255 )
    return 0LL;
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 9927;
    return 3221225485LL;
  }
  v21 = *((_QWORD *)a2 + 237);
  v123 = v21;
  i = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v136, (__int64)a2, 2, v19, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v136, v22);
    v23 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( (*(int *)(v23 + 2776) >= 0x2000 || *(_BYTE *)(v23 + 3076)) && *((_DWORD *)a2 + 116) == 1 )
    {
      v24 = v121;
      if ( v121 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v127, (struct DXGRESOURCE *)((char *)v121 + 80), 0);
        if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v127);
        v25 = (const struct DXGALLOCATION *)*((_QWORD *)v24 + 3);
        for ( i = 1; v25; v25 = (const struct DXGALLOCATION *)*((_QWORD *)v25 + 8) )
        {
          v26 = *(_DWORD *)(*((_QWORD *)v25 + 6) + 4LL);
          if ( (v26 & 1) == 0
            || *((_QWORD *)a2 + 237) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
            || v25 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, (v26 >> 6) & 0xF) )
          {
            i = 0;
          }
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v127);
        v21 = v123;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v136);
  }
  if ( v21 )
  {
    v27 = *(_QWORD *)(v21 + 3160);
    *(_QWORD *)&v125 = v27;
  }
  else
  {
    v27 = 0LL;
    *(_QWORD *)&v125 = 0LL;
  }
  v136 = v27;
  v137 = v13;
  if ( v27 )
    v28 = *(_DWORD *)(v27 + 96);
  else
    v28 = 0;
  v29 = 8 * v28;
  v163 = v29;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v30 = *(volatile signed __int64 **)(*((_QWORD *)a2 + 2) + 16LL);
  v124 = (DXGADAPTER *)v30;
  _InterlockedIncrement64(v30 + 3);
  v31 = v30 + 17;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v31, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v31 + 4);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v132, (__int64)a2, 2, v32, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v132, v33);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 4 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 9998;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v132);
    _InterlockedDecrement((volatile signed __int32 *)v31 + 4);
    ExReleasePushLockSharedEx(v31, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(v124);
    if ( (v29 & 4) == 0 )
    {
LABEL_36:
      if ( (v29 & 2) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v13 + 11) + 200LL))(*(_QWORD *)(v27 + 16), v29 >> 3);
        LOBYTE(v29) = v29 & 0xFD;
      }
      if ( (v29 & 1) == 0 )
        return 0LL;
      Global = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(Global, v35, v36, v37);
      v39 = *((_QWORD *)v13 + 11);
      goto LABEL_208;
    }
LABEL_35:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 270;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(FALSE == m_u.s.bStateSaved)", 270LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_36;
  }
  if ( *((_DWORD *)a2 + 152) == 4 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 10003;
    DxgkDestroyClientAllocation(v40, a2, a7, v126, v121);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v132);
    _InterlockedDecrement((volatile signed __int32 *)v31 + 4);
    ExReleasePushLockSharedEx(v31, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(v124);
    if ( (v29 & 4) == 0 )
      goto LABEL_36;
    goto LABEL_35;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v116 = 0;
  v111 = 0;
  v112 = 0;
  v115 = 0;
  v113 = 0;
  v119 = 0;
  v122 = 0LL;
  v41 = -1;
  v117 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v110);
  v42 = 0LL;
  v128 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131, v13);
  v43 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  *(_QWORD *)&v127 = v43;
  if ( v121 )
  {
    v44 = v121;
    if ( *((struct DXGDEVICE **)v121 + 1) != a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10034;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pResource->m_pDevice == pDevice",
        10034LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v127, (struct DXGRESOURCE *)((char *)v44 + 80), 0);
    if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v127);
    v45 = (struct DXGALLOCATION *)*((_QWORD *)v44 + 3);
    if ( v45 )
    {
      while ( 1 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v45 + 6) + 4LL) & 1)
           + ((*(_DWORD *)(*((_QWORD *)v45 + 6) + 4LL) >> 1) & 1)
           + ((*(_DWORD *)(*((_QWORD *)v45 + 6) + 4LL) >> 13) & 1u) > 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10049;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pCurrentAlloc->m_pAllocation->m_Primary ? 1 : 0) + (pCurrentAlloc->m_pAllocation->m_CddPrimary ? 1"
                      " : 0) + (pCurrentAlloc->m_pAllocation->m_DirectFlip ? 1 : 0) <= 1",
            10049LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v46 = *(_DWORD *)(*((_QWORD *)v45 + 6) + 4LL);
        if ( (v46 & 1) != 0 )
        {
          if ( (v47 = *((_DWORD *)a2 + ((v46 >> 6) & 0xF) + 310), (_BYTE)v47)
            && (*((_DWORD *)a2 + 116) != 1 || (v47 & 0x100) != 0)
            || v43
            && (v48 = *(ADAPTER_DISPLAY **)(v43 + 3160)) != 0LL
            && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v48, (v46 >> 6) & 0xF) )
          {
            if ( !i )
            {
              v112 = 1;
              v122 = v45;
              v41 = (*(_DWORD *)(*((_QWORD *)v45 + 6) + 4LL) >> 6) & 0xF;
              v117 = v41;
              v119 = 1 << v41;
              v113 = 0;
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v127);
              goto LABEL_89;
            }
          }
        }
        if ( (*(_DWORD *)(*((_QWORD *)v45 + 6) + 4LL) & 2) != 0 )
          break;
        v45 = (struct DXGALLOCATION *)*((_QWORD *)v45 + 8);
        if ( !v45 )
          goto LABEL_63;
      }
      v115 = 1;
    }
LABEL_63:
    v41 = -1;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v127);
  }
  else if ( a7 )
  {
    v49 = 0;
    while ( 1 )
    {
      v50 = v126[v49];
      if ( !v50 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10079;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pCurrentAlloc != NULL", 10079LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((struct DXGDEVICE **)v50 + 1) != a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10080;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_pDevice == pDevice",
          10080LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v127 + 420) == 1297040209 )
      {
        v51 = *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL);
        if ( (v51 & 8) != 0 )
          break;
      }
      v52 = *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL);
      if ( (v52 & 1) != 0
        && ((v53 = *((_DWORD *)a2 + ((v52 >> 6) & 0xF) + 310), (_BYTE)v53)
         && (*((_DWORD *)a2 + 116) != 1 || (v53 & 0x100) != 0)
         || (_QWORD)v127
         && (v54 = *(ADAPTER_DISPLAY **)(v127 + 3160)) != 0LL
         && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v54, (v52 >> 6) & 0xF)) )
      {
        v112 = 1;
        v113 = v122 != 0LL;
        v122 = v50;
        v41 = (*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) >> 6) & 0xF;
        v117 = v41;
        v119 |= 1 << v41;
      }
      else
      {
        v41 = v117;
      }
      if ( ++v49 >= a7 )
        goto LABEL_89;
    }
    v116 = 1;
    if ( DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)a2, (v51 >> 6) & 0xF, v50) )
    {
      v111 = 1;
      v112 = 1;
      v113 = v122 != 0LL;
      v122 = v50;
      v41 = (*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) >> 6) & 0xF;
      v117 = v41;
      v119 |= 1 << v41;
    }
    else
    {
      v41 = v117;
    }
  }
LABEL_89:
  v55 = 0;
  if ( (*((_DWORD *)v120 + 102) & 0x100) == 0 )
    v55 = v112;
  v56 = v55;
  WdLogSingleEntry5(8LL, v55, v116, v111, v115, v41);
  WdLogGlobalForLineNumber = 10129;
  if ( !v56 )
  {
    if ( i )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v123 + 3160),
        a2,
        *((struct DXGALLOCATION **)v121 + 3),
        (struct COREDEVICEACCESS *)&v132);
LABEL_155:
    if ( v115 || v116 )
    {
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v134 + 184)
        && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v134 + 168)) )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v132);
      }
      if ( v111 )
      {
        v89 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v123 + 3160), v41, 0, 0x10u, 0);
        if ( v89 < 0 )
        {
          v90 = v89;
          WdLogSingleEntry2(2LL, v117, v89);
          WdLogGlobalForLineNumber = 10368;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"SetVidPnSourceVisibility(0x%I64x) failed with status 0x%I64x",
            v117,
            v90,
            0LL,
            0LL,
            0LL);
        }
      }
      v91 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      if ( *(_BYTE *)(v91 + 209) )
      {
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice((struct DXG_VMBUS_CHANNEL_BASE *)(v91 + 4712), (__int64)a2, 6);
      }
      else
      {
        v127 = 0LL;
        DXGPUSHLOCK::AcquireExclusive((struct DXGDEVICE *)((char *)a2 + 272));
        LODWORD(v127) = 5;
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                                + 736LL)
                                                                                    + 8LL)
                                                                        + 152LL))(
               *((_QWORD *)a2 + 100),
               &v127,
               4294967293LL,
               0LL) < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6033;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(FlushStatus)", 6033LL, 0LL, 0LL, 0LL, 0LL);
        }
        *((_QWORD *)a2 + 35) = 0LL;
        ExReleasePushLockExclusiveEx((char *)a2 + 272, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v134 + 184)
        && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v134 + 168)) )
      {
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v132, v92);
      }
      if ( v123 )
      {
        if ( !*(_QWORD *)(v123 + 3168) )
        {
          v93 = *(DXGDODPRESENT **)(*(_QWORD *)(v123 + 3160) + 464LL);
          if ( v93 )
            DXGDODPRESENT::Flush(v93);
        }
      }
    }
    DXGDEVICE::DestroyAllocationInternal(a2, a7, v126, v121, &v132, v14);
    if ( v115 )
    {
      for ( j = 0; j < *((_DWORD *)a2 + 476); ++j )
      {
        v95 = (struct DXGRESOURCE *)*((_QWORD *)a2 + j + 83);
        if ( v95 && *((_BYTE *)a2 + j + 648) )
        {
          DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, v95, &v132, DXGDEVICE::DestroyFlagsDefault);
          *((_BYTE *)a2 + j + 648) = 0;
        }
      }
    }
    v96 = 0;
    v111 = 0;
    v118[0] = 0;
    if ( v56 )
    {
      if ( v42 )
      {
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v123 + 3160),
          v42,
          (struct COREDEVICEACCESS *)&v132,
          &v111,
          v118,
          v130);
        v96 = v111;
      }
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)&v136, v96);
      if ( !v42 )
      {
        v29 = v163;
        v80 = v137;
        v102 = v136;
        v99 = 1;
LABEL_199:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v110);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v132);
        if ( v99 )
        {
          v103 = v124;
          v104 = (char *)v124 + 136;
          _InterlockedDecrement((volatile signed __int32 *)v124 + 38);
          ExReleasePushLockSharedEx(v104, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::ReleaseReference(v103);
        }
        if ( (v29 & 4) != 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 270;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(FALSE == m_u.s.bStateSaved)",
            270LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (v29 & 2) != 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v80 + 11) + 200LL))(*(_QWORD *)(v102 + 16), v29 >> 3);
          LOBYTE(v29) = v29 & 0xFD;
        }
        v81 = (v29 & 1) == 0;
LABEL_206:
        if ( v81 )
          return 0LL;
        v105 = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(v105, v106, v107, v108);
        v39 = *((_QWORD *)v80 + 11);
LABEL_208:
        v109 = SessionData;
        (*(void (**)(void))(v39 + 184))();
        *((_QWORD *)v109 + 2409) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v109 + 19264, 0LL);
        KeLeaveCriticalRegion();
        return 0LL;
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v132);
      v97 = v124;
      v98 = (char *)v124 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v124 + 38);
      ExReleasePushLockSharedEx(v98, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v97);
      v99 = 0;
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v131);
      *((_BYTE *)v42 + 1953) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
      if ( v110 )
      {
        v110 = 0;
        DxgkReleaseSessionModeChangeLock();
      }
      v29 = v163;
      v120 = v137;
      if ( (v163 & 2) != 0 )
      {
        v100 = *(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v137 + 11) + 200LL);
        *(_QWORD *)&v125 = v136;
        v100(*(_QWORD *)(v136 + 16), v163 >> 3);
        v29 &= ~2u;
      }
      else
      {
        *(_QWORD *)&v125 = v136;
      }
      if ( v96 )
      {
        if ( v118[0] )
        {
          v101 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL);
          if ( v101 )
            (*(void (**)(void))(v101 + 216))();
        }
      }
    }
    else
    {
      v99 = 1;
    }
    v102 = v125;
    v80 = v120;
    goto LABEL_199;
  }
  if ( !v123 || !*(_QWORD *)(v123 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10134;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      10134LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v132);
  v57 = v124;
  v58 = (char *)v124 + 136;
  _InterlockedDecrement((volatile signed __int32 *)v124 + 38);
  ExReleasePushLockSharedEx(v58, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::ReleaseReference(v57);
  v60 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(int *)(v60 + 3044) > 2200 )
  {
    LOBYTE(v59) = 1;
    v61 = v41;
    if ( ((v119 - 1) & v119) != 0 )
      v61 = 4294967293LL;
    DXGDEVICE::FlushScheduler(a2, 5LL, v61, v59);
  }
  else if ( *(_BYTE *)(v60 + 209) )
  {
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice((struct DXG_VMBUS_CHANNEL_BASE *)(v60 + 4712), (__int64)a2, 5);
  }
  else
  {
    v125 = 0LL;
    DXGPUSHLOCK::AcquireExclusive((struct DXGDEVICE *)((char *)a2 + 272));
    LODWORD(v125) = 3;
    if ( (*(int (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 736LL)
                                                                                + 8LL)
                                                                    + 152LL))(
           *((_QWORD *)a2 + 100),
           &v125,
           4294967293LL,
           0LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6033;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(FlushStatus)", 6033LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)a2 + 35) = 0LL;
    ExReleasePushLockExclusiveEx((char *)a2 + 272, 0LL);
    KeLeaveCriticalRegion();
  }
  v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v14.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)&v136);
  v62 = DxgkAcquireSessionModeChangeLock(1);
  v63 = v62;
  v110 = v62 >= 0;
  if ( v62 >= 0 )
  {
    v64 = v123;
    if ( (int)DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v123 + 412), 0) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 10212;
    }
    v42 = v128;
    if ( v128 )
    {
      if ( *((_QWORD *)v128 + 2) == *((_QWORD *)a2 + 2) )
      {
        *((_BYTE *)v128 + 1953) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v131);
      }
      else
      {
        v42 = 0LL;
      }
    }
    v65 = v124;
    _InterlockedIncrement64((volatile signed __int64 *)v124 + 3);
    v66 = (volatile signed __int32 *)((char *)v65 + 136);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v66, 0LL);
    _InterlockedIncrement(v66 + 4);
    if ( v135[72] )
      COREACCESS::AcquireExclusive((__int64)v135, 2u, 0);
    COREACCESS::AcquireExclusive((__int64)v133, 2u, 0);
    if ( *((_DWORD *)a2 + 152) == 4 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 10247;
      if ( v42 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v131);
        *((_BYTE *)v42 + 1953) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
      }
      DxgkDestroyClientAllocation(v76, a2, a7, v126, v121);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v110);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v132);
      v77 = v124;
      v78 = (char *)v124 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v124 + 38);
      ExReleasePushLockSharedEx(v78, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v77);
      v79 = v163;
      if ( (v163 & 4) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 270;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(FALSE == m_u.s.bStateSaved)", 270LL, 0LL, 0LL, 0LL, 0LL);
      }
      v80 = v137;
      if ( (v79 & 2) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v137 + 11) + 200LL))(*(_QWORD *)(v136 + 16), v79 >> 3);
        LOBYTE(v79) = v79 & 0xFD;
      }
      v81 = (v79 & 1) == 0;
      goto LABEL_206;
    }
    v67 = v119;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)&v136, a2, v119);
    v68 = (struct ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 237) != *((_QWORD *)v68 + 2) )
      goto LABEL_117;
    if ( ((v67 - 1) & v67) != 0 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries(*(ADAPTER_DISPLAY **)(v64 + 3160), v68);
LABEL_117:
      v41 = v117;
LABEL_118:
      v29 = v163;
      v120 = v137;
      *(_QWORD *)&v125 = v136;
      goto LABEL_155;
    }
    if ( v113 )
    {
      v41 = v117;
      if ( v117 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10307;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"VidpnSourceInvolved != D3DDDI_ID_UNINITIALIZED",
          10307LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v64 + 3160), a2, v41, 0);
      goto LABEL_118;
    }
    v69 = v122;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                         *(ADAPTER_DISPLAY **)(v64 + 3160),
                         (*(_DWORD *)(*((_QWORD *)v122 + 6) + 4LL) >> 6) & 0xF);
    if ( !VidPnSourceOwner || VidPnSourceOwner == a2 )
    {
      v71 = *(DXGADAPTER ***)(v64 + 3160);
      v72 = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
      v73 = v71[2];
      if ( *((_QWORD *)v73 + 396) )
      {
        if ( *((int *)v73 + 694) >= 8960 || *((_BYTE *)v73 + 3092) && DXGADAPTER::UsingSetTimingsFromVidPn(v71[2]) )
        {
          v74 = 1;
          goto LABEL_132;
        }
        if ( *((_DWORD *)v73 + 761) == 2200 )
        {
          v74 = 0;
LABEL_132:
          ADAPTER_DISPLAY::DisableMPOPlanes((ADAPTER_DISPLAY *)v71, v72, v74);
        }
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10334;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"PrimaryAllocation->m_pAllocation->m_Primary",
        10334LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v75 = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
    v41 = v117;
    if ( v75 != v117 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10335;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"PrimaryAllocation->m_pAllocation->m_VidPnSourceId == VidpnSourceInvolved",
        10335LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_DISPLAY::DisablePrimaryAllocation(*(PERESOURCE ***)(v64 + 3160), a2, v122);
    goto LABEL_118;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 10196;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
    v63,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v131);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v110);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v132);
  v82 = v163;
  if ( (v163 & 4) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 270;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(FALSE == m_u.s.bStateSaved)", 270LL, 0LL, 0LL, 0LL, 0LL);
  }
  v83 = v137;
  if ( (v82 & 2) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v137 + 11) + 200LL))(*(_QWORD *)(v136 + 16), v82 >> 3);
    LOBYTE(v82) = v82 & 0xFD;
  }
  if ( (v82 & 1) != 0 )
  {
    v84 = DXGGLOBAL::GetGlobal();
    v88 = DXGGLOBAL::GetSessionData(v84, v85, v86, v87);
    (*(void (**)(void))(*((_QWORD *)v83 + 11) + 184LL))();
    *((_QWORD *)v88 + 2409) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v88 + 19264, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v63;
}
