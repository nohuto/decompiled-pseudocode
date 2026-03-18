/*
 * XREFs of DxgkReclaimAllocations2 @ 0x14038E1A0
 * Callers:
 *     ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AF90 (-VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1400102C4 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001628C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x14038E5C0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(struct _D3DKMT_RECLAIMALLOCATIONS2 *Src)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // r14
  char CurrentThreadPreviousMode; // r15
  struct DXGPAGINGQUEUE *v5; // r13
  struct DXGPAGINGQUEUE *v6; // r12
  __int64 v7; // r9
  int v8; // eax
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+58h] [rbp-130h] BYREF
  __int64 v14; // [rsp+60h] [rbp-128h]
  char v15; // [rsp+68h] [rbp-120h]
  struct DXGPAGINGQUEUE *v16; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v17[8]; // [rsp+78h] [rbp-110h] BYREF
  struct _D3DKMT_RECLAIMALLOCATIONS2 v18; // [rsp+80h] [rbp-108h] BYREF
  _BYTE v19[24]; // [rsp+A8h] [rbp-E0h] BYREF
  _BYTE v20[160]; // [rsp+C0h] [rbp-C8h] BYREF

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
  if ( Current )
  {
    CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
    memset(&v18, 0, sizeof(v18));
    if ( CurrentThreadPreviousMode == 1 )
      RtlCopyFromUser(&v18, Src, 0x28uLL);
    else
      v18 = *Src;
    v16 = 0LL;
    DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v17, v18.hPagingQueue, Current, &v16, 1);
    v5 = v16;
    if ( v16 )
    {
      v6 = (struct DXGPAGINGQUEUE *)*((_QWORD *)v16 + 2);
      v16 = v6;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v19,
        v6);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, (__int64)v6, 0, v7, 0);
      v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20, 0LL);
      v9 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(3LL, v6, v8);
        WdLogGlobalForLineNumber = 12477;
      }
      else
      {
        v9 = DXGDEVICE::ReclaimAllocations(v6, v5, &v18, CurrentThreadPreviousMode == 1);
        if ( v9 >= 0 )
        {
          if ( CurrentThreadPreviousMode == 1 )
            RtlWriteULong64ToUser(&Src->PagingFenceValue, v18.PagingFenceValue);
          else
            Src->PagingFenceValue = v18.PagingFenceValue;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v19);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v17);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
      if ( v15 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
      }
      return (unsigned int)v9;
    }
    WdLogSingleEntry2(3LL, v18.hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 12461;
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v17);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12428;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
