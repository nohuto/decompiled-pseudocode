/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00
 * Callers:
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B2CF4 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z @ 0x140302A58 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_KH@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x140306F50 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x14034C578 (-DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H_N@Z @ 0x1403893AC (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1403B6D4C (DxgkSignalSynchronizationObjectInternal.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140441CF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x14000D910 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer @ 0x14001189C (McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer.c)
 *     McTemplateK0qPR0qPR2qxd_EtwWriteTransfer @ 0x14001377C (McTemplateK0qPR0qPR2qxd_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x140016630 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x14002FCE0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x14003DCCC (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ?IsNativeWslProcess@DXGPROCESS@@QEBAEXZ @ 0x140041CD0 (-IsNativeWslProcess@DXGPROCESS@@QEBAEXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1400508E4 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140056FF0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140061770 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??1DXGADAPTERSYNCOBJECTCA@@QEAA@XZ @ 0x14006CDD4 (--1DXGADAPTERSYNCOBJECTCA@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x140306898 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 *     ??0DXGADAPTERSYNCOBJECTCA@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGSYNCOBJECT@@@Z @ 0x14040ED0C (--0DXGADAPTERSYNCOBJECTCA@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14042A764 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        void *a6,
        unsigned __int64 a7,
        void **a8,
        struct _KTHREAD **a9,
        unsigned int a10)
{
  unsigned __int64 v11; // rbx
  unsigned int *v13; // rcx
  struct _KTHREAD **v14; // r8
  unsigned int v15; // edi
  DXGCONTEXT **Pool2; // r12
  __int64 v17; // r9
  DXGCONTEXT *v18; // rax
  int v19; // r15d
  __int64 v20; // rcx
  char v21; // r13
  __int64 v22; // r12
  struct _KEVENT *v23; // r14
  struct _KEVENT *v24; // rcx
  unsigned int i; // r14d
  __int64 v26; // r9
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v28; // r14
  DXGCONTEXT **v29; // r12
  __int64 v30; // rcx
  unsigned int v31; // r13d
  unsigned int v32; // r14d
  unsigned int v33; // r15d
  DXGCONTEXT **v34; // r9
  char *v35; // r12
  char *v36; // r10
  _BYTE *v37; // rcx
  _BYTE *v38; // r8
  char *v39; // r14
  _BYTE *v40; // r10
  int v41; // r9d
  DXGCONTEXT **v42; // r8
  DXGCONTEXT *v43; // rdx
  unsigned int v44; // r15d
  void **v45; // r13
  unsigned int j; // r12d
  PVOID v47; // r9
  unsigned int v48; // ecx
  int v49; // edx
  unsigned __int64 v50; // r14
  PVOID v52; // r9
  unsigned int k; // r14d
  __int64 v54; // r13
  struct ADAPTER_RENDER *v55; // r15
  struct ADAPTER_RENDER *v56; // r8
  int v57; // r12d
  DXGCONTEXT **v58; // r15
  __int64 v59; // r8
  __int64 v60; // rdx
  _QWORD **v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r12
  __int64 *v64; // r13
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r14
  unsigned int v69; // r14d
  char *v70; // r13
  __int64 v71; // rcx
  unsigned int v72; // edx
  int v73; // r8d
  bool v74; // al
  __int64 v75; // r15
  _DWORD *v76; // r15
  unsigned int v77; // r14d
  __int64 v78; // rcx
  unsigned int v79; // edx
  DXGPROCESS *v80; // r8
  int v81; // r8d
  bool v82; // al
  __int64 v83; // r14
  __int64 v84; // r14
  __int64 v85; // r8
  DXGCONTEXT **v86; // r15
  __int64 v87; // rdx
  int v88; // eax
  unsigned int v89; // edx
  DXGPROCESS *v90; // r9
  int v91; // r9d
  bool v92; // al
  __int64 v93; // rcx
  __int64 v94; // rdx
  DXGCONTEXT *v95; // rdx
  DXGCONTEXT **v96; // rax
  __int64 v97; // rcx
  PVOID v98; // rcx
  int v99; // r11d
  _QWORD *v100; // rdx
  _QWORD *v101; // r10
  PVOID v102; // rcx
  _QWORD *m; // rax
  __int64 v104; // r8
  DXGADAPTERSYNCOBJECTCA *v105; // rax
  DXGADAPTERSYNCOBJECT *v106; // rax
  DXGADAPTERSYNCOBJECTCA *v107; // r15
  unsigned int *v108; // r15
  DXGADAPTER *v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rbx
  unsigned int *v112; // r15
  __int64 v113; // rdi
  __int64 v114; // rcx
  _QWORD *n; // rax
  _QWORD *v116; // r8
  __int64 v117; // rbx
  unsigned int *v118; // rdi
  unsigned __int64 *v119; // rax
  void *v120; // r15
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v121; // r14
  _BYTE *v122; // r10
  __int64 v123; // r12
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r15
  __int64 v129; // rcx
  PVOID v130; // rcx
  unsigned int *v131; // rbx
  unsigned int *v132; // rbx
  __int64 v133; // r14
  unsigned int v134; // ebx
  __int64 v135; // rax
  __int64 *v136; // rdi
  PVOID v137; // rcx
  PVOID v138; // rcx
  __int64 v139; // r14
  unsigned int *v140; // rbx
  PVOID v141; // rcx
  PVOID v142; // rcx
  unsigned int *v143; // rdi
  unsigned int *v144; // rbx
  int v145; // [rsp+40h] [rbp-408h]
  char v146; // [rsp+70h] [rbp-3D8h]
  char v147; // [rsp+71h] [rbp-3D7h]
  DXGPROCESS *v148; // [rsp+78h] [rbp-3D0h]
  struct DXGGLOBAL *v149; // [rsp+80h] [rbp-3C8h] BYREF
  char v150; // [rsp+88h] [rbp-3C0h]
  PVOID P; // [rsp+90h] [rbp-3B8h]
  _BYTE v152[16]; // [rsp+98h] [rbp-3B0h] BYREF
  unsigned int v153; // [rsp+A8h] [rbp-3A0h]
  PVOID v154; // [rsp+B0h] [rbp-398h]
  _BYTE v155[16]; // [rsp+B8h] [rbp-390h] BYREF
  unsigned int v156; // [rsp+C8h] [rbp-380h]
  DXGCONTEXT *v157; // [rsp+D0h] [rbp-378h] BYREF
  char v158; // [rsp+D8h] [rbp-370h]
  __int64 v159; // [rsp+E0h] [rbp-368h] BYREF
  int v160; // [rsp+E8h] [rbp-360h]
  unsigned int v161; // [rsp+F0h] [rbp-358h]
  PVOID v162; // [rsp+F8h] [rbp-350h]
  DXGCONTEXT **v163; // [rsp+100h] [rbp-348h]
  void **v164; // [rsp+108h] [rbp-340h]
  PVOID v165; // [rsp+110h] [rbp-338h]
  _BYTE v166[64]; // [rsp+118h] [rbp-330h] BYREF
  unsigned int v167; // [rsp+158h] [rbp-2F0h]
  PVOID v168; // [rsp+160h] [rbp-2E8h]
  _BYTE v169[64]; // [rsp+168h] [rbp-2E0h] BYREF
  unsigned int v170; // [rsp+1A8h] [rbp-2A0h]
  unsigned int v171; // [rsp+1B0h] [rbp-298h]
  unsigned int *v172; // [rsp+1B8h] [rbp-290h]
  __int64 v173; // [rsp+1C0h] [rbp-288h]
  unsigned int *v174; // [rsp+1C8h] [rbp-280h]
  char *v175; // [rsp+1D0h] [rbp-278h] BYREF
  unsigned int v176; // [rsp+1D8h] [rbp-270h]
  void *Src; // [rsp+1E0h] [rbp-268h]
  PVOID v178; // [rsp+1E8h] [rbp-260h]
  _BYTE v179[16]; // [rsp+1F0h] [rbp-258h] BYREF
  unsigned int v180; // [rsp+200h] [rbp-248h]
  _BYTE *v181; // [rsp+208h] [rbp-240h]
  __int64 v182; // [rsp+210h] [rbp-238h]
  _QWORD v183[6]; // [rsp+218h] [rbp-230h] BYREF
  char v184; // [rsp+248h] [rbp-200h]
  __int128 v185; // [rsp+250h] [rbp-1F8h] BYREF
  struct _KTHREAD **v186; // [rsp+268h] [rbp-1E0h]
  _QWORD v187[4]; // [rsp+270h] [rbp-1D8h] BYREF
  char v188; // [rsp+290h] [rbp-1B8h]
  PVOID v189; // [rsp+298h] [rbp-1B0h]
  PVOID v190; // [rsp+2A0h] [rbp-1A8h]
  _BYTE v191[32]; // [rsp+2A8h] [rbp-1A0h] BYREF
  unsigned int v192; // [rsp+2C8h] [rbp-180h]
  char v193[8]; // [rsp+2D0h] [rbp-178h] BYREF
  _BYTE v194[16]; // [rsp+2D8h] [rbp-170h] BYREF
  DXGADAPTER *v195; // [rsp+2E8h] [rbp-160h]
  char v196; // [rsp+2F0h] [rbp-158h]
  __int64 v197; // [rsp+2F8h] [rbp-150h]
  _BYTE v198[16]; // [rsp+318h] [rbp-130h] BYREF
  DXGADAPTER *v199; // [rsp+328h] [rbp-120h]
  char v200; // [rsp+330h] [rbp-118h]
  __int64 v201; // [rsp+338h] [rbp-110h]
  __int64 v202; // [rsp+358h] [rbp-F0h]
  char v203; // [rsp+360h] [rbp-E8h]
  _BYTE v204[144]; // [rsp+370h] [rbp-D8h] BYREF

  v161 = a4;
  v11 = a3;
  v174 = a2;
  v171 = a1;
  v13 = a5;
  v172 = a5;
  Src = a6;
  v164 = a8;
  v14 = a9;
  v148 = (DXGPROCESS *)a9;
  v186 = a9;
  v15 = a10;
  if ( !a4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 600;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No contexts were provided to signal.",
      600LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  P = 0LL;
  v153 = 0;
  v175 = (char *)a4;
  if ( a4 <= 2 )
  {
    P = v152;
    memset(v152, 0, 8LL * a4);
    Pool2 = (DXGCONTEXT **)v152;
LABEL_4:
    v163 = Pool2;
    v153 = a4;
    v13 = v172;
    v14 = (struct _KTHREAD **)v148;
    goto LABEL_5;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a4 >= 8 )
  {
    Pool2 = (DXGCONTEXT **)ExAllocatePool2(256LL, 8LL * a4, 1265072196LL);
    P = Pool2;
    goto LABEL_4;
  }
  Pool2 = 0LL;
  v163 = 0LL;
LABEL_5:
  if ( !Pool2 )
    return 3221225495LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157, *v13, v14, Pool2, (v15 & 2) != 0, 1);
  v18 = *Pool2;
  if ( !*Pool2 )
  {
    v131 = v172;
    WdLogSingleEntry3(2LL, v148, *v172, -1073741811LL);
    WdLogGlobalForLineNumber = 618;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)v148,
      *v131,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_429;
  }
  LODWORD(v182) = v11 & 2;
  if ( (v11 & 2) != 0 )
  {
    if ( a1 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 630;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ObjectCount must be zero when Flags.EnqueueCpuEvent is set.",
        630LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_429;
    }
    if ( !*v164 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 635;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"CpuEventHandle should not be NULL when Flags.EnqueueCpuEvent is set.",
        635LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_429:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
      v102 = P;
      if ( P != v152 && P )
        goto LABEL_211;
      return 3221225485LL;
    }
  }
  v19 = (v15 >> 1) & 1;
  v20 = *((_QWORD *)v18 + 2);
  v173 = v20;
  if ( *((_BYTE *)v18 + 434) )
  {
    v133 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v204, (struct DXGADAPTER *const)v133, 0LL);
    if ( v19 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v204, 0LL) >= 0 )
    {
      v134 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v133 + 4712),
               v148,
               a1,
               v174,
               (struct _D3DDDICB_SIGNALFLAGS)v11,
               v161,
               v172,
               (const unsigned __int64 *)Src,
               a7,
               v164,
               v15 & 1,
               0,
               0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v204);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
      if ( P != v152 && P )
        ExFreePoolWithTag(P, 0);
      return v134;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v204);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    v98 = P;
    if ( P != v152 && P )
LABEL_189:
      ExFreePoolWithTag(v98, 0);
    return 3221226166LL;
  }
  v159 = v20;
  v160 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v193, v20, 0, v17, (v15 & 2) != 0);
  v21 = 0;
  if ( !v19 )
  {
    if ( (v15 & 1) == 0 && *(_DWORD *)(*((_QWORD *)*Pool2 + 2) + 464LL) != 2 && (v15 & 4) != 0 )
    {
      if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159) )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
        if ( v159 && v160 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v159 + 136));
          KeLeaveCriticalRegion();
        }
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
        if ( P != v152 && P )
          ExFreePoolWithTag(P, 0);
        return 2147483665LL;
      }
      v173 = v159;
      goto LABEL_17;
    }
    v22 = v173;
    v23 = *(struct _KEVENT **)(v173 + 16);
    if ( *(_DWORD *)(v173 + 464) == 2 )
    {
      if ( KeReadStateEvent(v23 + 5) )
        goto LABEL_15;
      v24 = v23 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v23 + 4) )
      {
LABEL_15:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v129, (__int64)"g");
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
        }
        v160 = 1;
        v21 = 1;
        goto LABEL_17;
      }
      v24 = v23 + 4;
    }
    KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
    goto LABEL_15;
  }
