/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0
 * Callers:
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z @ 0x1403068C4 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x140306F50 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x140314E64 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z @ 0x1403B7B0C (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x14000D554 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1400112A8 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     McTemplateK0pqPR1x_EtwWriteTransfer @ 0x140013850 (McTemplateK0pqPR1x_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x14003DCCC (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ?VidSchSubmitWaitToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x140045D90 (-VidSchSubmitWaitToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1400469A4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x14005D7FC (-GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ.c)
 *     ??1DXGADAPTERSYNCOBJECTCA@@QEAA@XZ @ 0x14006CDD4 (--1DXGADAPTERSYNCOBJECTCA@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGDEVICESYNCOBJECT@@$03@@QEAAPEAPEAVDXGDEVICESYNCOBJECT@@I@Z @ 0x14030A1A8 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGDEVICESYNCOBJECT@@$03@@QEAAPEAPEAVDXGDEVICESYNCO.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x140316D1C (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 *     ??0DXGADAPTERSYNCOBJECTCA@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGSYNCOBJECT@@@Z @ 0x14040ED0C (--0DXGADAPTERSYNCOBJECTCA@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10,
        bool a11)
{
  unsigned __int64 v11; // rsi
  struct DXGPROCESS *v12; // r14
  unsigned int v13; // r15d
  _BYTE *Pool2; // rax
  struct DXGCONTEXT *v15; // r13
  __int64 v16; // r12
  char v17; // di
  __int64 v18; // r9
  struct _KEVENT *v19; // rbx
  DXGPUSHLOCK *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE *v25; // rcx
  unsigned __int64 v26; // r8
  struct DXGSYNCOBJECT **v27; // rdx
  int v28; // eax
  void *v30; // r8
  unsigned int v31; // ebx
  _QWORD *v32; // r12
  struct DXGSYNCOBJECT *v33; // r14
  struct DXGPROCESS *v34; // rdi
  __int64 v35; // rcx
  int v36; // ecx
  unsigned __int64 v37; // rdi
  __int64 v38; // rcx
  struct _VIDSCH_SYNC_OBJECT *v39; // r10
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r14
  unsigned int v45; // ebx
  char *v46; // rdi
  __int64 v47; // rcx
  unsigned int v48; // edx
  struct DXGPROCESS *v49; // r8
  int v50; // r8d
  bool v51; // al
  __int64 v52; // rbx
  __int64 v53; // rbx
  unsigned __int64 v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // edx
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // r8
  __int64 v62; // rdx
  struct DXGSYNCOBJECT *v63; // rbx
  int v64; // eax
  __int64 v65; // rsi
  unsigned int *v66; // rbx
  DXGADAPTER *v67; // rcx
  __int64 v68; // rcx
  int v69; // eax
  struct ADAPTER_RENDER *v70; // rdi
  bool v71; // zf
  struct ADAPTER_RENDER *v72; // r8
  struct ADAPTER_RENDER *v73; // rdx
  __int64 v74; // r9
  __int64 v75; // rcx
  _QWORD *j; // rax
  struct _VIDSCH_SYNC_OBJECT *v77; // r10
  _QWORD *v78; // r14
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // r15
  _QWORD **v82; // r14
  _QWORD *i; // rax
  _QWORD *v84; // r10
  __int64 v85; // rsi
  unsigned int *v86; // rbx
  PVOID v87; // rcx
  unsigned int v88; // ebx
  __int64 v89; // rcx
  __int64 v90; // rdx
  unsigned __int64 RedirectedFlipFenceValue; // rax
  unsigned int *v92; // rsi
  unsigned int *v93; // rbx
  unsigned int *v94; // rdi
  int v95; // eax
  __int64 v96; // rsi
  unsigned int *v97; // rbx
  __int64 v98; // r8
  DXGADAPTERSYNCOBJECTCA *v99; // rax
  DXGADAPTERSYNCOBJECT *v100; // rax
  DXGADAPTERSYNCOBJECTCA *v101; // rdi
  char v102; // [rsp+50h] [rbp-258h]
  char v103; // [rsp+51h] [rbp-257h]
  char v104; // [rsp+52h] [rbp-256h]
  struct DXGGLOBAL *v105; // [rsp+58h] [rbp-250h] BYREF
  char v106; // [rsp+60h] [rbp-248h]
  struct DXGPROCESS *v107; // [rsp+68h] [rbp-240h]
  PVOID P; // [rsp+70h] [rbp-238h] BYREF
  _BYTE v109[32]; // [rsp+78h] [rbp-230h] BYREF
  int v110; // [rsp+98h] [rbp-210h]
  __int64 v111; // [rsp+A0h] [rbp-208h] BYREF
  int v112; // [rsp+A8h] [rbp-200h]
  _BYTE v113[16]; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v114; // [rsp+C0h] [rbp-1E8h]
  char v115; // [rsp+C8h] [rbp-1E0h]
  unsigned int *v116; // [rsp+D0h] [rbp-1D8h]
  void *Src; // [rsp+D8h] [rbp-1D0h]
  PVOID v118; // [rsp+E0h] [rbp-1C8h]
  _BYTE v119[32]; // [rsp+E8h] [rbp-1C0h] BYREF
  int v120; // [rsp+108h] [rbp-1A0h]
  struct DXGSYNCOBJECT **v121; // [rsp+110h] [rbp-198h]
  __int64 v122; // [rsp+118h] [rbp-190h]
  char v123[8]; // [rsp+120h] [rbp-188h] BYREF
  DXGPUSHLOCK *v124; // [rsp+128h] [rbp-180h]
  int v125; // [rsp+130h] [rbp-178h]
  struct _VIDSCH_SYNC_OBJECT *v126; // [rsp+138h] [rbp-170h]
  unsigned __int64 v127; // [rsp+140h] [rbp-168h] BYREF
  struct DXGPROCESS *v128; // [rsp+148h] [rbp-160h] BYREF
  char v129; // [rsp+150h] [rbp-158h]
  struct DXGDEVICESYNCOBJECT **v130; // [rsp+158h] [rbp-150h]
  struct DXGCONTEXT *v131; // [rsp+160h] [rbp-148h] BYREF
  __int64 v132; // [rsp+168h] [rbp-140h]
  __int128 v133; // [rsp+170h] [rbp-138h] BYREF
  PVOID v134; // [rsp+180h] [rbp-128h]
  PVOID v135; // [rsp+188h] [rbp-120h]
  _BYTE v136[32]; // [rsp+190h] [rbp-118h] BYREF
  int v137; // [rsp+1B0h] [rbp-F8h]
  char v138[8]; // [rsp+1C0h] [rbp-E8h] BYREF
  _BYTE v139[16]; // [rsp+1C8h] [rbp-E0h] BYREF
  DXGADAPTER *v140; // [rsp+1D8h] [rbp-D0h]
  char v141; // [rsp+1E0h] [rbp-C8h]
  __int64 v142; // [rsp+1E8h] [rbp-C0h]
  _BYTE v143[16]; // [rsp+208h] [rbp-A0h] BYREF
  DXGADAPTER *v144; // [rsp+218h] [rbp-90h]
  char v145; // [rsp+220h] [rbp-88h]
  __int64 v146; // [rsp+228h] [rbp-80h]
  __int64 v147; // [rsp+248h] [rbp-60h]
  char v148; // [rsp+250h] [rbp-58h]

  Src = a3;
  v116 = a2;
  v11 = a1;
  v127 = a4;
  v12 = a6;
  v107 = a6;
  v128 = a6;
  v13 = 0;
  v118 = 0LL;
  v120 = 0;
  if ( a1 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
      Pool2 = 0LL;
      v121 = 0LL;
      goto LABEL_6;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * a1, 1265072196LL);
    v118 = Pool2;
    goto LABEL_4;
  }
  Pool2 = v119;
  v121 = (struct DXGSYNCOBJECT **)v119;
  v118 = v119;
  if ( a1 )
  {
    memset(v119, 0, 8LL * a1);
    Pool2 = v118;
LABEL_4:
    v121 = (struct DXGSYNCOBJECT **)Pool2;
  }
  v120 = v11;
LABEL_6:
  if ( !Pool2 )
    return 3221225495LL;
  v131 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113, a5, (struct _KTHREAD **)a6, &v131, a8, 1);
  v15 = v131;
  if ( !v131 )
  {
    WdLogSingleEntry3(2LL, v107, a5, -1073741811LL);
    WdLogGlobalForLineNumber = 1342;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)v107,
      a5,
      -1073741811LL,
      0LL,
      0LL);
LABEL_330:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
    if ( v118 != v119 && v118 )
    {
      ExFreePoolWithTag(v118, 0);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  v104 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v131 + 2) + 16LL) + 16LL) + 209LL);
  P = 0LL;
  v110 = 0;
  v130 = 0LL;
  if ( v104 )
  {
    v130 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<DXGDEVICESYNCOBJECT *,4>::AllocateElements(
                                            &P,
                                            (unsigned int)v11);
    if ( !v130 )
    {
      if ( P != v109 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v110 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
      if ( v118 != v119 && v118 )
      {
        ExFreePoolWithTag(v118, 0);
        return 3221225495LL;
      }
      return 3221225495LL;
    }
  }
  v122 = *((_QWORD *)v15 + 2);
  v111 = v122;
  v112 = 0;
  v16 = v122;
  v132 = v122;
  v114 = v122;
  v17 = 0;
  v115 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123, (struct _KTHREAD **)v15 + 55, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v138, *((_QWORD *)v15 + 2), 0, v18, a8);
  if ( !a8 )
  {
    if ( a9 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
      v122 = v111;
    }
    else if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v15 + 2) + 136LL)) && v16 )
    {
      v19 = *(struct _KEVENT **)(v16 + 16);
      if ( !KeReadStateEvent(v19 + 4) )
        KeWaitForSingleObject(&v19[4], Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v16 + 136), 0) )
      {
        DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v89, (__int64)"g");
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v16 + 136), 1u);
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
      }
      v17 = 1;
      v115 = 1;
    }
    if ( !a11 || *((_DWORD *)v15 + 36) == 2 )
    {
      v20 = v124;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20, 0LL) )
      {
        DXGPUSHLOCK::LogEvent(v20, v21, v22);
        ExAcquirePushLockExclusiveEx(v20, 0LL);
      }
      *((_QWORD *)v20 + 1) = KeGetCurrentThread();
      v125 = 2;
    }
    if ( v148 )
    {
      if ( v145 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v143, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7648;
      }
      v67 = v144;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v144 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v144 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v68, (__int64)"g");
          KeWaitForSingleObject((char *)v144 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v144, 0LL);
        v67 = v144;
      }
      v146 = 0LL;
      v145 = 1;
      if ( *((_DWORD *)v67 + 50) != 1 )
        goto LABEL_162;
    }
    if ( v141 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v139, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v140 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v140 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)"g");
        KeWaitForSingleObject((char *)v140 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v140, 0LL);
    }
    v142 = 0LL;
    v141 = 1;
    if ( *(_DWORD *)(v147 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v139);
      if ( !v148 )
      {
LABEL_163:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
        if ( v16 && v17 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
          KeLeaveCriticalRegion();
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
        if ( P != v109 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v110 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
        if ( v118 != v119 && v118 )
          ExFreePoolWithTag(v118, 0);
        return 3221226166LL;
      }
LABEL_162:
      COREACCESS::Release((COREACCESS *)v143);
      goto LABEL_163;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  v105 = Global;
  v106 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3058;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 3058LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 76)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3063;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursiveSharedLock",
      3063LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v105 + 76), 1u);
  v106 = 1;
  v103 = 0;
  v102 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
      {
        v25 = 0LL;
        v135 = 0LL;
        v26 = 0LL;
        v137 = 0;
        v27 = v121;
        v28 = *((_DWORD *)*v121 + 105);
        if ( v28 != 5 && (unsigned int)(v28 - 6) > 1 )
        {
          v30 = Src;
          goto LABEL_60;
        }
        if ( a7 )
        {
          if ( (unsigned int)v11 > 4 )
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
              goto LABEL_41;
            v25 = (_BYTE *)ExAllocatePool2(64LL, 8 * v11, 1265072196LL);
            v135 = v25;
          }
          else
          {
            v25 = v136;
            v135 = v136;
            if ( (_DWORD)v11 )
            {
              memset(v136, 0, 8 * v11);
              v25 = v135;
            }
          }
          v26 = v11;
          v137 = v11;
LABEL_41:
          if ( !v25 )
          {
            v135 = 0LL;
            v137 = 0;
            if ( v106 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
            if ( v16 && v115 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
              KeLeaveCriticalRegion();
            }
            if ( v122 && v112 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v122 + 136));
              KeLeaveCriticalRegion();
              v112 = 0;
            }
            if ( P != v109 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v110 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
            if ( v118 != v119 )
            {
              if ( v118 )
                ExFreePoolWithTag(v118, 0);
            }
            v118 = 0LL;
            v120 = 0;
            return 3221225495LL;
          }
          RtlCopyFromUser(v25, Src, 8 * v26);
          v30 = v135;
          Src = v135;
          v134 = v135;
          v27 = v121;
          goto LABEL_60;
        }
        if ( a10 )
        {
          v30 = &v127;
          Src = &v127;
LABEL_60:
          if ( v104 )
          {
            v88 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 16LL) + 4712LL),
                    v12,
                    v15,
                    v116,
                    v27,
                    v130,
                    v30,
                    v127,
                    v11,
                    0LL);
            if ( v135 != v136 && v135 )
              ExFreePoolWithTag(v135, 0);
            v135 = 0LL;
            v137 = 0;
            if ( v106 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
            if ( v16 && v115 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
              KeLeaveCriticalRegion();
            }
            if ( v122 && v112 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v122 + 136));
              KeLeaveCriticalRegion();
            }
            if ( P != v109 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v110 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
            if ( v118 != v119 && v118 )
              ExFreePoolWithTag(v118, 0);
            return v88;
          }
          v31 = 0;
          v32 = Src;
          while ( 1 )
          {
            if ( v31 >= (unsigned int)v11 )
            {
              if ( v135 != v136 && v135 )
                ExFreePoolWithTag(v135, 0);
              v135 = 0LL;
              v137 = 0;
              if ( v106 )
              {
                v106 = 0;
                ExReleaseResourceLite(*((PERESOURCE *)v105 + 76));
                KeLeaveCriticalRegion();
              }
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
              if ( v132 && v115 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v132 + 136));
                KeLeaveCriticalRegion();
              }
              if ( v122 && v112 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v122 + 136));
                KeLeaveCriticalRegion();
              }
              if ( P != v109 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v110 = 0;
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
              if ( v118 != v119 && v118 )
                ExFreePoolWithTag(v118, 0);
              return 0LL;
            }
            v33 = v27[v31];
            DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v128, v33);
            if ( v129 )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, &v128, 0LL, 0LL);
              WdLogGlobalForLineNumber = 672;
            }
            v34 = v128;
            KeEnterCriticalRegion();
            if ( *((struct _KTHREAD **)v34 + 3) == KeGetCurrentThread() )
            {
              if ( *((int *)v34 + 8) <= 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 504;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"m_OwnerAcquireCount > 0",
                  504LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              ++*((_DWORD *)v34 + 8);
            }
            else
            {
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v34 + 8, 0LL) )
              {
                if ( bTracingEnabled && *((_DWORD *)v34 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v35, (__int64)"g");
                _InterlockedIncrement64((volatile signed __int64 *)v34 + 2);
                ExAcquirePushLockExclusiveEx((char *)v34 + 8, 0LL);
              }
              if ( *((_QWORD *)v34 + 3) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 530;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NULL == m_OwningThread",
                  530LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( *((_DWORD *)v34 + 8) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 531;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"0 == m_OwnerAcquireCount",
                  531LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *((_QWORD *)v34 + 3) = KeGetCurrentThread();
              *((_DWORD *)v34 + 8) = 1;
            }
            v129 = 1;
            v36 = *((_DWORD *)v33 + 105);
            if ( v36 == 5 || (unsigned int)(v36 - 6) <= 1 )
            {
              v37 = v32[v31];
            }
            else
            {
              v37 = 0LL;
              if ( v36 == 3 )
                v37 = v127;
            }
            v38 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
            if ( (*((_DWORD *)v33 + 106) & 4) != 0 )
            {
              v82 = (_QWORD **)((char *)v33 + 440);
              for ( i = *v82; i != v82; i = (_QWORD *)*i )
              {
                v84 = i - 19;
                if ( !v38 || v84[2] == v38 )
                  goto LABEL_252;
              }
              v84 = 0LL;
LABEL_252:
              v39 = (struct _VIDSCH_SYNC_OBJECT *)v84[4];
            }
            else
            {
              v39 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v33 + 59);
            }
            v126 = v39;
            if ( (*((_DWORD *)v15 + 98) & 0x10) != 0 )
            {
              if ( !a10 )
              {
                DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v15 + 50, &v133);
                v78 = (_QWORD *)*((_QWORD *)&v133 + 1);
                while ( 1 )
                {
                  if ( v78 == (_QWORD *)v133 || !v78 )
                  {
                    v133 = 0LL;
                    v15 = v131;
                    v32 = Src;
                    goto LABEL_87;
                  }
                  v79 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v131 + 2) + 16LL) + 736LL) + 8LL) + 656LL))(
                          v78[6],
                          v77,
                          v37);
                  v81 = v79;
                  if ( v79 < 0 )
                    break;
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0pqPR1XR1_EtwWriteTransfer(v80, (__int64)&EventWaitForSynchronizationObjectFromGpu);
                  v78 = (_QWORD *)*v78;
                  v77 = v126;
                }
                v85 = v31;
                v86 = &v116[v31];
                WdLogSingleEntry4(2LL, v107, *v86, (unsigned int)v85, v79);
                WdLogGlobalForLineNumber = 1751;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
                  (__int64)v107,
                  *v86,
                  v85,
                  v81,
                  0LL);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
                if ( v135 != v136 && v135 )
                  ExFreePoolWithTag(v135, 0);
                v135 = 0LL;
                v137 = 0;
                if ( v106 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
                if ( v132 && v115 )
                {
                  ExReleaseResourceLite(*(PERESOURCE *)(v132 + 136));
                  KeLeaveCriticalRegion();
                }
                if ( v122 && v112 )
                {
                  ExReleaseResourceLite(*(PERESOURCE *)(v122 + 136));
                  KeLeaveCriticalRegion();
                }
                if ( P != v109 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v110 = 0;
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
                if ( v118 != v119 && v118 )
                  ExFreePoolWithTag(v118, 0);
                return (unsigned int)v81;
              }
              v95 = VIDSCH_EXPORT::VidSchSubmitWaitToHwQueue(
                      *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 736LL),
                      *((struct VIDSCH_HW_QUEUE **)v15 + 36),
                      v39,
                      v37);
              v44 = v95;
              if ( v95 < 0 )
              {
                v96 = v31;
                v97 = &v116[v31];
                WdLogSingleEntry4(2LL, v107, *v97, (unsigned int)v96, v95);
                WdLogGlobalForLineNumber = 1722;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
                  (__int64)v107,
                  *v97,
                  v96,
                  v44,
                  0LL);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
                if ( v135 != v136 && v135 )
                  ExFreePoolWithTag(v135, 0);
                v135 = 0LL;
                v137 = 0;
                if ( v106 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
                if ( v132 && v115 )
                {
                  ExReleaseResourceLite(*(PERESOURCE *)(v132 + 136));
                  KeLeaveCriticalRegion();
                }
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
                goto LABEL_150;
              }
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
LABEL_86:
                McTemplateK0pqPR1XR1_EtwWriteTransfer(
                  (__int64)&v32[v31],
                  (__int64)&EventWaitForSynchronizationObjectFromGpu);
            }
            else
            {
              v40 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 736LL) + 8LL) + 648LL))(
                      *((_QWORD *)v15 + 32),
                      v39,
                      v37);
              v44 = v40;
              if ( v40 < 0 )
              {
                v65 = v31;
                v66 = &v116[v31];
                WdLogSingleEntry4(2LL, v107, *v66, (unsigned int)v65, v40);
                WdLogGlobalForLineNumber = 1777;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
                  (__int64)v107,
                  *v66,
                  v65,
                  v44,
                  0LL);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
                if ( v135 != v136 && v135 )
                  ExFreePoolWithTag(v135, 0);
                v135 = 0LL;
                v137 = 0;
                if ( v106 )
                {
                  v106 = 0;
                  ExReleaseResourceLite(*((PERESOURCE *)v105 + 76));
                  KeLeaveCriticalRegion();
                }
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
                if ( v132 && v115 )
                {
                  ExReleaseResourceLite(*(PERESOURCE *)(v132 + 136));
                  KeLeaveCriticalRegion();
                }
                if ( v122 && v112 )
                {
                  ExReleaseResourceLite(*(PERESOURCE *)(v122 + 136));
                  KeLeaveCriticalRegion();
                }
