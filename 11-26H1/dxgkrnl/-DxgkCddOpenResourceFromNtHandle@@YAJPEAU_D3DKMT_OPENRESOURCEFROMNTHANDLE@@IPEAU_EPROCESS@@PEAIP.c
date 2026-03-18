/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140356CC0
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
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403561E4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x140357CC8 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  HANDLE hNtHandle; // rcx
  NTSTATUS v10; // eax
  PVOID v11; // r12
  int v12; // ebx
  D3DKMT_HANDLE hDevice; // edx
  char v14; // r14
  struct DXGDEVICE *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 hAllocation; // rdi
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  ADAPTER_RENDER *v25; // r14
  unsigned __int64 v26; // rdx
  ADAPTER_RENDER **v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  struct DXGDEVICE *v32; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v33; // [rsp+58h] [rbp-A8h] BYREF
  char v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h]
  char v41; // [rsp+98h] [rbp-68h]
  _BYTE v42[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h]
  char v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v48[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v49[64]; // [rsp+118h] [rbp+18h] BYREF
  struct DXGDEVICE *v50; // [rsp+158h] [rbp+58h]
  char v51; // [rsp+160h] [rbp+60h]

  v46 = (__int64)a4;
  v35 = (__int64)a3;
  v36 = a2;
  v45 = (__int64)a6;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent(v7);
  if ( !Current )
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1958;
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
    goto LABEL_30;
  }
  hNtHandle = a1->hNtHandle;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(
          hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v11 = Object;
  v12 = v10;
  if ( v10 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, a1->hNtHandle, -1073741788LL);
    WdLogGlobalForLineNumber = 1979;
    goto LABEL_28;
  }
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, a1->hNtHandle, v10);
    WdLogGlobalForLineNumber = 1986;
    goto LABEL_28;
  }
  hDevice = a1->hDevice;
  v33 = 0LL;
  v14 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, hDevice, (struct _KTHREAD **)Current, &v33);
  v15 = v33;
  if ( !v33 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
    v31 = a1->hDevice;
    WdLogGlobalForLineNumber = 2010;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v31,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_36;
  }
  if ( a1->TotalPrivateDriverDataBufferSize || a1->ResourcePrivateDriverDataSize )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v33, v33);
    v16 = *((_QWORD *)v15 + 2);
    v44 = 0;
    v43 = *(_QWORD *)(v16 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
    COREACCESS::COREACCESS((COREACCESS *)v48, *(struct DXGADAPTER *const *)(*((_QWORD *)v15 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v49, *(struct DXGADAPTER *const *)(*((_QWORD *)v15 + 2) + 16LL));
    v50 = v15;
    v51 = 0;
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v47, 0LL);
    if ( v12 < 0 )
      goto LABEL_49;
    v12 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
            v15,
            (__int64)a1,
            0,
            (__int64)v11,
            v36,
            (struct COREDEVICEACCESS *)&v47,
            v14,
            (struct _EPROCESS *)v35,
            (unsigned int *)v46,
            (unsigned __int64 *)v45);
    if ( v12 >= 0 )
    {
      hAllocation = a1->pOpenAllocationInfo2->hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
      v19 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v19 < *((_DWORD *)Current + 74)
        && (v20 = *((_QWORD *)Current + 35),
            v21 = *(_DWORD *)(v20 + 16 * v19 + 8),
            (((unsigned int)hAllocation >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
        && (v21 & 0x2000) == 0
        && (v21 & 0x1F) != 0 )
      {
        v22 = 2 * ((hAllocation >> 6) & 0xFFFFFF);
        if ( (*(_BYTE *)(v20 + 8 * v22 + 8) & 0x1F) == 5 )
        {
          v23 = *(_QWORD *)(v20 + 8 * v22);
        }
        else
        {
          WdLogSingleEntry0(2LL);
          v23 = 0LL;
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      else
      {
        v23 = 0LL;
      }
      _InterlockedAdd((volatile signed __int32 *)Current + 66, 0xFFFFFFFF);
      ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( !v23 )
      {
        v12 = -1073741811;
        goto LABEL_23;
      }
      v25 = (ADAPTER_RENDER *)*((_QWORD *)v15 + 2);
      if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v25)
        || (v12 = MapGpuVirtualAddressToAllocation(v25, (struct DXGALLOCATION *)v23), v12 >= 0) )
      {
        if ( a5 )
          *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 760LL) + 8LL)
                                                          + 640LL))(*(_QWORD *)(v23 + 24));
LABEL_23:
        COREACCESS::~COREACCESS((COREACCESS *)v49, v24);
        COREACCESS::~COREACCESS((COREACCESS *)v48, v26);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
        if ( v34 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v33 + 17));
          KeLeaveCriticalRegion();
        }
        v27 = (ADAPTER_RENDER **)v32;
        if ( !v32 )
          goto LABEL_28;
        goto LABEL_26;
      }
      DXGDEVICE::DestroyAllocationInternal(
        v15,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v23 + 40),
        0LL,
        DXGDEVICE::DestroyFlagsDefault);
LABEL_49:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v47);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v33);
      goto LABEL_47;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v49, v17);
    COREACCESS::~COREACCESS((COREACCESS *)v48, v30);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
    if ( v34 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v33 + 17));
      KeLeaveCriticalRegion();
    }
LABEL_36:
    v27 = (ADAPTER_RENDER **)v32;
    if ( !v32 )
      goto LABEL_28;
LABEL_26:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v27[2], (struct DXGDEVICE *)v27);
    goto LABEL_28;
  }
  v12 = -1073741811;
  WdLogSingleEntry2(3LL, v33, -1073741811LL);
  WdLogGlobalForLineNumber = 2021;
LABEL_47:
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v32);
LABEL_28:
  if ( v11 )
    ObfDereferenceObject(v11);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
  return (unsigned int)v12;
}