LABEL_17:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)&v185, (struct _KTHREAD **)v148);
  for ( i = 1; i < v161; ++i )
  {
    v89 = (v172[i] >> 6) & 0xFFFFFF;
    v90 = v148;
    if ( v89 >= *((_DWORD *)v148 + 74) )
    {
      v92 = 0;
    }
    else
    {
      v91 = *(_DWORD *)(*((_QWORD *)v148 + 35) + 16LL * v89 + 8);
      v92 = ((v172[i] >> 25) & 0x60) == (v91 & 0x60) && (v91 & 0x2000) == 0 && (v91 & 0x1F) != 0;
      v90 = v148;
    }
    if ( v92 )
    {
      v93 = 2LL * v89;
      v94 = *((_QWORD *)v90 + 35);
      if ( (*(_BYTE *)(v94 + 8 * v93 + 8) & 0x1F) == 7 )
      {
        v95 = *(DXGCONTEXT **)(v94 + 8 * v93);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v95 = 0LL;
      }
    }
    else
    {
      v95 = 0LL;
    }
    v96 = v163;
    v163[i] = v95;
    if ( !v95 || *((_QWORD *)v95 + 2) != *((_QWORD *)*v96 + 2) )
    {
      v132 = v172;
      WdLogSingleEntry4(2LL, *v172, v172[i], i, -1073741811LL);
      WdLogGlobalForLineNumber = 716;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hContext 0x%I64x failed to signal with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        *v132,
        v132[i],
        i,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v185);
      goto LABEL_428;
    }
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v185);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v183,
    P,
    v153,
    v26,
    v21);
  if ( v184 )
  {
    if ( !v183[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 733;
      goto LABEL_398;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 738;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
    goto LABEL_428;
  }
  if ( !v19 )
  {
    if ( !v203 )
      goto LABEL_179;
    if ( v200 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v198, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v109 = v199;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v199 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v199 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v110, (__int64)"g");
        KeWaitForSingleObject((char *)v199 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v199, 0LL);
      v109 = v199;
    }
    v201 = 0LL;
    v200 = 1;
    if ( *((_DWORD *)v109 + 50) == 1 )
    {
LABEL_179:
      if ( v196 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v194, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7648;
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v195 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v195 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v97, (__int64)"g");
          KeWaitForSingleObject((char *)v195 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v195, 0LL);
      }
      v197 = 0LL;
      v196 = 1;
      if ( *(_DWORD *)(v202 + 608) == 1 )
        goto LABEL_21;
      COREACCESS::Release((COREACCESS *)v194);
      if ( v203 )
        COREACCESS::Release((COREACCESS *)v198);
    }
    else
    {
      v200 = 0;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v199 + 23) )
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v199, 0LL);
      v201 = 0LL;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    v98 = P;
    if ( P != v152 && P )
      goto LABEL_189;
    return 3221226166LL;
  }
