/*
 * XREFs of DxgkReclaimAllocations @ 0x14038DDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x14038E5C0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations(_OWORD *Src)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rsi
  char CurrentThreadPreviousMode; // al
  unsigned __int8 v5; // r14
  DXGDEVICE *v6; // rsi
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  ADAPTER_RENDER **v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+50h] [rbp-138h] BYREF
  __int64 v14; // [rsp+58h] [rbp-130h]
  char v15; // [rsp+60h] [rbp-128h]
  struct DXGDEVICE *v16; // [rsp+68h] [rbp-120h] BYREF
  struct DXGDEVICE *v17[2]; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v18[4]; // [rsp+80h] [rbp-108h] BYREF
  __int128 v19; // [rsp+90h] [rbp-F8h]
  __int64 v20; // [rsp+A0h] [rbp-E8h]
  _D3DKMT_RECLAIMALLOCATIONS2 v21; // [rsp+A8h] [rbp-E0h] BYREF
  _BYTE v22[160]; // [rsp+D0h] [rbp-B8h] BYREF

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2071);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12348;
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
    goto LABEL_13;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v5 = CurrentThreadPreviousMode == 1;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    RtlCopyFromUser(v18, Src, 0x28uLL);
  }
  else
  {
    *(_OWORD *)v18 = *Src;
    v19 = Src[1];
    v20 = *((_QWORD *)Src + 4);
  }
  v21.hPagingQueue = 0;
  v21.NumAllocations = v20;
  v21.pResources = *(D3DKMT_HANDLE **)&v18[2];
  *(_OWORD *)&v21.HandleList = v19;
  v21.PagingFenceValue = 0LL;
  v17[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v16, v18[0], Current, v17);
  v6 = v17[0];
  if ( !v17[0] )
  {
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, v18[0], -1073741811LL);
    WdLogGlobalForLineNumber = 12389;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v18[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_21:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v16);
    goto LABEL_13;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v17,
    v17[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, (__int64)v6, 0, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v22, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, v6, v8);
    WdLogGlobalForLineNumber = 12401;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v17);
    goto LABEL_21;
  }
  v9 = DXGDEVICE::ReclaimAllocations(v6, 0LL, &v21, v5);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v17);
  v10 = (ADAPTER_RENDER **)v16;
  if ( v16 && _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(v10[2], (struct DXGDEVICE *)v10);
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return v9;
}
