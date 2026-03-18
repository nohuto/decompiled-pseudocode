/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z @ 0x14035BAD8
 * Callers:
 *     DxgkCreateAllocation @ 0x14035BAB0 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140440500 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1401BAB0C (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     OutputDuplCleanUpPendingList @ 0x14035B7CC (OutputDuplCleanUpPendingList.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x140397368 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(
        struct _D3DKMT_CREATEALLOCATION *Src,
        unsigned int *a2,
        struct DXGALLOCATION **a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  char CurrentThreadPreviousMode; // r12
  struct DXGDEVICE *v7; // r14
  char Flags; // cl
  __int64 v9; // rcx
  struct _KEVENT *v10; // rbx
  struct _KEVENT *v11; // rcx
  volatile signed __int64 *v12; // rax
  volatile signed __int64 *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  enum _D3DKMDT_STANDARDALLOCATION_TYPE v17; // edx
  unsigned int v18; // r12d
  DXGADAPTER *v19; // rbx
  char *v20; // rcx
  ADAPTER_RENDER **v21; // rcx
  __int64 v22; // rcx
  ADAPTER_RENDER **v24; // rcx
  __int64 v25; // rcx
  DXGADAPTER *v26; // rcx
  __int64 v27; // rcx
  int StandardAllocationDriverData; // ebx
  __int64 v29; // rcx
  DXGADAPTER *v30; // rbx
  char *v31; // rcx
  __int64 v32; // rcx
  bool v33; // [rsp+80h] [rbp-208h]
  int v34; // [rsp+88h] [rbp-200h] BYREF
  __int64 v35; // [rsp+90h] [rbp-1F8h]
  char v36; // [rsp+98h] [rbp-1F0h]
  char v37; // [rsp+A0h] [rbp-1E8h]
  struct DXGDEVICE *v38; // [rsp+A8h] [rbp-1E0h] BYREF
  unsigned int v39; // [rsp+B0h] [rbp-1D8h] BYREF
  struct DXGPROCESS *v40; // [rsp+B8h] [rbp-1D0h]
  void *v41; // [rsp+C0h] [rbp-1C8h]
  struct DXGDEVICE *v42; // [rsp+C8h] [rbp-1C0h] BYREF
  struct DXGALLOCATION **v43; // [rsp+D0h] [rbp-1B8h]
  void *v44; // [rsp+D8h] [rbp-1B0h]
  struct DXGDEVICE *v45; // [rsp+E0h] [rbp-1A8h] BYREF
  int v46; // [rsp+E8h] [rbp-1A0h]
  void *v47; // [rsp+F0h] [rbp-198h] BYREF
  DXGADAPTER *v48; // [rsp+F8h] [rbp-190h]
  _D3DKMT_CREATEALLOCATION v49; // [rsp+100h] [rbp-188h] BYREF
  _QWORD v50[2]; // [rsp+150h] [rbp-138h] BYREF
  char v51; // [rsp+160h] [rbp-128h]
  int Size; // [rsp+168h] [rbp-120h] BYREF
  __int64 v53; // [rsp+16Ch] [rbp-11Ch]
  int v54; // [rsp+174h] [rbp-114h]
  __int64 v55; // [rsp+178h] [rbp-110h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v56; // [rsp+180h] [rbp-108h] BYREF
  _BYTE v57[8]; // [rsp+1A0h] [rbp-E8h] BYREF
  _BYTE v58[16]; // [rsp+1A8h] [rbp-E0h] BYREF
  DXGADAPTER *v59; // [rsp+1B8h] [rbp-D0h]
  char v60; // [rsp+1C0h] [rbp-C8h]
  __int64 v61; // [rsp+1C8h] [rbp-C0h]
  _BYTE v62[16]; // [rsp+1E8h] [rbp-A0h] BYREF
  DXGADAPTER *v63; // [rsp+1F8h] [rbp-90h]
  char v64; // [rsp+200h] [rbp-88h]
  __int64 v65; // [rsp+208h] [rbp-80h]
  __int64 v66; // [rsp+228h] [rbp-60h]
  char v67; // [rsp+230h] [rbp-58h]

  v43 = a3;
  v44 = a2;
  *a2 = 0;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2003);
  Current = DXGPROCESS::GetCurrent(v4);
  v40 = Current;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v37 = CurrentThreadPreviousMode;
  v33 = CurrentThreadPreviousMode == 1;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9090;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_59:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  memset(&v49, 0, sizeof(v49));
  memset(&v56, 0, sizeof(v56));
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(&v49, Src, 0x48uLL);
  else
    v49 = *Src;
  v42 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, v49.hDevice, (struct _KTHREAD **)Current, &v42);
  v7 = v42;
  if ( !v42 )
  {
    WdLogSingleEntry2(2LL, v49.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 9132;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v49.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_91;
  }
  Flags = (char)v49.Flags;
  if ( (*(_DWORD *)&v49.Flags & 0x100000) != 0 )
  {
    if ( (*(_DWORD *)&v49.Flags & 0x10000) != 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 9141;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NoKmdAccess cannot be used with StandardAllocation",
        9141LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_91;
    }
    if ( !g_OSTestSigningEnabled )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 9146;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NoKmdAccess can be used only with testsigning",
        9146LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_91;
    }
  }
  if ( v49.NumAllocations > 0x682AA )
  {
    WdLogSingleEntry3(3LL, v42, v49.NumAllocations, -1073741811LL);
    WdLogGlobalForLineNumber = 9159;
    goto LABEL_91;
  }
  if ( (*((_DWORD *)v40 + 102) & 0x100) == 0
    && ((*(_BYTE *)&v49.Flags & 8) != 0
     || (*(_WORD *)&v49.Flags & 0x100) != 0
     || (*(_WORD *)&v49.Flags & 0x1000) != 0
     || (*(_WORD *)&v49.Flags & 0x200) != 0) )
  {
    WdLogSingleEntry2(3LL, v42, -1073741811LL);
    WdLogGlobalForLineNumber = 9173;
    goto LABEL_91;
  }
  if ( (*(_BYTE *)&v49.Flags & 0x20) != 0
    && (*(_DWORD *)&v49.Flags & 0x10000) == 0
    && (*((_DWORD *)v40 + 102) & 0x100) == 0 )
  {
    WdLogSingleEntry2(3LL, v42, -1073741811LL);
    WdLogGlobalForLineNumber = 9187;
    goto LABEL_91;
  }
  if ( (*(_DWORD *)&v49.Flags & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)&v49.Flags & 0x10000) == 0 )
    {
      WdLogSingleEntry2(3LL, v42, -1073741811LL);
      WdLogGlobalForLineNumber = 9199;
      goto LABEL_91;
    }
  }
  else if ( (*(_DWORD *)&v49.Flags & 0x10000) == 0 )
  {
LABEL_19:
    if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    {
      WdLogSingleEntry2(3LL, v7, -1073741811LL);
      WdLogGlobalForLineNumber = 9221;
LABEL_91:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v38);
      goto LABEL_59;
    }
    if ( !v49.NumAllocations && !v49.hResource )
    {
      WdLogSingleEntry2(3LL, v7, -1073741811LL);
      WdLogGlobalForLineNumber = 9232;
LABEL_56:
      v24 = (ADAPTER_RENDER **)v38;
      if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v24[2], (struct DXGDEVICE *)v24);
      goto LABEL_59;
    }
    v45 = v7;
    v9 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
    if ( *(int *)(v9 + 2776) >= 0x2000 || *(_BYTE *)(v9 + 3076) )
      v46 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
    else
      v46 = 0;
    v10 = (struct _KEVENT *)*((_QWORD *)v7 + 2);
    if ( *((_DWORD *)v7 + 116) == 2 )
    {
      if ( KeReadStateEvent(v10 + 5) )
        goto LABEL_27;
      v11 = v10 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v10 + 4) )
      {
LABEL_27:
        if ( v46 )
        {
          KeEnterCriticalRegion();
          if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v7 + 144, 0LL) )
          {
            _InterlockedAdd((volatile signed __int32 *)v7 + 40, 1u);
          }
          else
          {
            KeLeaveCriticalRegion();
            KeEnterCriticalRegion();
            DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL));
            DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v7 + 144));
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL));
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v7 + 17), 0) )
          {
            DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL));
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v32, (__int64)"g");
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v7 + 17), 1u);
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL));
          }
        }
        v12 = *(volatile signed __int64 **)(*((_QWORD *)v7 + 2) + 16LL);
        v48 = (DXGADAPTER *)v12;
        v50[1] = v12;
        _InterlockedAdd64(v12 + 3, 1uLL);
        v50[0] = -1LL;
        v13 = v12 + 17;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v13, 0LL);
        _InterlockedAdd((volatile signed __int32 *)v13 + 4, 1u);
        v51 = 1;
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v7, 2, v14, 0);
        if ( v67 )
        {
          if ( v64 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v62, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7648;
          }
          v26 = v63;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v63 + 23) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v63 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v27, (__int64)"g");
              KeWaitForSingleObject((char *)v63 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v63, 0LL);
            v26 = v63;
          }
          v65 = 0LL;
          v64 = 1;
          if ( *((_DWORD *)v26 + 50) != 1 )
            goto LABEL_70;
        }
        if ( v60 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v58, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7648;
        }
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v59 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v59 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v15, (__int64)"g");
            KeWaitForSingleObject((char *)v59 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v59, 0LL);
        }
        v61 = 0LL;
        v60 = 1;
        if ( *(_DWORD *)(v66 + 608) == 1 )
        {
          *(_DWORD *)v44 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 420LL);
          v16 = 8LL * v49.NumAllocations;
          if ( !is_mul_ok(v49.NumAllocations, 8uLL) )
            v16 = -1LL;
          v44 = (void *)operator new[](v16, 0x4B677844u, 256LL);
          v41 = v44;
          if ( v44 )
          {
            OutputDuplCleanUpPendingList(v7);
            v49.hGlobalShare = 0;
            v49.hDevice = 0;
            v47 = 0LL;
            v39 = 0;
            if ( (*(_DWORD *)&v49.Flags & 0x10000) != 0 )
            {
              if ( *(int *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 3044LL) < 2000 )
              {
                WdLogSingleEntry2(2LL, v7, -1073741811LL);
                WdLogGlobalForLineNumber = 9290;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Device 0x%I64x: Creating StandardAllocation only supported on WDDM2.0+, returning 0x%I64x",
                  (__int64)v7,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v45);
                goto LABEL_56;
              }
              v55 = 0LL;
              Size = v56.ExistingHeapData.Size;
              v53 = 1LL;
              v54 = 7;
              StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(v7, v17, &Size, &v39, &v47);
              if ( StandardAllocationDriverData < 0 )
                goto LABEL_72;
            }
            v18 = DXGDEVICE::CreateAllocation(
                    v7,
                    &v49,
                    v33,
                    0,
                    0LL,
                    0LL,
                    (struct COREDEVICEACCESS *)v57,
                    0,
                    0LL,
                    0LL,
                    0LL,
                    (unsigned __int64 *)v43,
                    &v56,
                    v47,
                    v39);
            v39 = v18;
            if ( v37 == 1 )
            {
              RtlWriteULongToUser(&Src->hResource, v49.hResource);
              RtlWriteULongToUser(&Src->hGlobalShare, v49.hGlobalShare);
              RtlWriteULongToUser(&Src->Flags, *(_DWORD *)&v49.Flags);
            }
            else
            {
              Src->hResource = v49.hResource;
              Src->hGlobalShare = v49.hGlobalShare;
              Src->Flags = v49.Flags;
            }
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v44);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v47);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
            v19 = v48;
            v20 = (char *)v48 + 136;
            _InterlockedAdd((volatile signed __int32 *)v48 + 38, 0xFFFFFFFF);
            ExReleasePushLockSharedEx(v20, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference(v19);
            if ( v46 )
            {
              _InterlockedAdd((volatile signed __int32 *)v7 + 40, 0xFFFFFFFF);
              ExReleasePushLockSharedEx((char *)v7 + 144, 0LL);
            }
            else
            {
              ExReleaseResourceLite(*((PERESOURCE *)v7 + 17));
            }
            KeLeaveCriticalRegion();
          }
          else
          {
            v18 = -1073741801;
            WdLogSingleEntry3(6LL, v7, v49.NumAllocations, -1073741801LL);
            WdLogGlobalForLineNumber = 9266;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Device 0x%I64x: Out of memory allocating destroy handle table with 0x%I64x elements, returning 0x%I64x",
              (__int64)v7,
              v49.NumAllocations,
              -1073741801LL,
              0LL,
              0LL);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
            v30 = v48;
            v31 = (char *)v48 + 136;
            _InterlockedAdd((volatile signed __int32 *)v48 + 38, 0xFFFFFFFF);
            ExReleasePushLockSharedEx(v31, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference(v30);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v45);
          }
          v21 = (ADAPTER_RENDER **)v38;
          if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(v21[2], (struct DXGDEVICE *)v21);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
          if ( v36 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
          }
          return v18;
        }
        COREACCESS::Release((COREACCESS *)v58);
        if ( v67 )
LABEL_70:
          COREACCESS::Release((COREACCESS *)v62);
        StandardAllocationDriverData = -1073741130;
        WdLogSingleEntry2(3LL, v7, -1073741130LL);
        WdLogGlobalForLineNumber = 9251;
LABEL_72:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v45);
        goto LABEL_73;
      }
      v11 = v10 + 4;
    }
    KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
    goto LABEL_27;
  }
  StandardAllocationDriverData = ValidateStandardAllocationParams(&v49, &v56, v33);
  if ( StandardAllocationDriverData >= 0 )
  {
    Flags = (char)v49.Flags;
    goto LABEL_19;
  }
LABEL_73:
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit);
  return (unsigned int)StandardAllocationDriverData;
}