LABEL_21:
  Global = DXGGLOBAL::GetGlobal();
  v149 = Global;
  v150 = 0;
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
  v28 = v149;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v28 + 76), 1u);
  v150 = 1;
  v29 = v163;
  v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v163 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v30 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v30 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 759;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pBroadcastDxgContext[0]->GetRenderCore()->IsCoreResourceSharedOwner()",
      759LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v162) = v15 & 1;
  if ( (v15 & 1) != 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v29 + 2) + 16LL) + 16LL)
                                                     + 216LL)
                                         + 64LL)
                             + 40LL)
                 + 28LL) > 0x1052u )
  {
    if ( (v11 & 0x7FFFFFF8) != 0 )
    {
      v117 = (v11 >> 3) & 0xFFFFFFF;
      v118 = v172;
      WdLogSingleEntry3(2LL, *v172, (unsigned int)v117, -1073741811LL);
      WdLogGlobalForLineNumber = 771;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hContext 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
        *v118,
        (unsigned int)v117,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_303;
    }
    if ( (v11 & 0x80000000) != 0LL )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 777;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.",
        777LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_303;
    }
  }
  v31 = 0;
  LODWORD(v172) = 0;
  v32 = 0;
  v176 = 0;
  v33 = v161;
  if ( v161 )
  {
    v34 = v29;
    v35 = v175;
    v36 = v175;
    do
    {
      if ( (*((_DWORD *)*v34 + 98) & 0x10) != 0 )
        v32 += DXGCONTEXT::GetRenderHwQueueCount(*v34);
      else
        ++v31;
      ++v34;
      --v36;
    }
    while ( v36 );
    v176 = v32;
    LODWORD(v172) = v31;
  }
  else
  {
    v35 = v175;
  }
  v37 = 0LL;
  v165 = 0LL;
  v167 = 0;
  if ( v31 <= 8 )
  {
    v37 = v166;
    v165 = v166;
    if ( v31 )
    {
      memset(v166, 0, 8LL * v31);
      v37 = v165;
    }
    goto LABEL_41;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v31 >= 8 )
  {
    v37 = (_BYTE *)ExAllocatePool2(64LL, 8LL * v31, 1265072196LL);
    v165 = v37;
LABEL_41:
    v167 = v31;
    v181 = v37;
    goto LABEL_42;
  }
  v181 = 0LL;
