/*
 * XREFs of DxgkUnlock @ 0x1402BB730
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140428540 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkUnlock(struct _D3DKMT_UNLOCK *Src)
{
  char CurrentThreadPreviousMode; // si
  struct _KTHREAD **Current; // r14
  struct DXGDEVICE *v4; // rdi
  __int64 v5; // r9
  const char *v6; // rdx
  unsigned int v7; // edi
  char *v8; // rcx
  ADAPTER_RENDER **v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+50h] [rbp-108h] BYREF
  __int64 v14; // [rsp+58h] [rbp-100h]
  char v15; // [rsp+60h] [rbp-F8h]
  struct DXGDEVICE *v16; // [rsp+68h] [rbp-F0h] BYREF
  int v17; // [rsp+70h] [rbp-E8h]
  struct DXGDEVICE *v18; // [rsp+78h] [rbp-E0h] BYREF
  struct _D3DKMT_UNLOCK v19; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v20[160]; // [rsp+90h] [rbp-C8h] BYREF

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2012);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 735;
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
LABEL_17:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( v15 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    }
    return v7;
  }
  v19 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(&v19, Src, 0x10uLL);
  else
    v19 = *Src;
  v16 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v18, v19.hDevice, Current, &v16);
  v4 = v16;
  if ( !v16 )
  {
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, v19.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 767;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      v19.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v16,
    v16);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, (__int64)v4, 2, v5, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v20, v6);
  if ( *((_DWORD *)v4 + 152) != 4 )
  {
    v19.hDevice = 0;
    v7 = DXGDEVICE::Unlock(v4, &v19, CurrentThreadPreviousMode == 1);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
    if ( v17 )
    {
      v8 = (char *)v16 + 144;
      _InterlockedAdd((volatile signed __int32 *)v16 + 40, 0xFFFFFFFF);
      ExReleasePushLockSharedEx(v8, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*((PERESOURCE *)v16 + 17));
    }
    KeLeaveCriticalRegion();
LABEL_14:
    v9 = (ADAPTER_RENDER **)v18;
    if ( v18 && _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v9[2], (struct DXGDEVICE *)v9);
    goto LABEL_17;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v16);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return 0LL;
}
