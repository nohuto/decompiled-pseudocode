/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1403967E0
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x140396E10 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(void *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rdi
  PVOID v4; // rdi
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // esi
  NTSTATUS v8; // eax
  __int64 v9; // r8
  PVOID v10; // r14
  int Resource; // edi
  ADAPTER_RENDER **v12; // rcx
  __int64 v13; // rcx
  ADAPTER_RENDER **v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  ADAPTER_RENDER **v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+50h] [rbp-128h] BYREF
  __int64 v21; // [rsp+58h] [rbp-120h]
  char v22; // [rsp+60h] [rbp-118h]
  PVOID Object; // [rsp+68h] [rbp-110h] BYREF
  struct DXGDEVICE *v24; // [rsp+70h] [rbp-108h] BYREF
  PERESOURCE *v25; // [rsp+78h] [rbp-100h] BYREF
  char v26; // [rsp+80h] [rbp-F8h]
  HANDLE Handle[2]; // [rsp+88h] [rbp-F0h] BYREF
  __int128 v28; // [rsp+98h] [rbp-E0h]
  __int64 v29; // [rsp+A8h] [rbp-D0h]
  _BYTE v30[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2073;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2073);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    Resource = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11078;
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
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    return (unsigned int)Resource;
  }
  *(_OWORD *)Handle = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  RtlCopyFromUser(Handle, a1, 0x28uLL);
  Object = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v24,
    (unsigned int)Handle[0],
    Current,
    (struct DXGDEVICE **)&Object);
  v4 = Object;
  if ( !Object )
  {
    Resource = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Handle[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 11103;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Handle[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v18 = (ADAPTER_RENDER **)v24;
    if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v18[2], (struct DXGDEVICE *)v18);
    goto LABEL_32;
  }
  v25 = (PERESOURCE *)Object;
  v26 = 0;
  DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v4, 0, v5, 0);
  v6 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(3LL, v4, v6);
    WdLogGlobalForLineNumber = 11117;
LABEL_41:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v25);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return v7;
  }
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v7 = v8;
  v10 = Object;
  if ( v8 != -1073741788 )
  {
    if ( v8 >= 0 )
    {
      Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v4, Handle, v9, Object);
      ObfDereferenceObject(v10);
      if ( Resource >= 0 )
      {
        RtlCopyToUser(a1, Handle, 0x28uLL);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
        if ( v25 && v26 )
        {
          ExReleaseResourceLite(v25[17]);
          KeLeaveCriticalRegion();
        }
        v12 = (ADAPTER_RENDER **)v24;
        if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(v12[2], (struct DXGDEVICE *)v12);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
        }
        return 0LL;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v25);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v24);
      goto LABEL_32;
    }
    WdLogSingleEntry3(3LL, v4, Handle[1], v8);
    WdLogGlobalForLineNumber = 11144;
    goto LABEL_41;
  }
  WdLogSingleEntry3(3LL, v4, Handle[1], -1073741788LL);
  WdLogGlobalForLineNumber = 11136;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
  if ( v25 && v26 )
  {
    ExReleaseResourceLite(v25[17]);
    KeLeaveCriticalRegion();
  }
  v15 = (ADAPTER_RENDER **)v24;
  if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(v15[2], (struct DXGDEVICE *)v15);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
  return 3221225508LL;
}