LABEL_42:
  v38 = 0LL;
  v168 = 0LL;
  v170 = 0;
  if ( v32 > 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v32 < 8 )
    {
      v39 = 0LL;
      goto LABEL_47;
    }
    v38 = (_BYTE *)ExAllocatePool2(64LL, 8LL * v32, 1265072196LL);
    v168 = v38;
    goto LABEL_45;
  }
  v38 = v169;
  v168 = v169;
  if ( v32 )
  {
    memset(v169, 0, 8LL * v32);
    v38 = v168;
LABEL_45:
    v37 = v165;
  }
  v170 = v32;
  v39 = v38;
LABEL_47:
  v175 = v39;
  v40 = v181;
  if ( !v181 || !v39 )
  {
    if ( v39 != v169 && v38 )
    {
      ExFreePoolWithTag(v38, 0);
      v37 = v165;
    }
    v168 = 0LL;
    v170 = 0;
    if ( v37 != v166 && v37 )
      ExFreePoolWithTag(v37, 0);
    v165 = 0LL;
    v167 = 0;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v149);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    v130 = P;
    if ( P == v152 || !P )
      return 3221225495LL;
LABEL_400:
    ExFreePoolWithTag(v130, 0);
    return 3221225495LL;
  }
  v41 = 0;
  if ( v33 )
  {
    v42 = v163;
    do
    {
      v43 = *v42;
      if ( (*((_DWORD *)*v42 + 98) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v43 + 50, &v185);
        v100 = (_QWORD *)*((_QWORD *)&v185 + 1);
        v101 = (_QWORD *)v185;
        while ( v100 != v101 && v100 )
        {
          *(_QWORD *)&v39[8 * v99++] = v100[6];
          v100 = (_QWORD *)*v100;
        }
        v185 = 0LL;
        v40 = v181;
      }
      else
      {
        *(_QWORD *)&v40[8 * v41++] = *((_QWORD *)v43 + 32);
      }
      ++v42;
      --v35;
    }
    while ( v35 );
    v37 = v165;
    v38 = v168;
  }
  if ( (_DWORD)v182 )
  {
    v120 = *v164;
    v121 = 0LL;
    if ( DXGPROCESS::IsNativeWslProcess(v148) )
    {
      v135 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
      v121 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)v135;
      if ( !v135 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 846;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          846LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v168 != v169 && v168 )
          ExFreePoolWithTag(v168, 0);
        v168 = 0LL;
        v170 = 0;
        v37 = v165;
        if ( v165 == v166 || !v165 )
          goto LABEL_455;
LABEL_454:
        ExFreePoolWithTag(v37, 0);
LABEL_455:
        v165 = 0LL;
        v167 = 0;
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v149);
        goto LABEL_398;
      }
      *(_QWORD *)(v135 + 8) = v120;
      *(_WORD *)(v135 + 16) = 1;
      *(_BYTE *)(v135 + 19) = 1;
      v120 = (void *)v135;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v135);
      v122 = v181;
    }
    v123 = (__int64)v163;
    v124 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _BYTE *, _DWORD, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v163 + 2) + 16LL) + 736LL)
                                                                                                  + 8LL)
                                                                                      + 856LL))(
             v176,
             v175,
             v31,
             v122,
             v11,
             v120);
    v128 = v124;
    if ( v124 < 0 )
    {
      v136 = (__int64 *)v164;
      WdLogSingleEntry3(2LL, v148, *v164, v124);
      WdLogGlobalForLineNumber = 869;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to enqueue CPU event 0x%I64x returning 0x%I64x",
        (__int64)v148,
        *v136,
        v128,
        0LL,
        0LL);
      if ( v121 )
        DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(v121);
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      v168 = 0LL;
      v170 = 0;
      if ( v165 != v166 && v165 )
        ExFreePoolWithTag(v165, 0);
      v165 = 0LL;
      v167 = 0;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v149);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
      if ( P != v152 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v128;
    }
    else
    {
      if ( bTracingEnabled )
      {
        v175 = (char *)*v164;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qPR0qPR2qxd_EtwWriteTransfer(v126, v125, v127, v161, v123, 1, (__int64)&v175, v11, 0, v15);
      }
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      v168 = 0LL;
      v170 = 0;
      if ( v165 != v166 && v165 )
        ExFreePoolWithTag(v165, 0);
      v165 = 0LL;
      v167 = 0;
      if ( v150 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v149);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
LABEL_124:
      if ( P != v152 && P )
        ExFreePoolWithTag(P, 0);
      return 0LL;
    }
  }
  v44 = v171;
  if ( !v171 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 893;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Can't signal zero sync objects.", 893LL, 0LL, 0LL, 0LL, 0LL);
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    v137 = v165;
    if ( v165 == v166 || !v165 )
      goto LABEL_475;
    goto LABEL_474;
  }
  v154 = 0LL;
  v156 = 0;
  *(_QWORD *)&v185 = v171;
  if ( v171 <= 2 )
  {
    v154 = v155;
    memset(v155, 0, 8LL * v171);
    v45 = (void **)v154;
LABEL_59:
    v164 = v45;
    v156 = v44;
    v37 = v165;
    v38 = v168;
    goto LABEL_60;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v171 >= 8 )
  {
    v45 = (void **)ExAllocatePool2(256LL, 8LL * v171, 1265072196LL);
    v154 = v45;
    goto LABEL_59;
  }
  v45 = 0LL;
  v164 = 0LL;
