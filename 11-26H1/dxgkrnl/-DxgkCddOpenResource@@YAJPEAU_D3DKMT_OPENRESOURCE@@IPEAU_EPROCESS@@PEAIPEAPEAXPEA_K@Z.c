/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1403575E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x140054C90 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140311A60 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x140357CC8 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v9; // rcx
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v11; // r14
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // rax
  int v15; // esi
  unsigned __int64 v16; // rdx
  unsigned __int64 hAllocation; // rbx
  __int64 v18; // rax
  struct _KTHREAD *v19; // r8
  int v20; // edx
  __int64 v21; // rbx
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  ADAPTER_RENDER *v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  ADAPTER_RENDER **v27; // rcx
  __int64 v28; // rcx
  ADAPTER_RENDER **v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  ADAPTER_RENDER **v34; // rcx
  __int64 v35; // rcx
  bool v36; // zf
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  ADAPTER_RENDER **v39; // rcx
  __int64 v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h]
  char v43; // [rsp+60h] [rbp-A0h]
  struct DXGDEVICE *v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE *v46; // [rsp+78h] [rbp-88h] BYREF
  char v47; // [rsp+80h] [rbp-80h]
  char v48[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v49; // [rsp+90h] [rbp-70h]
  char v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v53[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v54[64]; // [rsp+F8h] [rbp-8h] BYREF
  struct DXGDEVICE *v55; // [rsp+138h] [rbp+38h]
  char v56; // [rsp+140h] [rbp+40h]

  v45 = (__int64)a4;
  v51 = (__int64)a6;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 3034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9);
  v11 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1845;
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
    goto LABEL_33;
  }
  hDevice = a1->hDevice;
  v46 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, hDevice, Current, &v46);
  v13 = v46;
  if ( !v46 )
  {
    WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
    v40 = a1->hDevice;
    WdLogGlobalForLineNumber = 1857;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v40,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v30 = (ADAPTER_RENDER **)v44;
    if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v30[2], (struct DXGDEVICE *)v30);
    goto LABEL_33;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    WdLogSingleEntry2(3LL, v46, -1073741811LL);
    WdLogGlobalForLineNumber = 1867;
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v46, v46);
  v14 = *((_QWORD *)v13 + 2);
  v50 = 0;
  v49 = *(_QWORD *)(v14 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
  COREACCESS::COREACCESS((COREACCESS *)v53, *(struct DXGADAPTER *const *)(*((_QWORD *)v13 + 2) + 16LL));
  COREACCESS::COREACCESS((COREACCESS *)v54, *(struct DXGADAPTER *const *)(*((_QWORD *)v13 + 2) + 16LL));
  v55 = v13;
  v56 = 0;
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v52, 0LL);
  if ( v15 >= 0 )
  {
    v15 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
            v13,
            (__int64)a1,
            a1->hGlobalShare,
            0LL,
            a2,
            (struct COREDEVICEACCESS *)&v52,
            0,
            a3,
            (unsigned int *)v45,
            (unsigned __int64 *)v51);
    if ( v15 < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v54, v16);
      COREACCESS::~COREACCESS((COREACCESS *)v53, v37);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      if ( v47 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v46 + 17));
        KeLeaveCriticalRegion();
      }
      v34 = (ADAPTER_RENDER **)v44;
      if ( !v44 )
        goto LABEL_42;
      goto LABEL_40;
    }
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 31));
    v18 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *((_DWORD *)v11 + 74) )
    {
      v19 = v11[35];
      v20 = *((_DWORD *)v19 + 4 * v18 + 2);
      if ( (((unsigned int)hAllocation >> 25) & 0x60) == (*((_BYTE *)v19 + 16 * v18 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        v21 = 2 * ((hAllocation >> 6) & 0xFFFFFF);
        if ( (*((_BYTE *)v19 + 8 * v21 + 8) & 0x1F) == 5 )
        {
          v22 = *((_QWORD *)v19 + v21);
          goto LABEL_16;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v22 = 0LL;
LABEL_16:
    _InterlockedAdd((volatile signed __int32 *)v11 + 66, 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v11 + 31, 0LL);
    KeLeaveCriticalRegion();
    if ( !v22 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v54, v23);
      COREACCESS::~COREACCESS((COREACCESS *)v53, v38);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      if ( v47 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v46 + 17));
        KeLeaveCriticalRegion();
      }
      v39 = (ADAPTER_RENDER **)v44;
      if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v39[2], (struct DXGDEVICE *)v39);
      goto LABEL_33;
    }
    v24 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 2);
    if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v24)
      || (v15 = MapGpuVirtualAddressToAllocation(v24, (struct DXGALLOCATION *)v22), v15 >= 0) )
    {
      if ( a5 )
        *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 760LL) + 8LL)
                                                        + 640LL))(*(_QWORD *)(v22 + 24));
      COREACCESS::~COREACCESS((COREACCESS *)v54, v25);
      COREACCESS::~COREACCESS((COREACCESS *)v53, v26);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      if ( v47 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v46 + 17));
        KeLeaveCriticalRegion();
      }
      v27 = (ADAPTER_RENDER **)v44;
      if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v27[2], (struct DXGDEVICE *)v27);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
      }
      return 0LL;
    }
    DXGDEVICE::DestroyAllocationInternal(
      v13,
      0,
      0LL,
      *(struct DXGRESOURCE **)(v22 + 40),
      0LL,
      DXGDEVICE::DestroyFlagsDefault);
    COREACCESS::~COREACCESS((COREACCESS *)v54, v32);
    COREACCESS::~COREACCESS((COREACCESS *)v53, v33);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    if ( v47 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v46 + 17));
      KeLeaveCriticalRegion();
    }
    v34 = (ADAPTER_RENDER **)v44;
    if ( !v44 )
      goto LABEL_42;
LABEL_40:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v34[2], (struct DXGDEVICE *)v34);
LABEL_42:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    v36 = v43 == 0;
    goto LABEL_43;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v52);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v46);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  v36 = v43 == 0;
LABEL_43:
  if ( !v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit);
  return (unsigned int)v15;
}
