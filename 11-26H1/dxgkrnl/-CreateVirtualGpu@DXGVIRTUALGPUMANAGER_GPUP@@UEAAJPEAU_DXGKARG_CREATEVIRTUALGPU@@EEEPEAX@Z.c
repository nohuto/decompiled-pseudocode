/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?VidMmQuerySegmentStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x140055ED8 (-VidMmQuerySegmentStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400584EC (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400588DC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400837F4 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140083820 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     DpiGetGpuVirtualizationLock @ 0x1400856B0 (DpiGetGpuVirtualizationLock.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x14018B640 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1401F6364 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x1402159E4 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x140218B50 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x14021E6B4 (-EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 *     ?InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x14021E83C (-InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1402524F4 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrIsSoftBoot @ 0x1402525D8 (DpiKsrIsSoftBoot.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1403D9950 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x1403E9904 (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        void *a6)
{
  DXGVIRTUALGPUMANAGER_GPUP *v7; // r12
  __int64 *v8; // r15
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rdi
  struct _EX_PUSH_LOCK *GpuVirtualizationLock; // rax
  struct DXGDEVICE *v14; // rsi
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // ebx
  struct _EX_PUSH_LOCK *v18; // rax
  ULONG PartitionId; // eax
  ULONG v20; // ecx
  char v21; // bl
  DXGK_VIRTUAL_GPU *v22; // r15
  ULONG v23; // edx
  __int64 v24; // rbx
  DXGK_VIRTUAL_GPU *v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 NumMemorySegments; // rax
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  bool v36; // cf
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  char *v40; // r9
  __int64 v41; // rax
  int SavedAdapterState; // eax
  _DWORD *v43; // rcx
  unsigned int i; // edx
  ULONG v45; // r11d
  _DWORD *v46; // r9
  __int64 v47; // rdx
  unsigned int v48; // ebx
  int v49; // eax
  __int64 v50; // rdi
  unsigned int v51; // ebx
  __int64 v52; // rsi
  unsigned int v53; // eax
  int v54; // r8d
  __int64 v55; // rdi
  __int64 v56; // rdi
  _QWORD *v57; // rbx
  __int64 v58; // rdx
  _QWORD *v59; // r11
  char *v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // eax
  unsigned __int64 v65; // rsi
  int v66; // ebx
  __int64 v67; // rsi
  _QWORD *v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  ULONG v71; // ecx
  unsigned int v72; // esi
  int v73; // eax
  int v74; // eax
  __int64 v75; // r12
  __int64 *p_MemorySegmentOffset; // rbx
  NTSTATUS v77; // eax
  PVOID v78; // rbx
  PVOID v79; // rcx
  __int64 Object; // [rsp+20h] [rbp-E0h]
  __int64 Objecta; // [rsp+20h] [rbp-E0h]
  __int64 HandleInformation; // [rsp+28h] [rbp-D8h]
  unsigned int v83; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v84; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Current; // [rsp+60h] [rbp-A0h] BYREF
  char *v86; // [rsp+68h] [rbp-98h] BYREF
  struct DXGDEVICE *VirtualGpuDevice; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v88; // [rsp+78h] [rbp-88h]
  __int64 v89; // [rsp+80h] [rbp-80h]
  void *v90; // [rsp+88h] [rbp-78h]
  __int64 v91; // [rsp+90h] [rbp-70h]
  HANDLE Handle; // [rsp+98h] [rbp-68h]
  _BYTE v93[24]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v94[16]; // [rsp+B8h] [rbp-48h] BYREF
  char *v95; // [rsp+C8h] [rbp-38h]
  DXGVIRTUALGPUMANAGER_GPUP *v96; // [rsp+D0h] [rbp-30h]
  _BYTE v97[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v98[24]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v99[24]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v100[54]; // [rsp+120h] [rbp+20h] BYREF
  UINT64 Size; // [rsp+2D0h] [rbp+1D0h] BYREF
  UINT Alignment; // [rsp+2D8h] [rbp+1D8h]
  ULONG DriverSegmentId; // [rsp+2DCh] [rbp+1DCh]
  UINT PrivateDriverData; // [rsp+2E0h] [rbp+1E0h]
  int v105; // [rsp+2E4h] [rbp+1E4h]
  struct _KAPC_STATE ApcState; // [rsp+2E8h] [rbp+1E8h] BYREF
  _BYTE v107[160]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v108[144]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _DXGKARG_SETVIRTUALGPURESOURCES v109; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v110[992]; // [rsp+478h] [rbp+378h] BYREF

  Handle = a6;
  v90 = 0LL;
  v7 = this;
  v96 = this;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1344;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != nullptr", 1344LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)Current + 102) |= 0x40u;
  v89 = *(_QWORD *)(*((_QWORD *)v7 + 4) + 16LL);
  v8 = (__int64 *)v89;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 173);
  v91 = v9;
  memset(&ApcState, 0, sizeof(ApcState));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 216, 0LL);
  *(_QWORD *)(v9 + 224) = KeGetCurrentThread();
  v10 = *((_QWORD *)v7 + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v93,
    (struct DXGADAPTER *)v8,
    1);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v108, (struct DXGADAPTER *const)v8, 0LL);
  LODWORD(v11) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v108, 0LL);
  if ( (int)v11 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v93);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v9 + 224) = 0LL;
LABEL_7:
    ExReleasePushLockExclusiveEx(v9 + 216, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v11;
  }
  GpuVirtualizationLock = (struct _EX_PUSH_LOCK *)DpiGetGpuVirtualizationLock(v8[27]);
  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE((DXGAUTOEXPUSHLOCKEXCLUSIVE *)v99, GpuVirtualizationLock);
  KeStackAttachProcess(*(PRKPROCESS *)(v9 + 56), &ApcState);
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice((DXGPROCESS *)v9, *((struct ADAPTER_RENDER **)v7 + 4));
  KeUnstackDetachProcess(&ApcState);
  if ( !VirtualGpuDevice )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1389;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create partitioned GPU device 0x%I64x",
      1389LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v99);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v93);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v9 + 224) = 0LL;
    LODWORD(v11) = -1073741801;
    goto LABEL_7;
  }
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v99);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v93);
  *(_QWORD *)(v10 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v9 + 224) = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 216, 0LL);
  KeLeaveCriticalRegion();
  v14 = VirtualGpuDevice;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94,
    VirtualGpuDevice);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v93,
    (struct DXGADAPTER *)v8,
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, (__int64)VirtualGpuDevice, 2, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v107, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(3LL, VirtualGpuDevice, v16);
    WdLogGlobalForLineNumber = 1404;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v93);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94);
    return v17;
  }
  v18 = (struct _EX_PUSH_LOCK *)DpiGetGpuVirtualizationLock(v8[27]);
  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE((DXGAUTOEXPUSHLOCKEXCLUSIVE *)v98, v18);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v97, (struct _KTHREAD **)v7 + 5);
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305637) )
  {
    PartitionId = a2->PartitionId;
    if ( a2->PartitionId == 0xFFFF )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1497;
      LODWORD(v11) = -1073741637;
      goto LABEL_114;
    }
    v20 = *((_DWORD *)v7 + 3);
    if ( PartitionId >= v20 )
    {
      WdLogSingleEntry2(2LL, PartitionId, v20);
      HandleInformation = *((unsigned int *)v7 + 3);
      Object = a2->PartitionId;
      WdLogGlobalForLineNumber = 1477;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The PartitionId supplied is greater that the number of available GPU partitions: 0x%I64x 0x%I64x",
        Object,
        HandleInformation,
        0LL,
        0LL,
        0LL);