LABEL_60:
  if ( !v45 )
  {
    v154 = 0LL;
    v156 = 0;
    if ( v38 == v169 || !v38 )
    {
LABEL_481:
      v170 = 0;
      v168 = 0LL;
      if ( v37 == v166 || !v37 )
        goto LABEL_455;
      goto LABEL_454;
    }
    v138 = v38;
LABEL_479:
    ExFreePoolWithTag(v138, 0);
LABEL_480:
    v37 = v165;
    goto LABEL_481;
  }
  v146 = 0;
  v147 = 0;
  for ( j = 0; j < v44; ++j )
  {
    v182 = j;
    v69 = v174[j];
    v70 = (char *)v148 + 248;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v148 + 248, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v148 + 68) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v71, (__int64)"g");
      ExAcquirePushLockSharedEx(v70, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)v148 + 66);
    v72 = (v69 >> 6) & 0xFFFFFF;
    if ( v72 >= *((_DWORD *)v148 + 74) )
    {
      v74 = 0;
    }
    else
    {
      v73 = *(_DWORD *)(*((_QWORD *)v148 + 35) + 16LL * v72 + 8);
      v74 = ((v69 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v148 + 35) + 16LL * v72 + 8) & 0x60)
         && (v73 & 0x2000) == 0
         && (v73 & 0x1F) != 0;
    }
    if ( v74 )
    {
      v75 = *((_QWORD *)v148 + 35);
      if ( (*(_BYTE *)(v75 + 16LL * v72 + 8) & 0x1F) == 8 )
        v76 = *(_DWORD **)(v75 + 16LL * v72);
      else
        v76 = 0LL;
    }
    else
    {
      v76 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)v148 + 66);
    ExReleasePushLockSharedEx(v70, 0LL);
    KeLeaveCriticalRegion();
    if ( v76 )
    {
      if ( v76[105] == 5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 927;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_MONITORED_FENCE",
          927LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v76[105] == 6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 928;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_PERIODIC_MONITORED_FENCE",
          928LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v146 = 1;
      if ( v147 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 934;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x mixes monitored fence and non-monitored fence sync objects in one signal call.",
          (__int64)v148,
          0LL,
          0LL,
          0LL,
          0LL);
        v142 = v154;
        if ( v154 != v155 && v154 )
          goto LABEL_499;
        goto LABEL_500;
      }
      if ( (v76[106] & 0x100) != 0 )
      {
        v139 = v182;
        v140 = v174;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 941;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Sync object 0x%I64x is created with SignalByKmd and cannot be signaled",
          v140[v139],
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v154 != v155 && v154 )
          ExFreePoolWithTag(v154, 0);
        v154 = 0LL;
        v156 = 0;
        v141 = v168;
        if ( v168 != v169 && v168 )
          goto LABEL_493;
        goto LABEL_494;
      }
      if ( v76[105] == 3 && v171 != 1 )
      {
        v111 = v182;
        v112 = v174;
        v113 = v185;
        WdLogSingleEntry4(2LL, v148, v174[v182], v185, -1073741811LL);
        WdLogGlobalForLineNumber = 955;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed on signaling fence object 0x%I64x at non-1 object count %I64d returning 0x%I64x",
          (__int64)v148,
          v112[v111],
          v113,
          -1073741811LL,
          0LL);
        if ( v154 != v155 && v154 )
          ExFreePoolWithTag(v154, 0);
        v154 = 0LL;
        v156 = 0;
        if ( v168 != v169 && v168 )
          ExFreePoolWithTag(v168, 0);
        v168 = 0LL;
        v170 = 0;
        if ( v165 != v166 && v165 )
          ExFreePoolWithTag(v165, 0);
        v165 = 0LL;
        v167 = 0;