LABEL_150:
                if ( P != v109 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v110 = 0;
                goto LABEL_154;
              }
              if ( v102 )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  goto LABEL_86;
              }
              else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                McTemplateK0pqPR1x_EtwWriteTransfer(v42, v41, v43, v15);
              }
            }
LABEL_87:
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v128);
            ++v31;
            v27 = v121;
          }
        }
        v30 = Src;
        if ( Src )
          goto LABEL_60;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1650;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x encountered exception, MonitoredFenceValueArray may not be null for monitored fence types.",
          (__int64)v12,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v135 != v136 && v135 )
          ExFreePoolWithTag(v135, 0);
        v135 = 0LL;
        v137 = 0;
        if ( v106 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
        if ( v16 && v115 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
          KeLeaveCriticalRegion();
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
        if ( P != v109 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v110 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
        v87 = v118;
        if ( v118 != v119 )
          goto LABEL_300;
        return 3221225485LL;
      }
      v45 = v116[v13];
      v46 = (char *)v107 + 248;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v107 + 248, 0LL) )
      {
        if ( bTracingEnabled && *((_DWORD *)v107 + 68) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v47, (__int64)"g");
        ExAcquirePushLockSharedEx(v46, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)v107 + 66);
      v48 = (v45 >> 6) & 0xFFFFFF;
      v49 = v107;
      if ( v48 >= *((_DWORD *)v107 + 74) )
      {
        v51 = 0;
      }
      else
      {
        v50 = *(_DWORD *)(*((_QWORD *)v107 + 35) + 16LL * v48 + 8);
        v51 = ((v45 >> 25) & 0x60) == (v50 & 0x60) && (v50 & 0x2000) == 0 && (v50 & 0x1F) != 0;
        v49 = v107;
      }
      if ( v51 )
      {
        v52 = *((_QWORD *)v49 + 35);
        v53 = (*(_BYTE *)(v52 + 16LL * v48 + 8) & 0x1F) == 8 ? *(_QWORD *)(v52 + 16LL * v48) : 0LL;
      }
      else
      {
        v53 = 0LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)v107 + 66);
      ExReleasePushLockSharedEx(v46, 0LL);
      KeLeaveCriticalRegion();
      if ( v53 )
        break;
      v54 = v116[v13];
      v12 = v107;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v107 + 248, 0LL) )
      {
        if ( bTracingEnabled && *((_DWORD *)v107 + 68) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v55, (__int64)"g");
        ExAcquirePushLockSharedEx((char *)v107 + 248, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)v107 + 66);
      v56 = ((unsigned int)v54 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v56 < *((_DWORD *)v107 + 74) )
      {
        v57 = *((_QWORD *)v107 + 35);
        v58 = *(_DWORD *)(v57 + 16 * v56 + 8);
        if ( (((unsigned int)v54 >> 25) & 0x60) == (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60)
          && (v58 & 0x2000) == 0
          && (v58 & 0x1F) != 0 )
        {
          v59 = 2 * ((v54 >> 6) & 0xFFFFFF);
          if ( (*(_BYTE *)(v57 + 8 * v59 + 8) & 0x1F) == 0xB )
          {
            v60 = *(_QWORD *)(v57 + 8 * v59);
            goto LABEL_115;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v60 = 0LL;
LABEL_115:
      _InterlockedDecrement((volatile signed __int32 *)v107 + 66);
      ExReleasePushLockSharedEx((char *)v107 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( !v60 )
      {
        v94 = v116;
        WdLogSingleEntry3(2LL, v107, v116[v13], v13);
        WdLogGlobalForLineNumber = 1540;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%p failed to wait with invalid hSyncObject 0x%x at index %d",
          (__int64)v107,
          v94[v13],
          v13,
          0LL,
          0LL);
        if ( v106 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
        if ( v16 && v115 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
          KeLeaveCriticalRegion();
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
        if ( P != v109 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v110 = 0;
LABEL_284:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
        v87 = v118;
        if ( v118 != v119 )
        {
LABEL_300:
          if ( v87 )
            ExFreePoolWithTag(v87, 0);
        }
        return 3221225485LL;
      }
      if ( v130 )
        v130[v13] = (struct DXGDEVICESYNCOBJECT *)v60;
      v102 = 1;
      if ( v103 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1554;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%p mixes monitored fence and non-monitored fence sync objects in one wait call.",
          (__int64)v12,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_212;
      }
      v61 = *(_QWORD *)(v60 + 16);
      v62 = *((_QWORD *)v15 + 2);
      if ( v61 != v62 )
      {
        WdLogSingleEntry2(2LL, v62, v61);
        WdLogGlobalForLineNumber = 1563;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"WaitForSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
          *((_QWORD *)v15 + 2),
          *(_QWORD *)(v60 + 16),
          0LL,
          0LL,
          0LL);
        goto LABEL_212;
      }
      if ( (*(_DWORD *)(v60 + 72) & 0x20) != 0 )
      {
        v93 = v116;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1571;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%x object is opened as signal only and thus cannot be waited on.",
          v93[v13],
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v106 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
        if ( v16 && v115 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
          KeLeaveCriticalRegion();
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
        if ( P != v109 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v110 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
        if ( v118 != v119 && v118 )
          ExFreePoolWithTag(v118, 0);
        return 3221225506LL;
      }
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305952)
        && *(_DWORD *)(*(_QWORD *)(v60 + 32) + 420LL) == 7
        && !*(_QWORD *)(v60 + 96) )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1581;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGDEVICESYNCOBJECT 0x%x is a native fence object and has a NULL Driver Handle, returning STATUS_INVALID_PARAMETER",
          v60,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_212;
      }
      v63 = *(struct DXGSYNCOBJECT **)(v60 + 32);
      v64 = *((_DWORD *)v63 + 105);
      if ( v64 == 7 && *((_DWORD *)v63 + 79) == 1 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1589;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGDEVICESYNCOBJECT 0x%x. Queuing Wait/Signals not supported on native fence of type D3DDDI_NATIVEFEN"
                    "CE_TYPE_INTRA_GPU, returning STATUS_INVALID_PARAMETER",
          v60,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v106 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
        if ( v16 && v115 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
          KeLeaveCriticalRegion();
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
        if ( P != v109 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v110 = 0;
        goto LABEL_284;
      }
      if ( (unsigned int)(v64 - 5) > 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1598;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pSyncObject->GetSyncObjectType() == D3DDDI_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3D"
                    "DDI_PERIODIC_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3DDDI_NATIVE_FENCE",
          1598LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v121[v13++] = v63;
    }
    if ( v130 )
      v130[v13] = 0LL;
    if ( *(_DWORD *)(v53 + 420) == 5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1434;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_MONITORED_FENCE",
        1434LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v53 + 420) == 6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1435;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_PERIODIC_MONITORED_FENCE",
        1435LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v53 + 420) == 7 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1436;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_NATIVE_FENCE",
        1436LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v103 = 1;
    if ( v102 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1442;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%p mixes monitored fence and non-monitored fence sync objects in one wait call.",
        (__int64)v107,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v106 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
      if ( v16 && v115 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
        KeLeaveCriticalRegion();
      }
      if ( v122 && v112 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v122 + 136));
        KeLeaveCriticalRegion();
      }
      goto LABEL_280;
    }
    v69 = *(_DWORD *)(v53 + 420);
    if ( v69 == 4 )
    {
      v92 = v116;
      WdLogSingleEntry3(2LL, v107, v116[v13], v13);
      WdLogGlobalForLineNumber = 1455;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%p failed, can not wait on CPU Notification object 0x%x at index %d",
        (__int64)v107,
        v92[v13],
        v13,
        0LL,
        0LL);
LABEL_212:
      if ( v106 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
      if ( v16 && v115 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
        KeLeaveCriticalRegion();
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
LABEL_280:
      if ( P != v109 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v110 = 0;
      goto LABEL_284;
    }
    if ( v69 == 3 && (_DWORD)v11 != 1 )
    {
      WdLogSingleEntry2(2LL, v107, v11);
      WdLogGlobalForLineNumber = 1469;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%p can only wait on one fence object at a time instead of %d",
        (__int64)v107,
        v11,
        0LL,
        0LL,
        0LL);
      goto LABEL_212;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v133, (struct DXGSYNCOBJECT *)v53);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v133);
    v70 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v15 + 2) + 16LL);
    v71 = (*(_DWORD *)(v53 + 424) & 4) == 0;
    LOBYTE(v126) = (*(_DWORD *)(v53 + 424) & 4) != 0;
    if ( v71 )
      break;
    LODWORD(v44) = 0;
    for ( j = *(_QWORD **)(v53 + 440); j != (_QWORD *)(v53 + 440); j = (_QWORD *)*j )
    {
      if ( !v70 || (struct ADAPTER_RENDER *)*(j - 17) == v70 )
      {
        if ( j != (_QWORD *)152 )
          goto LABEL_228;
        break;
      }
    }
    if ( v70 )
    {
      v98 = 64LL;
      if ( *(_DWORD *)(v53 + 420) != 7 )
        v98 = 256LL;
      v99 = (DXGADAPTERSYNCOBJECTCA *)operator new(0xB0uLL, 0x4B677844u, v98);
      if ( v99
        && (v100 = DXGADAPTERSYNCOBJECTCA::DXGADAPTERSYNCOBJECTCA(v99, v70, (struct DXGSYNCOBJECT *)v53),
            (v101 = v100) != 0LL) )
      {
        LODWORD(v44) = DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
                         v100,
                         (struct DXGSYNCOBJECT *)v53,
                         0LL,
                         0LL,
                         0LL,
                         0,
                         0,
                         0);
        if ( (int)v44 < 0 )
        {
          DXGADAPTERSYNCOBJECTCA::~DXGADAPTERSYNCOBJECTCA(v101);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v101);
        }
      }
      else
      {
        LODWORD(v44) = -1073741801;
      }
    }
