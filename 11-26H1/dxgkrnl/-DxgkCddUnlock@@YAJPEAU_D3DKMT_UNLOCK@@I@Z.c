/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1402BB340
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1)
{
  struct _KTHREAD **Current; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 CurrentProcess; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v9; // rdi
  __int64 v10; // rcx
  struct DXGADAPTER *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  ADAPTER_RENDER **v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  ADAPTER_RENDER **v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+28h] [rbp-D8h]
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  char v27; // [rsp+60h] [rbp-A0h]
  struct DXGDEVICE *v28; // [rsp+68h] [rbp-98h] BYREF
  char v29; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE *v30; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v31[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v33[64]; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGDEVICE *v34; // [rsp+108h] [rbp+8h]
  char v35; // [rsp+110h] [rbp+10h]

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 3007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 3007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v4 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v3);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1514;
    v7 = PsGetCurrentProcess(v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v7,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  hDevice = a1->hDevice;
  v28 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, hDevice, Current, &v28);
  v9 = v28;
  if ( !v28 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, a1->hDevice, v4);
    v24 = a1->hDevice;
    WdLogGlobalForLineNumber = 1524;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v24,
      v4,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v30);
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v28, v28);
  COREACCESS::COREACCESS((COREACCESS *)v32, *(struct DXGADAPTER *const *)(*((_QWORD *)v9 + 2) + 16LL));
  v12 = (struct DXGADAPTER *)*((_QWORD *)v9 + 237);
  if ( !v12 )
    v12 = *(struct DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL);
  COREACCESS::COREACCESS((COREACCESS *)v33, v12);
  v34 = v9;
  v13 = *((_QWORD *)v9 + 237);
  if ( v13 == *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) || (v35 = 1, !v13) )
    v35 = 0;
  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31, 0LL) >= 0 )
  {
    v18 = DXGDEVICE::Unlock(v9, a1, 0);
    v20 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry3(2LL, v18, v9, v4);
      WdLogGlobalForLineNumber = 1548;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x DxgkCddUnlock failed 0x%I64x 0x%I64x",
        v20,
        (__int64)v9,
        v4,
        0LL,
        0LL);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v33, v19);
    COREACCESS::~COREACCESS((COREACCESS *)v32, v21);
    if ( v29 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v28 + 17));
      KeLeaveCriticalRegion();
    }
    v22 = (ADAPTER_RENDER **)v30;
    if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v22[2], (struct DXGDEVICE *)v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    return (unsigned int)v20;
  }
  else
  {
    COREACCESS::~COREACCESS((COREACCESS *)v33, v14);
    COREACCESS::~COREACCESS((COREACCESS *)v32, v15);
    if ( v29 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v28 + 17));
      KeLeaveCriticalRegion();
    }
    v16 = (ADAPTER_RENDER **)v30;
    if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v16[2], (struct DXGDEVICE *)v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    return 0LL;
  }
}