LABEL_303:
        if ( v150 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v149);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
        if ( v173 && v160 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v173 + 136));
          KeLeaveCriticalRegion();
        }
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
LABEL_209:
        v102 = P;
        if ( P != v152 && P )
LABEL_211:
          ExFreePoolWithTag(v102, 0);
        return 3221225485LL;
      }
    }
    else
    {
      v77 = v174[j];
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v70, 0LL) )
      {
        if ( bTracingEnabled && *((_DWORD *)v148 + 68) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v78, (__int64)"g");
        ExAcquirePushLockSharedEx(v70, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)v148 + 66);
      v79 = (v77 >> 6) & 0xFFFFFF;
      v80 = v148;
      if ( v79 >= *((_DWORD *)v148 + 74) )
      {
        v82 = 0;
      }
      else
      {
        v81 = *(_DWORD *)(*((_QWORD *)v148 + 35) + 16LL * v79 + 8);
        v82 = ((v77 >> 25) & 0x60) == (v81 & 0x60) && (v81 & 0x2000) == 0 && (v81 & 0x1F) != 0;
        v80 = v148;
      }
      if ( v82 )
      {
        v83 = *((_QWORD *)v80 + 35);
        if ( (*(_BYTE *)(v83 + 16LL * v79 + 8) & 0x1F) == 0xB )
        {
          v84 = *(_QWORD *)(v83 + 16LL * v79);
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v84 = 0LL;
        }
      }
      else
      {
        v84 = 0LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)v148 + 66);
      ExReleasePushLockSharedEx(v70, 0LL);
      KeLeaveCriticalRegion();
      if ( !v84 )
      {
        v143 = v174;
        WdLogSingleEntry4(2LL, v148, v174[j], j, -1073741811LL);
        WdLogGlobalForLineNumber = 974;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v148,
          v143[j],
          j,
          -1073741811LL,
          0LL);
        goto LABEL_505;
      }
      v147 = 1;
      if ( v146 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 983;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x mixes monitored fence and non-monitored fence sync objects in one signal call.",
          (__int64)v148,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_505;
      }
      if ( (*(_DWORD *)(v84 + 72) & 0x10) != 0 )
      {
        v144 = v174;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 990;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
          v144[j],
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v154 != v155 && v154 )
          ExFreePoolWithTag(v154, 0);
        v154 = 0LL;
        v156 = 0;
        if ( v168 != v169 && v168 )
          ExFreePoolWithTag(v168, 0);
        v168 = 0LL;
        v170 = 0;
        if ( v165 != v166 && v165 )
          ExFreePoolWithTag(v165, 0);
        v165 = 0LL;
        v167 = 0;
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v149);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
        if ( P != v152 && P )
          ExFreePoolWithTag(P, 0);
        return 3221225506LL;
      }
      v85 = *(_QWORD *)(v84 + 16);
      v86 = v163;
      v87 = *((_QWORD *)*v163 + 2);
      if ( v85 != v87 )
      {
        WdLogSingleEntry2(2LL, v87, v85);
        WdLogGlobalForLineNumber = 1000;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
          *((_QWORD *)*v86 + 2),
          *(_QWORD *)(v84 + 16),
          0LL,
          0LL,
          0LL);
        goto LABEL_505;
      }
      v76 = *(_DWORD **)(v84 + 32);
      v88 = v76[105];
      if ( v88 == 7 && v76[79] == 1 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1008;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGDEVICESYNCOBJECT 0x%x. Queuing Wait/Signals not supported on native fence of type D3DDDI_NATIVEFEN"
                    "CE_TYPE_INTRA_GPU, returning STATUS_INVALID_PARAMETER",
          v84,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_505;
      }
      if ( (unsigned int)(v88 - 5) > 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1017;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pSyncObject->GetSyncObjectType() == D3DDDI_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3D"
                    "DDI_PERIODIC_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3DDDI_NATIVE_FENCE",
          1017LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v45 = v164;
    v164[j] = v76;
    v44 = v171;
  }
  v47 = 0LL;
  v190 = 0LL;
  v48 = 0;
  v192 = 0;
  v49 = *((_DWORD *)*v45 + 105);
  if ( v49 != 5 && (unsigned int)(v49 - 6) > 1 )
  {
    v119 = &a7;
    if ( v49 != 3 )
      v119 = 0LL;
    Src = v119;
    v50 = v44;
    goto LABEL_90;
  }
  if ( !(_DWORD)v162 )
  {
    if ( Src )
    {
      v50 = v44;
      goto LABEL_90;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1060;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"MonitoredFenceValueArray is NULL when signaling monitored fence objects",
      1060LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v190 != v191 && v190 )
      ExFreePoolWithTag(v190, 0);
    v190 = 0LL;
    v192 = 0;
LABEL_505:
    v142 = v154;
    if ( v154 != v155 && v154 )
LABEL_499:
      ExFreePoolWithTag(v142, 0);
LABEL_500:
    v154 = 0LL;
    v156 = 0;
    v141 = v168;
    if ( v168 != v169 && v168 )
LABEL_493:
      ExFreePoolWithTag(v141, 0);
LABEL_494:
    v168 = 0LL;
    v170 = 0;
    v137 = v165;
    if ( v165 == v166 || !v165 )
      goto LABEL_475;
LABEL_474:
    ExFreePoolWithTag(v137, 0);
LABEL_475:
    v165 = 0LL;
    v167 = 0;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v149);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
LABEL_428:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
    goto LABEL_429;
  }
  v50 = v44;
  if ( v44 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v44 < 8 )
      goto LABEL_68;
    v47 = (PVOID)ExAllocatePool2(64LL, 8LL * v44, 1265072196LL);
    v190 = v47;
  }
  else
  {
    v190 = v191;
    memset(v191, 0, 8LL * v44);
    v47 = v190;
  }
  v48 = v44;
  v192 = v44;