LABEL_15:
      LODWORD(v11) = -1073741811;
LABEL_114:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v97);
      DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v98);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v93);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94);
      return (unsigned int)v11;
    }
    v21 = 1;
    v22 = *(DXGK_VIRTUAL_GPU **)(*((_QWORD *)v7 + 3) + 8LL * PartitionId);
    if ( !v22 )
    {
      WdLogSingleEntry1(2LL);
      Objecta = a2->PartitionId;
      WdLogGlobalForLineNumber = 1486;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The PartitionId refers to a vGPU that has not yet been created: 0x%I64x",
        Objecta,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_15;
    }
LABEL_26:
    LODWORD(v11) = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)v7 + 4), a2);
    if ( (int)v11 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1505;
LABEL_108:
      if ( v90 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v90);
      if ( v22 )
        (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)v7 + 24LL))(v7, v22);
      goto LABEL_114;
    }
    if ( v21 )
    {
      if ( memcmp(
             &a2->UserModeVirtualDeviceProvider,
             (const void *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 8LL * a2->PartitionId) + 36LL),
             0x10uLL) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1512;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pArgs->UserModeVirtualDeviceProvider == m_pVirtualGpu[pArgs->PartitionId]->UserModeDllId",
          1512LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v32 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 8LL * a2->PartitionId);
      if ( a2->VirtualGpuLuid.LowPart != *(_DWORD *)(v32 + 28) || a2->VirtualGpuLuid.HighPart != *(_DWORD *)(v32 + 32) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1513;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"RtlEqualLuid(&pArgs->VirtualGpuLuid, &m_pVirtualGpu[pArgs->PartitionId]->VirtualGpuLuid)",
          1513LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( Handle )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1514;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"vGPUHandle == nullptr", 1514LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      *((_BYTE *)v22 + 192) = 1;
      *(CLSID *)((char *)v22 + 36) = a2->UserModeVirtualDeviceProvider;
      RtlCopyLuid((PLUID)((char *)v22 + 28), &a2->VirtualGpuLuid);
      NumMemorySegments = a2->NumMemorySegments;
      if ( (unsigned int)NumMemorySegments > 0x20 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1523;
        LODWORD(v11) = -1073741811;
        goto LABEL_108;
      }
      if ( (_DWORD)NumMemorySegments )
      {
        v34 = a2->NumMemorySegments;
        v35 = 112 * NumMemorySegments;
        if ( !is_mul_ok(v34, 0x70uLL) )
          v35 = -1LL;
        v36 = __CFADD__(v35, 8LL);
        v37 = v35 + 8;
        if ( v36 )
          v37 = -1LL;
        v38 = operator new[](v37, 0x4B677844u, 256LL);
        if ( v38 )
        {
          v39 = v38 + 8;
          *(_QWORD *)v38 = v34;
          `vector constructor iterator'(
            (char *)(v38 + 8),
            112LL,
            v34,
            (void (__fastcall *)(char *))DXGK_GPUP_ALLOCATION_INFO::DXGK_GPUP_ALLOCATION_INFO);
        }
        else
        {
          v39 = 0LL;
        }
        *((_QWORD *)v22 + 23) = v39;
        if ( !v39 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1532;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate allocations array",
            1532LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v11) = -1073741801;
          goto LABEL_108;
        }
        *((_DWORD *)v22 + 42) = a2->NumMemorySegments;
      }
      Current = 0LL;
      if ( (unsigned __int8)DpiKsrIsSoftBoot() )
      {
        v41 = *((_QWORD *)v7 + 4);
        v83 = (unsigned int)v40;
        v86 = v40;
        SavedAdapterState = DpiKsrGetSavedAdapterState(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 216LL), &v83, &v86);
        v11 = SavedAdapterState;
        if ( SavedAdapterState < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1555;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to find saved GPU-P state. Status: 0x%I64x",
            v11,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_108;
        }
        if ( v86 )
        {
          v43 = v86 + 4;
          for ( i = 0; i < *(_DWORD *)v86; ++i )
          {
            if ( *v43 == a2->PartitionId )
            {
              v45 = a2->NumMemorySegments;
              if ( v43[2] != v45 )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 1568;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"NumMemorySegments in saved virtual function and new vGPU is different",
                  1568LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_108;
              }
              v46 = v43 + 4;
              v47 = 0LL;
              Current = v43 + 4;
              while ( (unsigned int)v47 < v45 )
              {
                if ( v46[6 * v47] != a2->SegmentInfo[v47].DriverSegmentId
                  || *(_QWORD *)&v46[6 * v47 + 4] != a2->SegmentInfo[v47].Size
                  || v46[6 * v47 + 1] != a2->SegmentInfo[v47].Alignment )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 1578;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Segment parameters in the saved data do not match",
                    1578LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_108;
                }
                v47 = (unsigned int)(v47 + 1);
              }
              break;
            }
            v43 = (_DWORD *)((char *)v43 + (unsigned int)v43[3]);
          }
        }
      }
      v11 = 0LL;
      v88 = (_QWORD *)((char *)v22 + 184);
      v95 = (char *)v14 + 16;
      v86 = (char *)v14 + 16;
      while ( 1 )
      {
        v48 = a2->NumMemorySegments;
        v84 = v11;
        if ( (unsigned int)v11 >= v48 )
          break;
        v105 = 0;
        memset(v100, 0, 0x1A8uLL);
        v49 = *((_DWORD *)v14 + 117);
        LODWORD(v100[0]) |= 0x200u;
        HIDWORD(v100[0]) = v49;
        LODWORD(v100[2]) = 5;
        v100[3] = &Size;
        Size = a2->SegmentInfo[v11].Size;
        Alignment = a2->SegmentInfo[v11].Alignment;
        DriverSegmentId = a2->SegmentInfo[v11].DriverSegmentId;
        PrivateDriverData = a2->SegmentInfo[v11].PrivateDriverData;
        KeStackAttachProcess(*(PRKPROCESS *)(v91 + 56), &ApcState);
        LODWORD(v11) = DXGDEVICE::CreateStandardAllocation(v14, (struct _D3DKM_CREATESTANDARDALLOCATION *)v100, 0LL);
        KeUnstackDetachProcess(&ApcState);
        if ( (int)v11 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1618;
          goto LABEL_108;
        }
        v50 = v91;
        v51 = HIDWORD(v100[6]);
        v52 = v91 + 248;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v91 + 248));
        v53 = (v51 >> 6) & 0xFFFFFF;
        if ( v53 < *(_DWORD *)(v50 + 296)
          && (v54 = *(_DWORD *)(*(_QWORD *)(v50 + 280) + 16LL * v53 + 8),
              ((v51 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v50 + 280) + 16LL * v53 + 8) & 0x60))
          && (v54 & 0x2000) == 0
          && (v54 & 0x1F) != 0 )
        {
          v55 = *(_QWORD *)(v50 + 280);
          if ( (*(_BYTE *)(v55 + 16LL * v53 + 8) & 0x1F) == 5 )
          {
            v56 = *(_QWORD *)(v55 + 16LL * v53);
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            v56 = 0LL;
          }
        }
        else
        {
          v56 = 0LL;
        }
        _InterlockedAdd((volatile signed __int32 *)(v52 + 16), 0xFFFFFFFF);
        ExReleasePushLockSharedEx(v52, 0LL);
        KeLeaveCriticalRegion();
        v57 = (_QWORD *)((char *)v22 + 184);
        v58 = v84;
        v59 = Current;
        v60 = (char *)VirtualGpuDevice + 16;
        v61 = 112LL * v84;
        v62 = *((_QWORD *)v22 + 23);
        v88 = (_QWORD *)((char *)v22 + 184);
        v86 = (char *)VirtualGpuDevice + 16;
        *(_QWORD *)(v61 + v62) = v56;
        v63 = *((_QWORD *)v22 + 23);
        if ( v59 )
          v64 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60
                                                                                                  + 760LL)
                                                                                      + 8LL)
                                                                          + 1192LL))(
                  *(_QWORD *)(*((_QWORD *)v7 + 4) + 768LL),
                  *(_QWORD *)(*(_QWORD *)(v63 + v61) + 24LL),
                  LODWORD(v59[3 * v58]),
                  v59[3 * v58 + 1]);
        else
          v64 = VIDMM_EXPORT::VidMmPinAllocation(
                  *(VIDMM_EXPORT **)(*(_QWORD *)v60 + 760LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 4) + 768LL),
                  *(struct VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v63 + v61) + 24LL),
                  0LL,
                  0LL,
                  0LL,
                  0LL);
        LODWORD(v11) = v64;
        if ( v64 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1670;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to pin virtual GPU allocation. Status = 0x%I64x",
            (int)v11,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_108;
        }
        v11 = v84 + 1;
        *(_QWORD *)(v61 + *v57 + 16) = Size;
        *(_DWORD *)(v61 + *v57 + 24) = Alignment;
        v14 = VirtualGpuDevice;
      }
      v65 = 0LL;
      memset(v109.MemoryInfo, 0, sizeof(v109.MemoryInfo));
      memset(v110, 0, sizeof(v110));
      v109.PartitionId = a2->PartitionId;
      v109.NumMemoryAllocations = v48;
      v11 = 0LL;
      while ( 1 )
      {
        v83 = v11;
        if ( (unsigned int)v11 >= a2->NumMemorySegments )
          break;
        v84 = 0;
        Current = 0LL;
        VirtualGpuDevice = 0LL;
        v66 = *(_DWORD *)(v89 + 5168);
        memset(v100, 0, 0x98uLL);
        v67 = 112 * v11;
        VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
          *(VIDMM_EXPORT **)(*(_QWORD *)v86 + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 4) + 768LL),
          *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(*(_QWORD *)(112 * v11 + *v88) + 48LL) + 8LL),
          &v84,
          (union _LARGE_INTEGER *)&Current,
          (unsigned __int64 *)&VirtualGpuDevice);
        v68 = v88;
        v69 = v11;
        v70 = *v88;
        v71 = v84;
        v109.MemoryInfo[v69].DriverAllocationHandle = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(112 * v11 + *v88) + 48LL)
                                                                + 16LL);
        v109.MemoryInfo[v69].AllocationAddress.MemorySegmentOffset = (UINT64)VirtualGpuDevice;
        v109.MemoryInfo[v69].AllocationAddress.MemorySegmentId = v71;
        v109.MemoryInfo[v69].AllocationSize = a2->SegmentInfo[v11].Size;
        *(_DWORD *)(v67 + v70 + 28) = v71;
        *(_QWORD *)(v67 + *v68 + 8) = VirtualGpuDevice;
        v65 = 0LL;
        LODWORD(v11) = VIDMM_EXPORT::VidMmQuerySegmentStatistics(
                         *(VIDMM_EXPORT **)(*(_QWORD *)v86 + 760LL),
                         *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 4) + 768LL),
                         0,
                         v84 - 1,
                         (struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *)v100);
        if ( (int)v11 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1715;
          goto LABEL_108;
        }
        if ( (v66 & 1) != 0 && !LODWORD(v100[5]) )
        {
          v72 = v83;
          LODWORD(v11) = DXGK_VIRTUAL_GPU_GPUP::InitializeDirtyBitplaneForAllocation(v22, v83);
          if ( (int)v11 < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1724;
            goto LABEL_108;
          }
          if ( (v66 & 2) != 0 )
          {
            v73 = DXGK_VIRTUAL_GPU_GPUP::EnableDirtyBitTrackingForAllocation(v22, v72);
            v65 = 0LL;
            LODWORD(v11) = v73;
            if ( v73 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1733;
              goto LABEL_108;
            }
          }
          else
          {
            v65 = 0LL;
          }
        }
        v88 = (_QWORD *)((char *)v22 + 184);
        v11 = v83 + 1;
        v86 = v95;
      }
      v74 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)v7 + 4), &v109);
      LODWORD(v11) = v74;
      if ( bTracingEnabled )
      {
        DxgkLogInternalTriageEvent(
          v89,
          196610,
          a2->PartitionId,
          (__int64)L"Setting vGPU resources with %1 segments returns %2",
          a2->NumMemorySegments,
          v74,
          0LL,
          0LL,
          0LL);
        if ( a2->NumMemorySegments )
        {
          v75 = v89;
          p_MemorySegmentOffset = (__int64 *)&v109.MemoryInfo[0].AllocationAddress.MemorySegmentOffset;
          do
          {
            DxgkLogInternalTriageEvent(
              v75,
              196610,
              a2->PartitionId,
              (__int64)L"vGPU has a resource set on segment %1 at offset %2 with a size of %3",
              *((unsigned int *)p_MemorySegmentOffset - 2),
              *p_MemorySegmentOffset,
              p_MemorySegmentOffset[1],
              0LL,
              0LL);
            p_MemorySegmentOffset += 4;
            ++v65;
          }
          while ( v65 < a2->NumMemorySegments );
          v7 = v96;
        }
      }
      if ( (int)v11 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1766;
        goto LABEL_108;
      }
      Current = 0LL;
      v77 = ObReferenceObjectByHandle(Handle, 0x20000u, (POBJECT_TYPE)IoFileObjectType, 0, &Current, 0LL);
      v78 = Current;
      LODWORD(v11) = v77;
      if ( v77 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1776;
        goto LABEL_108;
      }
      if ( *((_QWORD *)Current + 4) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1784;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The device file handle to bind to the new vGPU has already been bound to some other object.",
          1784LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v11) = -1073741816;
        ObfDereferenceObject(v78);
        goto LABEL_108;
      }
      v79 = Current;
      *((_QWORD *)Current + 4) = v90;
      *((_QWORD *)v22 + 20) = v78;
      ObfDereferenceObject(v79);
    }
    DXGK_VIRTUAL_GPU::ReportState(v22, v32, v31);
    LODWORD(v11) = 0;
    goto LABEL_114;
  }
  v23 = a2->PartitionId;
  v83 = 0xFFFF;
  LODWORD(v11) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(v7, v23, &v83);
  if ( (int)v11 < 0 )
    goto LABEL_114;
  v24 = v83;
  a2->PartitionId = v83;
  v25 = (DXGK_VIRTUAL_GPU *)operator new(0x168uLL, 0x4B677844u, 256LL);
  v22 = v25;
  if ( v25 )
  {
    DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v25, *((struct ADAPTER_RENDER **)v7 + 4), 0LL);
    *(_QWORD *)v22 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
    *((_QWORD *)v22 + 25) = 0LL;
    *((_QWORD *)v22 + 26) = 0LL;
    *((_DWORD *)v22 + 54) = 0;
    *((_DWORD *)v22 + 55) = 31;
    *((_DWORD *)v22 + 56) = -1;
    `vector constructor iterator'(
      (char *)v22 + 232,
      48LL,
      2LL,
      (void (__fastcall *)(char *))DXGK_TRANSPORT_BUFFER::DXGK_TRANSPORT_BUFFER);
    v90 = (void *)operator new(0x10uLL, 0x4B677844u, 256LL);
    if ( !v90 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1451;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Not enough memory to allocate the DXGSHAREDVGPUOBJECT for handle tracking.",
        1451LL,
        0LL,
        0LL,
        0LL,
        0LL);
      (**(void (__fastcall ***)(DXGK_VIRTUAL_GPU *, __int64))v22)(v22, 1LL);
      LODWORD(v11) = -1073741801;
      goto LABEL_114;
    }
    *((_QWORD *)v22 + 11) = Current;
    *((_DWORD *)v22 + 6) = v24;
    *((_QWORD *)v22 + 22) = v14;
    *(_QWORD *)(*((_QWORD *)v7 + 3) + 8 * v24) = v22;
    ++*((_DWORD *)v7 + 4);
    DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_GPUP *)((char *)v7 + 72));
    v26 = (_QWORD *)((char *)v7 + 104);
    v27 = *((_QWORD *)v7 + 13);
    v28 = (_QWORD *)((char *)v22 + 120);
    if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v27 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)v7 + 104) )
      __fastfail(3u);
    *v28 = v27;
    *((_QWORD *)v22 + 16) = v26;
    *(_QWORD *)(v27 + 8) = v28;
    *v26 = v28;
    *((_QWORD *)v7 + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v7 + 72, 0LL);
    KeLeaveCriticalRegion();
    v29 = v90;
    v30 = v89;
    *((_DWORD *)v90 + 2) = v24;
    v21 = 0;
    *v29 = v30;
    goto LABEL_26;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v97);
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v98);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v93);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94);
  return 3221225495LL;
}
