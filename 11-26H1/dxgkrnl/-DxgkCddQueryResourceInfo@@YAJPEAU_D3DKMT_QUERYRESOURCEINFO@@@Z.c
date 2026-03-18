/*
 * XREFs of ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1403572F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1403555B8 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfo(struct _D3DKMT_QUERYRESOURCEINFO *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rax
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v5; // rbx
  int v6; // esi
  unsigned int Resource; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  ADAPTER_RENDER **v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-E0h]
  _QWORD v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h]
  struct DXGDEVICE *v17; // [rsp+70h] [rbp-98h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h]
  struct DXGDEVICE *v19; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v20[8]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v21[64]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v22[64]; // [rsp+D0h] [rbp-38h] BYREF
  struct DXGDEVICE *v23; // [rsp+110h] [rbp+8h]
  char v24; // [rsp+118h] [rbp+10h]

  LODWORD(v15[0]) = -1;
  v15[1] = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    LOBYTE(v16) = 1;
    LODWORD(v15[0]) = 3035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    LOBYTE(v16) = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v15, 3035);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    Resource = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1570;
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
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v15);
    if ( (_BYTE)v16 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    }
    return Resource;
  }
  hDevice = a1->hDevice;
  v17 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v19, hDevice, Current, &v17);
  v5 = v17;
  if ( !v17 )
  {
    Resource = -1073741811;
    WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
    v14 = a1->hDevice;
    WdLogGlobalForLineNumber = 1584;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v14,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_10:
    v10 = (ADAPTER_RENDER **)v19;
    if ( v19 && _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v10[2], (struct DXGDEVICE *)v10);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v17, v17);
  COREACCESS::COREACCESS((COREACCESS *)v21, *(struct DXGADAPTER *const *)(*((_QWORD *)v5 + 2) + 16LL));
  COREACCESS::COREACCESS((COREACCESS *)v22, *(struct DXGADAPTER *const *)(*((_QWORD *)v5 + 2) + 16LL));
  v23 = v5;
  v24 = 0;
  v6 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20, 0LL);
  if ( v6 >= 0 )
  {
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)v5, a1, a1->hGlobalShare);
    COREACCESS::~COREACCESS((COREACCESS *)v22, v8);
    COREACCESS::~COREACCESS((COREACCESS *)v21, v9);
    if ( (_BYTE)v18 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v17 + 17));
      KeLeaveCriticalRegion();
    }
    goto LABEL_10;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v17);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v15);
  if ( (_BYTE)v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  return (unsigned int)v6;
}