LABEL_68:
  if ( !v47 )
  {
    v190 = 0LL;
    v192 = 0;
    if ( v154 != v155 && v154 )
      ExFreePoolWithTag(v154, 0);
    v154 = 0LL;
    v156 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v165 != v166 && v165 )
      ExFreePoolWithTag(v165, 0);
    v165 = 0LL;
    v167 = 0;
    if ( v150 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v149);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( v173 && v160 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v173 + 136));
      KeLeaveCriticalRegion();
      v160 = 0;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    if ( P != v152 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v153 = 0;
    return 3221225495LL;
  }
  RtlCopyFromUser(v47, Src, 8LL * v48);
  Src = v190;
  v189 = v190;
LABEL_90:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v187,
    v45,
    v44);
  if ( v188 )
  {
    if ( v187[0] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1093;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The same sync object handle is passed twice",
        1093LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v187);
      if ( v190 != v191 && v190 )
        ExFreePoolWithTag(v190, 0);
      v190 = 0LL;
      v192 = 0;
      if ( v154 != v155 && v154 )
        ExFreePoolWithTag(v154, 0);
      v154 = 0LL;
      v156 = 0;
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      v168 = 0LL;
      v170 = 0;
      if ( v165 != v166 && v165 )
        ExFreePoolWithTag(v165, 0);
      v165 = 0LL;
      v167 = 0;
      if ( v150 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v149);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
      goto LABEL_209;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v187);
    if ( v190 != v191 && v190 )
      ExFreePoolWithTag(v190, 0);
    v190 = 0LL;
    v192 = 0;
    if ( v154 != v155 && v154 )
      ExFreePoolWithTag(v154, 0);
    v154 = 0LL;
    v156 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v165 != v166 && v165 )
      ExFreePoolWithTag(v165, 0);
    v165 = 0LL;
    v167 = 0;
    if ( v150 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v149);
LABEL_398:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
    v130 = P;
    if ( P == v152 || !P )
      return 3221225495LL;
    goto LABEL_400;
  }
  v178 = 0LL;
  v180 = 0;
  if ( v44 <= 2 )
  {
    v178 = v179;
    memset(v179, 0, 8 * v50);
    v52 = v178;
LABEL_93:
    v162 = v52;
    v180 = v44;
    goto LABEL_94;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v50 >= 8 )
  {
    v52 = (PVOID)ExAllocatePool2(64LL, 8 * v50, 1265072196LL);
    v178 = v52;
    goto LABEL_93;
  }
  v52 = 0LL;
  v162 = 0LL;
LABEL_94:
  if ( !v52 )
  {
    v178 = 0LL;
    v180 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v187);
    if ( v190 != v191 && v190 )
      ExFreePoolWithTag(v190, 0);
    v190 = 0LL;
    v192 = 0;
    if ( v154 != v155 && v154 )
      ExFreePoolWithTag(v154, 0);
    v154 = 0LL;
    v156 = 0;
    v138 = v168;
    if ( v168 == v169 || !v168 )
      goto LABEL_480;
    goto LABEL_479;
  }
  for ( k = 0; k < v44; ++k )
  {
    v54 = (__int64)v45[k];
    v55 = *(struct ADAPTER_RENDER **)(*((_QWORD *)*v163 + 2) + 16LL);
    if ( (*(_DWORD *)(v54 + 424) & 4) == 0 )
    {
      if ( !v55 || (v56 = *(struct ADAPTER_RENDER **)(v54 + 456), v56 == v55) )
      {
        v57 = 0;
        goto LABEL_101;
      }
      WdLogSingleEntry4(2LL, v54, v56, v55, -1073741811LL);
      WdLogGlobalForLineNumber = 2619;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
        v54,
        *(_QWORD *)(v54 + 456),
        (__int64)v55,
        -1073741811LL,
        0LL);
      v57 = -1073741811;
      goto LABEL_537;
    }
    v57 = 0;
    for ( m = *(_QWORD **)(v54 + 440); m != (_QWORD *)(v54 + 440); m = (_QWORD *)*m )
    {
      if ( !v55 || (struct ADAPTER_RENDER *)*(m - 17) == v55 )
      {
        if ( m != (_QWORD *)152 )
          goto LABEL_101;
        break;
      }
    }
    if ( v55 )
    {
      if ( (*(_DWORD *)(v54 + 424) & 4) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2658;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCrossAdapterSyncObject()", 2658LL, 0LL, 0LL, 0LL, 0LL);
      }
      v104 = 64LL;
      if ( *(_DWORD *)(v54 + 420) != 7 )
        v104 = 256LL;
      v105 = (DXGADAPTERSYNCOBJECTCA *)operator new(0xB0uLL, 0x4B677844u, v104);
      if ( v105
        && (v106 = DXGADAPTERSYNCOBJECTCA::DXGADAPTERSYNCOBJECTCA(v105, v55, (struct DXGSYNCOBJECT *)v54),
            (v107 = v106) != 0LL) )
      {
        v57 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject(v106, (struct DXGSYNCOBJECT *)v54, 0LL, 0LL, 0LL, 0, 0, 0);
        if ( v57 < 0 )
        {
          DXGADAPTERSYNCOBJECTCA::~DXGADAPTERSYNCOBJECTCA(v107);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v107);
        }
      }
      else
      {
        v57 = -1073741801;
      }
LABEL_537:
      v52 = v162;
    }