LABEL_228:
    if ( (int)v44 < 0 )
      goto LABEL_229;
LABEL_187:
    if ( !v104 )
    {
      v73 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v15 + 2) + 16LL);
      v74 = *((_QWORD *)v73 + 92);
      v75 = (*(_DWORD *)(v53 + 424) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v53, v73) + 4)
          : *(_QWORD *)(v53 + 472);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(v74 + 8) + 872LL))(v75, v127) )
      {
        v90 = *((_QWORD *)v15 + 2);
        if ( *(_BYTE *)(*(_QWORD *)(v90 + 16) + 1024LL) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v90 + 40) + 408LL) & 4) == 0 || (*((_DWORD *)v15 + 98) & 8) == 0 )
          {
            if ( (*(_DWORD *)(v53 + 424) & 1) == 0
              || !*(_BYTE *)(v90 + 1915)
              || (RedirectedFlipFenceValue = DXGSYNCOBJECT::GetRedirectedFlipFenceValue((DXGSYNCOBJECT *)v53),
                  v127 > RedirectedFlipFenceValue) )
            {
              WdLogSingleEntry2(2LL, v107, -1073741811LL);
              WdLogGlobalForLineNumber = 1521;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x submitted an invalid out of order wait for sync object. Returning 0x%I64x",
                (__int64)v107,
                -1073741811LL,
                0LL,
                0LL,
                0LL);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v133);
              if ( v106 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
              if ( v16 && v115 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
                KeLeaveCriticalRegion();
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
              if ( P != v109 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v110 = 0;
              goto LABEL_330;
            }
          }
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v133);
    v12 = v107;
    v121[v13++] = (struct DXGSYNCOBJECT *)v53;
  }
  if ( !v70 )
    goto LABEL_187;
  v72 = *(struct ADAPTER_RENDER **)(v53 + 456);
  if ( v72 == v70 )
    goto LABEL_187;
  LODWORD(v44) = -1073741811;
  WdLogSingleEntry4(2LL, v53, v72, v70, -1073741811LL);
  WdLogGlobalForLineNumber = 2619;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
    v53,
    *(_QWORD *)(v53 + 456),
    (__int64)v70,
    -1073741811LL,
    0LL);
LABEL_229:
  WdLogSingleEntry3(2LL, v107, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 16LL), (int)v44);
  WdLogGlobalForLineNumber = 1490;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
    (__int64)v107,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 16LL),
    (int)v44,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v133);
  if ( v106 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v105);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v123);
  if ( v16 && v115 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
    KeLeaveCriticalRegion();
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v111);
  if ( P != v109 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v110 = 0;
LABEL_154:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v113);
  if ( v118 != v119 && v118 )
    ExFreePoolWithTag(v118, 0);
  return (unsigned int)v44;
}
