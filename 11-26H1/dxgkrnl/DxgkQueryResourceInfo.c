/*
 * XREFs of DxgkQueryResourceInfo @ 0x1403536E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140037E2C (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1403555B8 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(void *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rdi
  struct DXGDEVICE *v4; // rdi
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // esi
  int Resource; // edi
  ADAPTER_RENDER **v9; // rcx
  __int64 v10; // rcx
  ADAPTER_RENDER **v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp-118h] BYREF
  __int64 v16; // [rsp+58h] [rbp-110h]
  char v17; // [rsp+60h] [rbp-108h]
  struct DXGDEVICE *v18; // [rsp+68h] [rbp-100h] BYREF
  char v19; // [rsp+70h] [rbp-F8h]
  struct DXGDEVICE *v20; // [rsp+78h] [rbp-F0h] BYREF
  _OWORD Src[2]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v22[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2004);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    Resource = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10993;
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
    goto LABEL_25;
  }
  memset(Src, 0, sizeof(Src));
  RtlCopyFromUser(Src, a1, 0x20uLL);
  v18 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, Src[0], Current, &v18);
  v4 = v18;
  if ( !v18 )
  {
    Resource = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 11018;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v20);
LABEL_25:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    return (unsigned int)Resource;
  }
  v19 = 0;
  DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v18);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, (__int64)v4, 0, v5, 0);
  v6 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v22, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v4, Src, DWORD1(Src[0]));
    if ( Resource >= 0 )
    {
      RtlCopyToUser(a1, Src, 0x20uLL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
      if ( v18 && v19 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v18 + 17));
        KeLeaveCriticalRegion();
      }
      v9 = (ADAPTER_RENDER **)v20;
      if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v9[2], (struct DXGDEVICE *)v9);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
      if ( v17 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
      }
      return 0LL;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
    if ( v18 && v19 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v18 + 17));
      KeLeaveCriticalRegion();
    }
    v12 = (ADAPTER_RENDER **)v20;
    if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v12[2], (struct DXGDEVICE *)v12);
    goto LABEL_25;
  }
  WdLogSingleEntry2(3LL, v4, v6);
  WdLogGlobalForLineNumber = 11032;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v18);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  return v7;
}
