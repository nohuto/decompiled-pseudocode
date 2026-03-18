/*
 * XREFs of ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140377CC8
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x140306F50 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x140377428 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140441CF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x14000D910 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer @ 0x14001189C (McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x14002FCE0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1400469A4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1400508E4 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x140061324 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1403B3974 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ??0DXGADAPTERSYNCOBJECTCA@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGSYNCOBJECT@@@Z @ 0x14040ED0C (--0DXGADAPTERSYNCOBJECTCA@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14042A764 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SubmitSignalSyncObjectsToHwQueue(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        struct DXGPROCESS *a7,
        bool a8,
        bool a9)
{
  unsigned __int64 v9; // r13
  unsigned __int64 Value; // rbx
  _BYTE *Pool2; // r15
  unsigned __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rdi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v19; // rdi
  __int64 v20; // rcx
  unsigned int i; // edi
  unsigned int v22; // esi
  PVOID v23; // rax
  unsigned int v24; // eax
  PVOID v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // r9d
  _QWORD *v28; // r14
  PVOID v29; // rax
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rsi
  struct ADAPTER_RENDER *v33; // r15
  struct ADAPTER_RENDER *v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned int v37; // edi
  unsigned int v38; // edx
  struct DXGPROCESS *v39; // r8
  int v40; // r8d
  bool v41; // al
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // eax
  unsigned int *v49; // r14
  int v50; // r14d
  _QWORD *j; // rax
  _QWORD *v52; // rcx
  unsigned __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // r8
  int v56; // edx
  __int64 v57; // r14
  unsigned int *v58; // r14
  __int64 v59; // r14
  unsigned int v60; // edx
  struct DXGPROCESS *v61; // r9
  int v62; // r9d
  bool v63; // al
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned int *v66; // rbx
  void **v67; // r10
  int v68; // eax
  __int64 v69; // rbx
  __int64 v70; // rax
  const wchar_t *v71; // r9
  __int64 v72; // r8
  __int64 v73; // r8
  DXGADAPTERSYNCOBJECTCA *v74; // rax
  DXGADAPTERSYNCOBJECT *v75; // r15
  _BYTE *v76; // rdi
  struct DXGGLOBAL *v77; // [rsp+78h] [rbp-350h] BYREF
  char v78; // [rsp+80h] [rbp-348h]
  PVOID v79; // [rsp+88h] [rbp-340h]
  _BYTE v80[16]; // [rsp+90h] [rbp-338h] BYREF
  unsigned int v81; // [rsp+A0h] [rbp-328h]
  unsigned int v82; // [rsp+A8h] [rbp-320h]
  unsigned int v83; // [rsp+ACh] [rbp-31Ch]
  __int64 v84; // [rsp+B0h] [rbp-318h] BYREF
  int v85; // [rsp+B8h] [rbp-310h]
  void *Src; // [rsp+C0h] [rbp-308h]
  _BYTE v87[16]; // [rsp+C8h] [rbp-300h] BYREF
  unsigned int v88; // [rsp+D8h] [rbp-2F0h]
  _BYTE *v89; // [rsp+E0h] [rbp-2E8h]
  unsigned int *v90; // [rsp+E8h] [rbp-2E0h]
  PVOID v91; // [rsp+F0h] [rbp-2D8h] BYREF
  _BYTE v92[16]; // [rsp+F8h] [rbp-2D0h] BYREF
  int v93; // [rsp+108h] [rbp-2C0h]
  _QWORD *v94; // [rsp+110h] [rbp-2B8h]
  _BYTE *v95; // [rsp+118h] [rbp-2B0h]
  PVOID v96; // [rsp+120h] [rbp-2A8h]
  _BYTE v97[16]; // [rsp+128h] [rbp-2A0h] BYREF
  unsigned int v98; // [rsp+138h] [rbp-290h]
  __int64 v99; // [rsp+140h] [rbp-288h]
  struct DXGPROCESS *v100; // [rsp+148h] [rbp-280h]
  PVOID v101; // [rsp+150h] [rbp-278h]
  _BYTE v102[128]; // [rsp+158h] [rbp-270h] BYREF
  int v103; // [rsp+1D8h] [rbp-1F0h]
  _QWORD v104[4]; // [rsp+1E0h] [rbp-1E8h] BYREF
  char v105; // [rsp+200h] [rbp-1C8h]
  _BYTE v106[24]; // [rsp+208h] [rbp-1C0h] BYREF
  PVOID P; // [rsp+220h] [rbp-1A8h]
  _BYTE v108[32]; // [rsp+228h] [rbp-1A0h] BYREF
  unsigned int v109; // [rsp+248h] [rbp-180h]
  _BYTE v110[160]; // [rsp+250h] [rbp-178h] BYREF
  _BYTE v111[144]; // [rsp+2F0h] [rbp-D8h] BYREF

  v9 = a4;
  v88 = a4;
  Value = a3.Value;
  v90 = a2;
  v82 = a1;
  Src = a6;
  v100 = a7;
  v91 = 0LL;
  v93 = 0;
  if ( a4 <= 2 )
  {
    Pool2 = v92;
    v89 = v92;
    v91 = v92;
    if ( !a4 )
    {
LABEL_5:
      v93 = v9;
      v13 = v9;
      goto LABEL_6;
    }
    memset(v92, 0, 8LL * a4);
    Pool2 = v91;
LABEL_4:
    v89 = Pool2;
    goto LABEL_5;
  }
  v13 = a4;
  if ( 0xFFFFFFFFFFFFFFFFuLL / a4 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * a4, 1265072196LL);
    v91 = Pool2;
    goto LABEL_4;
  }
  Pool2 = 0LL;
  v89 = 0LL;
LABEL_6:
  if ( !Pool2 )
  {
    LODWORD(v17) = -1073741801;
    goto LABEL_134;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v87,
    *a5,
    (struct _KTHREAD **)a7,
    (struct DXGHWQUEUE **)Pool2,
    a9,
    1);
  if ( !*(_QWORD *)Pool2 )
  {
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry3(2LL, a7, *a5, -1073741811LL);
    WdLogGlobalForLineNumber = 2317;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)a7,
      *a5,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_133;
  }
  v15 = *(_QWORD *)(*(_QWORD *)Pool2 + 16LL);
  if ( *(_BYTE *)(v15 + 434) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v111, (struct DXGADAPTER *const)v17, 0LL);
    if ( a9 != (_BYTE)v67
      || (v68 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v111, 0LL), v67 = 0LL, v68 >= 0) )
    {
      LODWORD(v17) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v17 + 4712),
                       a7,
                       a1,
                       v90,
                       (struct _D3DDDICB_SIGNALFLAGS)Value,
                       v9,
                       a5,
                       (const unsigned __int64 *)Src,
                       (unsigned __int64)v67,
                       v67,
                       a8,
                       (bool)v67,
                       (struct DXGDEVICE *)v67);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v111);
      goto LABEL_133;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v111);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
    LODWORD(v17) = -1073741130;
    goto LABEL_134;
  }
  v101 = 0LL;
  v103 = 0;
  if ( (unsigned int)v9 > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 8 )
    {
      v16 = 0LL;
      v95 = 0LL;
      goto LABEL_13;
    }
    v16 = (_QWORD *)ExAllocatePool2(64LL, 8 * v13, 1265072196LL);
    v95 = v16;
    v101 = v16;
  }
  else
  {
    v16 = v102;
    v95 = v102;
    v101 = v102;
    if ( (_DWORD)v9 )
    {
      memset(v102, 0, 8 * v13);
      v16 = v101;
      v95 = v101;
    }
  }
  v103 = v9;
LABEL_13:
  if ( !v16 )
    goto LABEL_305;
  v99 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL);
  v84 = v99;
  v85 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v110, v99, 0, v14, a9);
  if ( !a9 )
  {
    if ( a8
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 464LL) == 2
      || (*((_DWORD *)a7 + 102) & 0x100) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
      if ( v101 != v102 && v101 )
        ExFreePoolWithTag(v101, 0);
      v101 = 0LL;
      v103 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
      LODWORD(v17) = -2147483631;
      goto LABEL_134;
    }
    LODWORD(v17) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v110, 0LL);
    if ( (int)v17 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
      if ( v101 != v102 && v101 )
        ExFreePoolWithTag(v101, 0);
      v101 = 0LL;
      v103 = 0;
LABEL_108:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
      if ( v91 != v92 && v91 )
        ExFreePoolWithTag(v91, 0);
      return (unsigned int)v17;
    }
    v99 = v84;
  }
  Global = DXGGLOBAL::GetGlobal();
  v77 = Global;
  v78 = 0;
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
  v19 = v77;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v19 + 76), 1u);
  v78 = 1;
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2402;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pBroadcastDxgHwQueue[0]->GetRenderCore()->IsCoreResourceSharedOwner()",
      2402LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (Value & 0x7FFFFFF8) != 0 )
  {
    v69 = (Value >> 3) & 0xFFFFFFF;
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry3(2LL, *a5, (unsigned int)v69, -1073741811LL);
    WdLogGlobalForLineNumber = 2409;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hHwQueue 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
      *a5,
      (unsigned int)v69,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_129;
  }
  if ( (Value & 0x80000000) != 0LL )
  {
    WdLogSingleEntry0(2LL);
    v70 = 2416LL;
    v71 = L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.";
    goto LABEL_264;
  }
  *v16 = *(_QWORD *)(*(_QWORD *)Pool2 + 48LL);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v106, (struct _KTHREAD **)a7);
  for ( i = 1; i < v88; ++i )
  {
    v59 = i;
    v60 = (a5[i] >> 6) & 0xFFFFFF;
    v61 = a7;
    if ( v60 >= *((_DWORD *)a7 + 74) )
    {
      v63 = 0;
    }
    else
    {
      v62 = *(_DWORD *)(*((_QWORD *)a7 + 35) + 16LL * v60 + 8);
      v63 = ((a5[i] >> 25) & 0x60) == (v62 & 0x60) && (v62 & 0x2000) == 0 && (v62 & 0x1F) != 0;
      v61 = a7;
    }
    if ( !v63 )
      goto LABEL_199;
    v64 = *((_QWORD *)v61 + 35);
    if ( (*(_BYTE *)(v64 + 16LL * v60 + 8) & 0x1F) != 0xF )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_199:
      v65 = 0LL;
      goto LABEL_166;
    }
    v65 = *(_QWORD *)(v64 + 16LL * v60);
LABEL_166:
    *(_QWORD *)&Pool2[8 * i] = v65;
    if ( !v65 || *(_QWORD *)(*(_QWORD *)(v65 + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) )
    {
      v72 = a5[i];
      LODWORD(v17) = -1073741811;
      WdLogSingleEntry4(2LL, *a5, v72, v59, -1073741811LL);
      WdLogGlobalForLineNumber = 2448;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hHwQueue 0x%I64x failed to signal with invalid broadcast queue 0x%I64x at index %I64d returning 0x%I64x",
        *a5,
        a5[v59],
        v59,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v106);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v77);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
      if ( v101 != v102 && v101 )
        ExFreePoolWithTag(v101, 0);
      v101 = 0LL;
      v103 = 0;
      goto LABEL_133;
    }
    *(_QWORD *)&v95[8 * i] = *(_QWORD *)(v65 + 48);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v106);
  v22 = v82;
  if ( !v82 )
  {
    WdLogSingleEntry0(2LL);
    v70 = 2459LL;
    v71 = L"Can't signal zero sync objects.";
LABEL_264:
    WdLogGlobalForLineNumber = v70;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v71, v70, 0LL, 0LL, 0LL, 0LL);
LABEL_274:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v77);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    LODWORD(v17) = -1073741811;
    goto LABEL_132;
  }
  v79 = 0LL;
  v81 = 0;
  if ( v82 <= 2 )
  {
    v79 = v80;
    memset(v80, 0, 8LL * v82);
    v23 = v79;
    goto LABEL_33;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v82 < 8 )
  {
    v23 = 0LL;
  }
  else
  {
    v23 = (PVOID)ExAllocatePool2(256LL, 8LL * v82, 1265072196LL);
    v79 = v23;
LABEL_33:
    v81 = v22;
  }
  v94 = v23;
  if ( !v23 )
  {
LABEL_265:
    v79 = 0LL;
    v81 = 0;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v77);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
LABEL_305:
    v101 = 0LL;
    v103 = 0;
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
    PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v91);
    return 3221225495LL;
  }
  v24 = 0;
  while ( 1 )
  {
    v83 = v24;
    if ( v24 >= v22 )
    {
      v25 = 0LL;
      P = 0LL;
      v26 = 0LL;
      v109 = 0;
      if ( v22 > 4 )
      {
        v27 = 0;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v22 < 8 )
        {
LABEL_40:
          if ( !v25 )
          {
            P = 0LL;
            v109 = 0;
            if ( v79 != v80 && v79 )
              ExFreePoolWithTag(v79, 0);
            goto LABEL_265;
          }
          if ( a8 )
            RtlCopyFromUser(v25, Src, 8 * v26);
          else
            memmove(v25, Src, 8LL * v27);
          v100 = (struct DXGPROCESS *)P;
          v28 = v94;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
            (__int64)v104,
            v94,
            v22);
          if ( v105 )
          {
            if ( !v104[0] )
            {
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v104);
              if ( P != v108 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v109 = 0;
              if ( v79 != v80 && v79 )
                ExFreePoolWithTag(v79, 0);
              v79 = 0LL;
              v81 = 0;
              if ( v78 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v77);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
              if ( v101 != v102 && v101 )
                ExFreePoolWithTag(v101, 0);
              v101 = 0LL;
              v103 = 0;
              DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
              if ( v91 != v92 && v91 )
                ExFreePoolWithTag(v91, 0);
              return 3221225495LL;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 2589;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"The same sync object handle is passed twice",
              2589LL,
              0LL,
              0LL,
              0LL,
              0LL);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v104);
            if ( P != v108 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v109 = 0;
            if ( v79 != v80 && v79 )
              ExFreePoolWithTag(v79, 0);
            v79 = 0LL;
            v81 = 0;
            if ( v78 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v77);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
LABEL_94:
            if ( v101 != v102 && v101 )
              ExFreePoolWithTag(v101, 0);
            v101 = 0LL;
            v103 = 0;
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
            if ( v91 != v92 )
            {
              if ( v91 )
                ExFreePoolWithTag(v91, 0);
            }
            return -1073741811LL;
          }
          v96 = 0LL;
          v98 = 0;
          if ( v22 > 2 )
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / v22 < 8 )
            {
              Src = 0LL;
LABEL_47:
              v30 = 0LL;
              while ( 1 )
              {
                v83 = v30;
                v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL);
                if ( (unsigned int)v30 >= v22 )
                  break;
                v32 = v28[v30];
                v33 = *(struct ADAPTER_RENDER **)(v31 + 16);
                if ( (*(_DWORD *)(v32 + 424) & 4) != 0 )
                {
                  v50 = 0;
                  for ( j = *(_QWORD **)(v32 + 440); j != (_QWORD *)(v32 + 440); j = (_QWORD *)*j )
                  {
                    v52 = j - 19;
                    if ( !v33 || (struct ADAPTER_RENDER *)v52[2] == v33 )
                      goto LABEL_114;
                  }
                  v52 = 0LL;
LABEL_114:
                  if ( !v52 && v33 )
                  {
                    v73 = 64LL;
                    if ( *(_DWORD *)(v32 + 420) != 7 )
                      v73 = 256LL;
                    v74 = (DXGADAPTERSYNCOBJECTCA *)operator new(0xB0uLL, 0x4B677844u, v73);
                    if ( v74 )
                      v75 = DXGADAPTERSYNCOBJECTCA::DXGADAPTERSYNCOBJECTCA(v74, v33, (struct DXGSYNCOBJECT *)v32);
                    else
                      v75 = 0LL;
                    if ( v75 )
                    {
                      v50 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
                              v75,
                              (struct DXGSYNCOBJECT *)v32,
                              0LL,
                              0LL,
                              0LL,
                              0,
                              0,
                              0);
                      if ( v50 < 0 )
                        DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(v75);
                    }
                    else
                    {
                      v50 = -1073741801;
                    }
                  }
                  if ( v50 < 0 )
                    goto LABEL_292;
                  LODWORD(v30) = v83;
                  v28 = v94;
                }
                else if ( v33 )
                {
                  v34 = *(struct ADAPTER_RENDER **)(v32 + 456);
                  if ( v34 != v33 )
                  {
                    WdLogSingleEntry4(2LL, v32, v34, v33, -1073741811LL);
                    WdLogGlobalForLineNumber = 2619;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
                      v32,
                      *(_QWORD *)(v32 + 456),
                      (__int64)v33,
                      -1073741811LL,
                      0LL);
                    v50 = -1073741811;
LABEL_292:
                    v76 = v89;
                    WdLogSingleEntry3(
                      2LL,
                      a7,
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89 + 16LL) + 16LL) + 16LL) + 16LL),
                      v50);
                    WdLogGlobalForLineNumber = 2617;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
                      (__int64)a7,
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v76 + 16LL) + 16LL) + 16LL) + 16LL),
                      v50,
                      0LL,
                      0LL);
                    if ( v96 != v97 && v96 )
                      ExFreePoolWithTag(v96, 0);
                    v96 = 0LL;
                    v98 = 0;
                    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v104);
                    if ( P != v108 && P )
                      ExFreePoolWithTag(P, 0);
                    P = 0LL;
                    v109 = 0;
                    if ( v79 != v80 && v79 )
                      ExFreePoolWithTag(v79, 0);
                    v79 = 0LL;
                    v81 = 0;
                    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v77);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
                    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
                    if ( v101 != v102 && v101 )
                      ExFreePoolWithTag(v101, 0);
                    v101 = 0LL;
                    v103 = 0;
                    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
                    PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v91);
                    return (unsigned int)v50;
                  }
                }
                Pool2 = v89;
                if ( (*(_DWORD *)(v32 + 424) & 4) != 0 )
                  v35 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                      (DXGSYNCOBJECTCA *)v32,
                                      *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89 + 16LL) + 16LL)
                                                                + 16LL))
                        + 4);
                else
                  v35 = *(_QWORD *)(v32 + 472);
                *((_QWORD *)Src + (unsigned int)v30) = v35;
                if ( !v35 )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 2628;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
                    v32,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  if ( v96 != v97 && v96 )
                    ExFreePoolWithTag(v96, 0);
                  v96 = 0LL;
                  v98 = 0;
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v104);
                  if ( P != v108 && P )
                    ExFreePoolWithTag(P, 0);
                  P = 0LL;
                  v109 = 0;
                  if ( v79 != v80 && v79 )
                    ExFreePoolWithTag(v79, 0);
                  v79 = 0LL;
                  v81 = 0;
                  if ( v78 )
                    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v77);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
                  if ( v99 && v85 )
                  {
                    ExReleaseResourceLite(*(PERESOURCE *)(v99 + 136));
                    KeLeaveCriticalRegion();
                  }
                  goto LABEL_94;
                }
                v30 = (unsigned int)(v30 + 1);
                v22 = v82;
              }
              v47 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, void *, _DWORD, struct DXGPROCESS *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 736LL) + 8LL) + 672LL))(
                      v88,
                      v95,
                      v82,
                      Src,
                      Value,
                      v100);
              v17 = v47;
              if ( v47 >= 0 )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer();
                if ( v96 != v97 && v96 )
                  ExFreePoolWithTag(v96, 0);
                v96 = 0LL;
                v98 = 0;
                DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v104);
                if ( P != v108 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v109 = 0;
                if ( v79 != v80 && v79 )
                  ExFreePoolWithTag(v79, 0);
                v79 = 0LL;
                v81 = 0;
                if ( v78 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v77);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
                if ( v99 && v85 )
                {
                  ExReleaseResourceLite(*(PERESOURCE *)(v99 + 136));
                  KeLeaveCriticalRegion();
                }
                if ( v101 != v102 && v101 )
                  ExFreePoolWithTag(v101, 0);
                v101 = 0LL;
                v103 = 0;
                DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
                if ( v91 != v92 && v91 )
                  ExFreePoolWithTag(v91, 0);
                return 0LL;
              }
              v49 = v90;
              WdLogSingleEntry4(2LL, a7, *v90, 0LL, v47);
              WdLogGlobalForLineNumber = 2648;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
                (__int64)a7,
                *v49,
                0LL,
                v17,
                0LL);
              if ( v96 != v97 && v96 )
                ExFreePoolWithTag(v96, 0);
              v96 = 0LL;
              v98 = 0;
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v104);
              if ( P != v108 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v109 = 0;
              if ( v79 != v80 && v79 )
                ExFreePoolWithTag(v79, 0);
              v79 = 0LL;
              v81 = 0;
              if ( v78 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v77);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
              if ( v99 && v85 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v99 + 136));
                KeLeaveCriticalRegion();
              }
              if ( v101 != v102 && v101 )
                ExFreePoolWithTag(v101, 0);
              v101 = 0LL;
              v103 = 0;
              goto LABEL_108;
            }
            v29 = (PVOID)ExAllocatePool2(64LL, 8LL * v22, 1265072196LL);
            v96 = v29;
            v22 = v82;
          }
          else
          {
            v96 = v97;
            memset(v97, 0, 8LL * v22);
            v29 = v96;
          }
          Src = v29;
          v98 = v22;
          goto LABEL_47;
        }
        v25 = (PVOID)ExAllocatePool2(64LL, 8LL * v22, 1265072196LL);
        P = v25;
      }
      else
      {
        P = v108;
        memset(v108, 0, 8LL * v22);
        v25 = P;
      }
      v26 = v22;
      v109 = v22;
      v27 = v22;
      goto LABEL_40;
    }
    v36 = v24;
    v37 = v90[v24];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a7 + 248));
    v38 = (v37 >> 6) & 0xFFFFFF;
    v39 = a7;
    if ( v38 >= *((_DWORD *)a7 + 74) )
    {
      v41 = 0;
    }
    else
    {
      v40 = *(_DWORD *)(*((_QWORD *)a7 + 35) + 16LL * v38 + 8);
      v41 = ((v37 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a7 + 35) + 16LL * v38 + 8) & 0x60)
         && (v40 & 0x2000) == 0
         && (v40 & 0x1F) != 0;
      v39 = a7;
    }
    if ( v41 && (v42 = *((_QWORD *)v39 + 35), (*(_BYTE *)(v42 + 16LL * v38 + 8) & 0x1F) == 0xB) )
      v43 = *(_QWORD *)(v42 + 16LL * v38);
    else
      v43 = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)a7 + 66);
    ExReleasePushLockSharedEx((char *)a7 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v43 )
      break;
    if ( (*(_DWORD *)(v43 + 72) & 0x10) != 0 )
    {
      v66 = v90;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2490;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
        v66[v36],
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v79 != v80 && v79 )
        ExFreePoolWithTag(v79, 0);
      v79 = 0LL;
      v81 = 0;
      if ( v78 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v77);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
      if ( v101 != v102 && v101 )
        ExFreePoolWithTag(v101, 0);
      v101 = 0LL;
      v103 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
      if ( v91 != v92 && v91 )
        ExFreePoolWithTag(v91, 0);
      return 3221225506LL;
    }
    v44 = *(_QWORD *)(v43 + 32);
    if ( *(_DWORD *)(v44 + 420) == 7 && *(_DWORD *)(v44 + 316) == 1 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2498;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGDEVICESYNCOBJECT 0x%x. Queuing Wait/Signals not supported on native fence of type D3DDDI_NATIVEFENCE"
                  "_TYPE_INTRA_GPU, returning STATUS_INVALID_PARAMETER",
        v43,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_270;
    }
    v45 = *(_QWORD *)(v43 + 16);
    v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL);
    if ( v45 != v46 )
    {
      WdLogSingleEntry2(2LL, v46, v45);
      WdLogGlobalForLineNumber = 2508;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL),
        *(_QWORD *)(v43 + 16),
        0LL,
        0LL,
        0LL);
LABEL_270:
      if ( v79 != v80 && v79 )
        ExFreePoolWithTag(v79, 0);
      v79 = 0LL;
      v81 = 0;
      goto LABEL_274;
    }
LABEL_69:
    v94[v36] = v44;
    v24 = v83 + 1;
    v22 = v82;
  }
  v53 = v90[v36];
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a7 + 248));
  v54 = ((unsigned int)v53 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v54 < *((_DWORD *)a7 + 74)
    && (v55 = *((_QWORD *)a7 + 35),
        v56 = *(_DWORD *)(v55 + 16 * v54 + 8),
        (((unsigned int)v53 >> 25) & 0x60) == (*(_BYTE *)(v55 + 16 * v54 + 8) & 0x60))
    && (v56 & 0x2000) == 0
    && (v56 & 0x1F) != 0 )
  {
    v57 = 2 * ((v53 >> 6) & 0xFFFFFF);
    if ( (*(_BYTE *)(v55 + 8 * v57 + 8) & 0x1F) == 8 )
    {
      v44 = *(_QWORD *)(v55 + 8 * v57);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      v44 = 0LL;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v44 = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)a7 + 66);
  ExReleasePushLockSharedEx((char *)a7 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v44 )
    goto LABEL_69;
  v58 = v90;
  LODWORD(v17) = -1073741811;
  WdLogSingleEntry4(2LL, a7, v90[v36], v36, -1073741811LL);
  WdLogGlobalForLineNumber = 2526;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)a7,
    v58[v36],
    v36,
    -1073741811LL,
    0LL);
  if ( v79 != v80 && v79 )
    ExFreePoolWithTag(v79, 0);
  v79 = 0LL;
  v81 = 0;
LABEL_129:
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v77);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v84);
  if ( v101 != v102 && v101 )
    ExFreePoolWithTag(v101, 0);
LABEL_132:
  v101 = 0LL;
  v103 = 0;
LABEL_133:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v87);
LABEL_134:
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v91);
  return (unsigned int)v17;
}