LABEL_101:
    v58 = v163;
    v59 = *((_QWORD *)*v163 + 2);
    if ( v57 < 0 )
    {
      WdLogSingleEntry3(2LL, v148, *(_QWORD *)(*(_QWORD *)(v59 + 16) + 16LL), v57);
      WdLogGlobalForLineNumber = 1126;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
        (__int64)v148,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v58 + 2) + 16LL) + 16LL),
        v57,
        0LL,
        0LL);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v187);
      if ( v190 != v191 && v190 )
        ExFreePoolWithTag(v190, 0);
      v190 = 0LL;
      v192 = 0;
      if ( v154 != v155 && v154 )
        ExFreePoolWithTag(v154, 0);
      v154 = 0LL;
      v156 = 0;
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      v168 = 0LL;
      v170 = 0;
      if ( v165 != v166 && v165 )
        ExFreePoolWithTag(v165, 0);
      v165 = 0LL;
      v167 = 0;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v149);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
      if ( P != v152 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v57;
    }
    v60 = *(_QWORD *)(v59 + 16);
    v61 = (_QWORD **)(v54 + 440);
    if ( (*(_DWORD *)(v54 + 424) & 4) != 0 )
    {
      for ( n = *v61; n != v61; n = (_QWORD *)*n )
      {
        v116 = n - 19;
        if ( !v60 || v116[2] == v60 )
          goto LABEL_292;
      }
      v116 = 0LL;
LABEL_292:
      v62 = v116[4];
    }
    else
    {
      v62 = *(_QWORD *)(v54 + 472);
    }
    *((_QWORD *)v52 + k) = v62;
    if ( !v62 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1137;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
        v54,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v187);
      if ( v190 != v191 && v190 )
        ExFreePoolWithTag(v190, 0);
      v190 = 0LL;
      v192 = 0;
      if ( v154 != v155 && v154 )
        ExFreePoolWithTag(v154, 0);
      v154 = 0LL;
      v156 = 0;
      if ( v168 != v169 && v168 )
        ExFreePoolWithTag(v168, 0);
      v168 = 0LL;
      v170 = 0;
      if ( v165 != v166 && v165 )
        ExFreePoolWithTag(v165, 0);
      v165 = 0LL;
      v167 = 0;
      if ( v150 )
      {
        v150 = 0;
        ExReleaseResourceLite(*((PERESOURCE *)v149 + 76));
        KeLeaveCriticalRegion();
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
      if ( v173 && v160 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v173 + 136));
        KeLeaveCriticalRegion();
      }
      if ( v157 && !v158 )
        DXGCONTEXT::ReleaseReference(v157);
      goto LABEL_209;
    }
    v44 = v171;
    v45 = v164;
  }
  v63 = (__int64)v163;
  LOBYTE(v145) = (v15 & 8) != 0;
  v64 = (__int64 *)Src;
  v65 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _BYTE *, unsigned int, PVOID, _DWORD, void *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v163 + 2) + 16LL) + 736LL) + 8LL) + 664LL))(
          v176,
          v175,
          (unsigned int)v172,
          v181,
          v44,
          v52,
          v11,
          Src,
          v145);
  v68 = v65;
  if ( v65 >= 0 )
  {
    if ( v146 )
    {
      if ( bTracingEnabled )
      {
        v114 = 0LL;
        if ( v64 )
          v114 = *v64;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qPR0qPR2qxd_EtwWriteTransfer(v114, v66, v67, v161, v63, v44, (__int64)v162, v11, v114, v15);
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer();
    }
    if ( v178 != v179 && v178 )
      ExFreePoolWithTag(v178, 0);
    v178 = 0LL;
    v180 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v187);
    if ( v190 != v191 && v190 )
      ExFreePoolWithTag(v190, 0);
    v190 = 0LL;
    v192 = 0;
    if ( v154 != v155 && v154 )
      ExFreePoolWithTag(v154, 0);
    v154 = 0LL;
    v156 = 0;
    if ( v168 != v169 && v168 )
      ExFreePoolWithTag(v168, 0);
    v168 = 0LL;
    v170 = 0;
    if ( v165 != v166 && v165 )
      ExFreePoolWithTag(v165, 0);
    v165 = 0LL;
    v167 = 0;
    if ( v150 )
    {
      v150 = 0;
      ExReleaseResourceLite(*((PERESOURCE *)v149 + 76));
      KeLeaveCriticalRegion();
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
    if ( v173 && v160 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v173 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v157 && !v158 )
      DXGCONTEXT::ReleaseReference(v157);
    goto LABEL_124;
  }
  v108 = v174;
  WdLogSingleEntry4(2LL, v148, *v174, 0LL, v65);
  WdLogGlobalForLineNumber = 1160;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v148,
    *v108,
    0LL,
    v68,
    0LL);
  if ( v178 != v179 && v178 )
    ExFreePoolWithTag(v178, 0);
  v178 = 0LL;
  v180 = 0;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v187);
  if ( v190 != v191 && v190 )
    ExFreePoolWithTag(v190, 0);
  v190 = 0LL;
  v192 = 0;
  if ( v154 != v155 && v154 )
    ExFreePoolWithTag(v154, 0);
  v154 = 0LL;
  v156 = 0;
  if ( v168 != v169 && v168 )
    ExFreePoolWithTag(v168, 0);
  v168 = 0LL;
  v170 = 0;
  if ( v165 != v166 && v165 )
    ExFreePoolWithTag(v165, 0);
  v165 = 0LL;
  v167 = 0;
  if ( v150 )
  {
    v150 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v149 + 76));
    KeLeaveCriticalRegion();
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v183);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v193);
  if ( v173 && v160 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v173 + 136));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v157);
  if ( P != v152 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v68;
}
