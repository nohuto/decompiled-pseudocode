/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402EAC9C
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9FEC (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403A3850 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1403A392C (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x140007D70 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x14005FCC4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer @ 0x1400638F0 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer.c)
 *     ?VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x140070678 (-VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x140193298 (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1401EFCC8 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVCOREDEVICEACCESS@@@Z @ 0x14022DF4C (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1402A57A4 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E9A40 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140355D6C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x14038F610 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1403A8C98 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403D0248 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1403EE524 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v6; // rax
  PERESOURCE **v7; // r12
  struct DXGALLOCATION *v9; // rdi
  __int64 v11; // rcx
  struct DXGRESOURCE *v12; // r14
  void **v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r13
  struct DXGALLOCATION *v17; // rsi
  struct DXGALLOCATION *v18; // r14
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned int v24; // edx
  unsigned int v25; // edx
  __int64 v26; // rdx
  struct DXGPROCESS *v27; // r13
  DXGPUSHLOCK *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  char v31; // di
  PERESOURCE *v32; // rcx
  const char *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r10
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  PERESOURCE *v39; // rcx
  const char *v40; // rdx
  void *v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rcx
  struct DXGPROCESS *v44; // rax
  int v45; // esi
  struct DXGPROCESS *v46; // rdi
  DXGPUSHLOCK *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  KIRQL CurrentIrql; // al
  __int64 v51; // r12
  struct DXGTHREAD *v52; // rdi
  struct DXGTHREAD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  PERESOURCE **v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rcx
  char v60; // si
  PERESOURCE **v61; // r12
  _QWORD *v62; // r13
  PVOID v63; // rdi
  int v64; // r12d
  _DWORD *v65; // rbx
  __int64 v66; // rbx
  void *v67; // rcx
  void *v68; // rbx
  int v69; // ebx
  _QWORD *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // rax
  volatile signed __int32 *v76; // rcx
  __int64 v77; // rax
  unsigned int v79; // r8d
  __int64 v80; // r9
  const char *v81; // rdx
  int v82; // esi
  int v83; // edi
  struct DXGPROCESS *Current; // rax
  int v85; // edi
  struct DXGPROCESS *v86; // rax
  char *v87; // r12
  char *i; // rdi
  char *v89; // rax
  DXGOVERLAY *v90; // rcx
  KIRQL v91; // al
  DXGADAPTER *v92; // rcx
  __int64 v93; // rax
  int v94; // [rsp+40h] [rbp-150h]
  int v95; // [rsp+48h] [rbp-148h]
  int v96; // [rsp+50h] [rbp-140h]
  int v97; // [rsp+58h] [rbp-138h]
  int v98; // [rsp+60h] [rbp-130h]
  int v99; // [rsp+68h] [rbp-128h]
  int v100; // [rsp+70h] [rbp-120h]
  int v101; // [rsp+78h] [rbp-118h]
  int v102; // [rsp+88h] [rbp-108h]
  int v103; // [rsp+90h] [rbp-100h]
  int v104; // [rsp+98h] [rbp-F8h]
  int v105; // [rsp+A0h] [rbp-F0h]
  int v106; // [rsp+A8h] [rbp-E8h]
  int v107; // [rsp+B0h] [rbp-E0h]
  int v108; // [rsp+B8h] [rbp-D8h]
  int v109; // [rsp+C0h] [rbp-D0h]
  int v110; // [rsp+C8h] [rbp-C8h]
  int v111; // [rsp+D0h] [rbp-C0h]
  int v112; // [rsp+D8h] [rbp-B8h]
  int v113; // [rsp+E0h] [rbp-B0h]
  int v114; // [rsp+E8h] [rbp-A8h]
  char v115; // [rsp+110h] [rbp-80h]
  unsigned int v116; // [rsp+114h] [rbp-7Ch] BYREF
  PVOID Object; // [rsp+118h] [rbp-78h] BYREF
  int v118; // [rsp+120h] [rbp-70h]
  PERESOURCE **v119; // [rsp+128h] [rbp-68h]
  void **v120; // [rsp+130h] [rbp-60h]
  int v121; // [rsp+138h] [rbp-58h] BYREF
  struct DXGALLOCATION *v122; // [rsp+140h] [rbp-50h]
  char v123; // [rsp+148h] [rbp-48h]
  PVOID P; // [rsp+150h] [rbp-40h]
  __int128 v125; // [rsp+158h] [rbp-38h] BYREF
  _DXGKARG_DESTROYALLOCATION v126; // [rsp+168h] [rbp-28h] BYREF
  struct DXGRESOURCE *v127; // [rsp+188h] [rbp-8h]
  _BYTE v128[8]; // [rsp+190h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+198h] [rbp+8h] BYREF
  _BYTE v130[128]; // [rsp+1D0h] [rbp+40h] BYREF

  v6 = *((_QWORD *)this + 2);
  v7 = a5;
  v9 = a4;
  P = a4;
  v118 = a3;
  v11 = *(_QWORD *)(v6 + 16);
  v12 = a2;
  v127 = a2;
  v119 = a5;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1308;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1308LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v130, 0, sizeof(v130));
  if ( ((unsigned __int64)v12 & -(__int64)(a3 != 0)) == 0
    || (v120 = *(void ***)(((unsigned __int64)v12 & -(__int64)(a3 != 0)) + 0x40)) == 0LL )
  {
    v120 = (void **)v130;
  }
  v125 = 0LL;
  if ( v12 && a3 )
  {
    v77 = WdLogNewEntry5_WdTrace(v14, v13);
    *(_QWORD *)(v77 + 24) = v12;
    v14 = *((_QWORD *)v12 + 1);
    v13 = *(void ***)(v14 + 40);
    *(_QWORD *)(v77 + 32) = v13;
    WdLogGlobalForLineNumber = 1351;
  }
  LOBYTE(v13) = 0;
  v115 = 0;
  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v16 + 209) )
  {
    if ( a3 )
    {
      if ( v12 )
      {
        v82 = *((_DWORD *)v12 + 5);
        if ( v82 )
        {
          v83 = *((_DWORD *)this + 118);
          Current = DXGPROCESS::GetCurrent(v14);
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v16 + 4712),
            *((_DWORD *)Current + 122),
            v83,
            v82,
            0,
            0LL,
            a6,
            a5);
          v9 = (struct DXGALLOCATION *)P;
          LOBYTE(v13) = 1;
          *((_DWORD *)v12 + 5) = 0;
          v115 = 1;
        }
      }
    }
  }
  Object = v9;
  v17 = v9;
  if ( v9 )
  {
    v18 = v9;
    v14 = (__int64)v9;
    do
    {
      v18 = (struct DXGALLOCATION *)*((_QWORD *)v18 + 8);
      v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(v19 + 209) )
      {
        if ( !(_BYTE)v13 && (*(_BYTE *)(v14 + 128) & 4) != 0 )
        {
          v85 = *((_DWORD *)this + 118);
          v86 = DXGPROCESS::GetCurrent(v14);
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v19 + 4712),
            *((_DWORD *)v86 + 122),
            v85,
            0,
            1u,
            (struct DXGALLOCATION **)&Object,
            a6,
            v7);
        }
        *((_BYTE *)v17 + 128) &= ~4u;
      }
      v20 = WdLogNewEntry5_WdTrace(v14, v13);
      v21 = 1LL;
      *(_QWORD *)(v20 + 24) = v17;
      *(_QWORD *)(v20 + 32) = *(_QWORD *)(*((_QWORD *)v17 + 1) + 40LL);
      WdLogGlobalForLineNumber = 1400;
      v22 = *(_DWORD *)(*((_QWORD *)v17 + 6) + 4LL);
      if ( (v22 & 1) != 0 )
      {
        v79 = *((_DWORD *)this + 476);
        if ( v79 || (*(_DWORD *)(*((_QWORD *)this + 5) + 408LL) & 0x100) == 0 )
        {
          if ( ((v22 >> 6) & 0xF) >= v79 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1406;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"VidPnSourceId < this->GetNumVidPnSources()",
              1406LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          DXGDEVICE::RemovePrimaryAllocation(this, v17);
        }
      }
      v23 = *(unsigned int *)(*((_QWORD *)v17 + 6) + 4LL);
      if ( (v23 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)&v121,
          (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 856LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v121);
        v87 = (char *)this + 512;
        for ( i = (char *)*((_QWORD *)this + 64); ; i = *(char **)i )
        {
          v89 = 0LL;
          if ( i != v87 )
            v89 = i;
          if ( !v89 )
            break;
          v90 = (DXGOVERLAY *)i;
          if ( i == v87 )
            v90 = 0LL;
          if ( *((struct DXGALLOCATION **)v90 + 6) == v17 )
            DXGOVERLAY::Destroy(v90);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v121);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v121);
        v7 = v119;
      }
      v24 = *(_DWORD *)(*((_QWORD *)v17 + 6) + 4LL);
      if ( (v24 & 0x2000) != 0 && *((_QWORD *)v17 + 3) )
        DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(this, (v24 >> 6) & 0xF, v17);
      v25 = *(_DWORD *)(*((_QWORD *)v17 + 6) + 4LL);
      if ( (v25 & 0x200A) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(this, (v25 >> 6) & 0xF, v17, (struct DXGALLOCATION *)v21);
      v26 = *((_QWORD *)v17 + 3);
      if ( v26 && (*((_DWORD *)v17 + 18) & 0x800) != 0 )
      {
        if ( _bittest((const signed __int32 *)(*((_QWORD *)v17 + 6) + 4LL), 0xDu) )
        {
          v80 = *((_QWORD *)this + 2);
          v116 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v80 + 760)
                                                                                              + 8LL)
                                                                                  + 648LL))(
                 *(_QWORD *)(v80 + 768),
                 v26,
                 &v116) )
          {
            if ( v116 <= 1 && v7 && !DXGADAPTER::IsCoreResourceExclusiveOwner(v7[3]) )
            {
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)v7);
              VIDMM_EXPORT::VidMmWaitOnAllocationPresentQueue(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                *((struct VIDMM_MULTI_ALLOC **)v17 + 3),
                (*(_DWORD *)(*((_QWORD *)v17 + 6) + 4LL) >> 6) & 0xF);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v7, v81);
            }
          }
        }
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
          *((struct VIDMM_MULTI_ALLOC **)v17 + 3));
        *((_DWORD *)v17 + 18) &= ~0x800u;
      }
      v27 = DXGPROCESS::GetCurrent(v23);
      v28 = (struct DXGPROCESS *)((char *)v27 + 248);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v27 + 248, 0LL) )
      {
        DXGPUSHLOCK::LogEvent(v28, v29, v30);
        ExAcquirePushLockExclusiveEx(v28, 0LL);
      }
      *((_QWORD *)v27 + 32) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v27 + 280), *((_DWORD *)v17 + 4));
      DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v17);
      *((_QWORD *)v27 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v28, 0LL);
      KeLeaveCriticalRegion();
      v31 = 0;
      if ( v7 )
      {
        v32 = v7[3];
        if ( KeGetCurrentThread() != (struct _KTHREAD *)v32[23] && !ExIsResourceAcquiredExclusiveLite(v32[21]) )
        {
          v31 = 1;
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v7);
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v17 + 11);
      if ( v31 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v7, v33);
      v34 = *((_QWORD *)v17 + 3);
      v9 = 0LL;
      if ( v34 )
      {
        v35 = *((_QWORD *)this + 2);
        Object = 0LL;
        v36 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v35 + 760) + 8LL)
                                                                          + 152LL))(
                *(_QWORD *)(v35 + 768),
                v34,
                &Object,
                a6.Value);
        if ( v36 < 0 )
        {
          if ( v36 != -1071775486 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1519;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"ntStatus == STATUS_GRAPHICS_ALLOCATION_BUSY",
              1519LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v38 = WdLogNewEntry5_WdTrace(v37, v13);
          *(_QWORD *)(v38 + 24) = *((_QWORD *)this + 99);
          *(_QWORD *)(v38 + 32) = *((_QWORD *)v17 + 3);
          WdLogGlobalForLineNumber = 1521;
          if ( v7 )
          {
            v39 = v7[3];
            if ( KeGetCurrentThread() != (struct _KTHREAD *)v39[23] && !ExIsResourceAcquiredExclusiveLite(v39[21]) )
            {
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)v7);
              if ( Object )
              {
                if ( KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL) == 257 )
                {
                  DXGDEVICE::FlushScheduler(this, 3LL, 4294967293LL, 0LL);
                  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
                }
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 584LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                  *((_QWORD *)v17 + 3),
                  0LL,
                  4LL);
              }
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v7, v40);
            }
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                             + 8LL)
                                                                 + 144LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            *((_QWORD *)v17 + 3),
            0LL,
            a6.Value);
        }
        *((_QWORD *)v17 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation(this, v17);
      }
      v41 = (void *)*((_QWORD *)v17 + 4);
      if ( v41 )
      {
        v13 = v120;
        v120[(unsigned int)v125] = v41;
        LODWORD(v125) = v125 + 1;
        *((_QWORD *)v17 + 4) = 0LL;
      }
      LOBYTE(v13) = v115;
      v17 = v18;
      Object = v18;
      v14 = (__int64)v18;
    }
    while ( v18 );
    v12 = v127;
  }
  if ( (unsigned int)v125 > (unsigned int)v9 )
  {
    v42 = *((_QWORD *)this + 2);
    *((_QWORD *)&v125 + 1) = v120;
    v119 = (PERESOURCE **)*((_QWORD *)this + 77);
    v121 = -1;
    v122 = v9;
    if ( (qword_1401664C0 & 2) != 0 )
    {
      v123 = 1;
      v121 = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerEnter);
    }
    else
    {
      v123 = (char)v9;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v121, 5029);
    v44 = DXGPROCESS::GetCurrent(v43);
    v45 = 0;
    v116 = 0;
    v46 = v44;
    v47 = (DXGPUSHLOCK *)(((unsigned __int64)v44 + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v44 >> 64));
    if ( v47
      && *(struct _KTHREAD **)((((unsigned __int64)v44 + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v44 >> 64))
                             + 8) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1495;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1495LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v46 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v47, 0LL) )
      {
        DXGPUSHLOCK::LogEvent(v47, v48, v49);
        ExAcquirePushLockExclusiveEx(v47, 0LL);
      }
      *((_QWORD *)v47 + 1) = KeGetCurrentThread();
      v116 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v42 + 16), 1);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v42 + 16) + 4852LL), 1u);
    CurrentIrql = KeGetCurrentIrql();
    v51 = CurrentIrql;
    v52 = 0LL;
    if ( CurrentIrql < 2u )
    {
      v53 = DXGTHREAD::GetCurrent();
      v52 = v53;
      if ( v53 )
        v45 = *((_DWORD *)v53 + 12);
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v128,
      *(struct DXGADAPTER **)(v42 + 16));
    LODWORD(Object) = (*(__int64 (__fastcall **)(PERESOURCE **, __int128 *))(*(_QWORD *)(v42 + 16) + 728LL))(
                        v119,
                        &v125);
    if ( v128[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v51 != KeGetCurrentIrql() )
    {
      v91 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, v42, v51, v91);
      WdLogGlobalForLineNumber = 3084;
    }
    if ( v52 )
    {
      v55 = *((int *)v52 + 12);
      if ( (_DWORD)v55 != v45 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v52 + 12), v45, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v42 + 16) + 4852LL));
    v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v55, v54);
    v57 = v119;
    v58 = (int)Object;
    v56[3] = (int)Object;
    v56[4] = v57;
    v56[5] = (unsigned int)v125;
    v56[6] = **((_QWORD **)&v125 + 1);
    WdLogGlobalForLineNumber = 3090;
    if ( (_DWORD)v58 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3092;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v58,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v42 + 16));
    v9 = 0LL;
    if ( v116 == 2 )
    {
      *((_QWORD *)v47 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v47, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121);
    if ( v123 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v59, (__int64)&EventProfilerExit);
  }
  v119 = (PERESOURCE **)v9;
  v60 = 1;
  v61 = (PERESOURCE **)v9;
  if ( v12 )
  {
    if ( (*((_DWORD *)v12 + 1) & 1) != 0 )
    {
      v71 = *((_QWORD *)v12 + 7);
      if ( v71 )
      {
        v72 = *(_QWORD *)(v71 + 152);
        if ( v72 )
        {
          if ( *(DXGDEVICE **)(v72 + 80) == this && (*(_DWORD *)(v72 + 72))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)&v121,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v12 + 7) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v121);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 7) + 152LL) + 80LL) = v9;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v121);
          }
        }
        v73 = *((_QWORD *)v12 + 7);
        v74 = *(_QWORD *)(v73 + 136);
        if ( (*(_DWORD *)(v74 - 44) & 2) != 0 )
        {
          if ( *(_DWORD *)(v73 + 132) != 1 )
          {
            v92 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
            if ( *((_DWORD *)v92 + 74) <= 1u || !DXGADAPTER::IsDxgmms2(v92) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1639;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->GetPhysicalAdapterC"
                          "ount() > 1 && GetRenderAdapter()->IsDxgmms2()",
                1639LL,
                (__int64)v9,
                (__int64)v9,
                (__int64)v9,
                (__int64)v9);
            }
          }
          if ( ((*(_DWORD *)(v74 - 44) >> 6) & 0xFu) >= *((_DWORD *)this + 476)
            && (*(_DWORD *)(*((_QWORD *)this + 5) + 408LL) & 0x100) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1640;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pAdapterAlloc->m_VidPnSourceId < this->GetNumVidPnSources() || GetProcess()->IsVmProcess()",
              1640LL,
              (__int64)v9,
              (__int64)v9,
              (__int64)v9,
              (__int64)v9);
          }
          v93 = (*(_DWORD *)(v74 - 44) >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)this + v93 + 83) == v12 )
            *((_QWORD *)this + v93 + 83) = v9;
        }
        v75 = *((_QWORD *)v12 + 3);
        v15 = (unsigned int)v9;
        while ( v75 )
        {
          v75 = *(_QWORD *)(v75 + 64);
          v15 = (unsigned int)(v15 + 1);
        }
        v76 = (volatile signed __int32 *)*((_QWORD *)v12 + 7);
        if ( _InterlockedExchangeAdd(v76 + 17, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v76, v120, v15);
        *((_QWORD *)v12 + 7) = v9;
      }
      v60 = (char)v9;
    }
    else
    {
      v61 = (PERESOURCE **)*((_QWORD *)v12 + 7);
      v119 = v61;
    }
  }
  v62 = P;
  v63 = P;
  memset(&v126, 0, sizeof(v126));
  if ( P )
  {
    v64 = v118;
    v65 = P;
    while ( 1 )
    {
      v62 = (_QWORD *)v62[8];
      if ( (v65[18] & 0x800) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1692;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_Pinned == FALSE",
          1692LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (v65[18] & 0x7FE) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1693;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_DirectFlipIndex == 0",
          1693LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v66 = *((_QWORD *)v63 + 6);
      if ( v66 )
      {
        if ( !v60 )
          goto LABEL_122;
        if ( (*((_BYTE *)this + 1917) & 1) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
            McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer(
              (*(_DWORD *)(v66 + 4) >> 21) & 0x3F,
              &EventDestroyAdapterAllocation,
              v15,
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
              (char)this,
              *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
              0,
              *(_QWORD *)(v66 + 112),
              v94,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100,
              v101,
              v66,
              v102,
              v103,
              v104,
              v105,
              v106,
              v107,
              v108,
              v109,
              v110,
              v111,
              v112,
              v113,
              v114,
              (*(_DWORD *)(v66 + 4) >> 21) & 0x3F,
              0,
              0LL);
        }
        else
        {
          v15 = *(_QWORD *)(v66 + 8);
          if ( v15 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                   + 120LL))(
              *((_QWORD *)this + 99),
              0LL);
            *(_QWORD *)(v66 + 8) = 0LL;
          }
        }
        v67 = *(void **)(*((_QWORD *)v63 + 6) + 16LL);
        if ( v67 )
        {
          v120[v126.NumAllocations++] = v67;
          *(_QWORD *)(*((_QWORD *)v63 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v60 )
      {
LABEL_122:
        if ( !v12 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1715;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource", 1715LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*((_DWORD *)v12 + 1) & 1) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1716;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pResource->m_SharedResource",
            1716LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !v64 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1717;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bDestroyResource", 1717LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v68 = (void *)*((_QWORD *)v63 + 6);
      if ( (!v12 || (*((_DWORD *)v12 + 1) & 1) == 0) && v68 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*((DXGADAPTERALLOCATION **)v63 + 6));
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v68);
      }
      v63 = v62;
      v65 = v62;
      if ( !v62 )
      {
        v61 = v119;
        v62 = P;
        break;
      }
    }
  }
  if ( v60 )
  {
    v69 = v118;
    v126.Flags.Value = 0;
    if ( v12 )
      v126.Flags.Value = v118 != 0;
    v126.hResource = v61;
    if ( v126.NumAllocations )
    {
      v126.pAllocationList = v120;
    }
    else
    {
      v126.pAllocationList = 0LL;
      if ( !v118 || !v61 )
        goto LABEL_97;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v126, 0);
    if ( v12 && !v69 )
    {
      if ( (*((_DWORD *)v12 + 1) & 1) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1765;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!(pResource->m_SharedResource)",
          1765LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_QWORD *)v12 + 7) = v126.hResource;
    }
  }
LABEL_97:
  if ( v62 )
  {
    v70 = v62;
    do
    {
      v70 = (_QWORD *)v70[8];
      DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v62);
      ExFreePoolWithTag(v62, 0);
      v62 = v70;
    }
    while ( v70 );
  }
}
