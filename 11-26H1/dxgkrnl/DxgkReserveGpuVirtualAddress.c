/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1403C86B0
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022B340 (-VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1400102C4 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001628C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x140058158 (-VidMmReserveGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_PA.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@@Z @ 0x140058FD8 (-VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FRE.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x14018CCAC (-VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTU.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a1)
{
  struct VIDMM_PAGING_QUEUE *v2; // r14
  char CurrentThreadPreviousMode; // r12
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r13
  struct D3DDDI_RESERVEGPUVIRTUALADDRESS *v6; // rdi
  struct DXGPAGINGQUEUE *v7; // rsi
  struct DXGADAPTER *v8; // rbx
  VIDMM_EXPORT **v9; // rbx
  int v10; // esi
  D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE ReservationType; // eax
  int v12; // ebx
  __int64 v13; // rcx
  struct DXGADAPTER **v15; // rax
  int PairingAdapters; // r12d
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  DXG_GUEST_VIRTUALGPU_VMBUS *v24; // r14
  int v25; // ebx
  int HostProcess; // eax
  char v27; // [rsp+50h] [rbp-198h]
  int v28; // [rsp+58h] [rbp-190h] BYREF
  __int64 v29; // [rsp+60h] [rbp-188h]
  char v30; // [rsp+68h] [rbp-180h]
  _BYTE v31[8]; // [rsp+70h] [rbp-178h] BYREF
  struct DXGADAPTER *v32; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp-168h] BYREF
  struct DXGPAGINGQUEUE *v34; // [rsp+88h] [rbp-160h] BYREF
  struct DXGADAPTER *v35; // [rsp+90h] [rbp-158h] BYREF
  DXGADAPTER *v36[2]; // [rsp+98h] [rbp-150h] BYREF
  struct D3DDDI_RESERVEGPUVIRTUALADDRESS *v37; // [rsp+A8h] [rbp-140h]
  struct DXGPROCESS *v38; // [rsp+B0h] [rbp-138h]
  _BYTE v39[144]; // [rsp+D0h] [rbp-118h] BYREF
  _BYTE v40[80]; // [rsp+160h] [rbp-88h] BYREF

  v28 = -1;
  v2 = 0LL;
  v29 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2098;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2098);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v27 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v4);
  v38 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 13317;
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
    goto LABEL_53;
  }
  memset(v40, 0, 0x48uLL);
  if ( CurrentThreadPreviousMode == 1 )
  {
    v6 = (struct D3DDDI_RESERVEGPUVIRTUALADDRESS *)v40;
    v37 = (struct D3DDDI_RESERVEGPUVIRTUALADDRESS *)v40;
    RtlCopyFromUser(v40, a1, 0x48uLL);
  }
  else
  {
    v6 = a1;
    v37 = a1;
  }
  if ( v6->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 13346;
    goto LABEL_53;
  }
  v34 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v31, v6->hPagingQueue, (struct _KTHREAD **)Current, &v34, 0);
  v35 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v36,
    v6->hPagingQueue,
    (struct _KTHREAD **)Current,
    &v35,
    0);
  v7 = v34;
  v8 = v35;
  if ( !v34 )
  {
    if ( v35 )
      goto LABEL_12;
    WdLogSingleEntry2(3LL, v6->hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 13360;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v21);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v31);
LABEL_53:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    v20 = v30 == 0;
LABEL_48:
    if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( !v35 )
  {
    v8 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL) + 16LL);
    v2 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)v34 + 4);
  }
LABEL_12:
  v32 = 0LL;
  if ( *((_QWORD *)v8 + 396) )
  {
    v32 = v8;
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 3);
    v33 = -1LL;
  }
  else
  {
    v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v32);
    PairingAdapters = DxgkpGetPairingAdapters(v8, 0, v15, &v33, 0LL, 0LL, 0);
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 13388;
      if ( v32 )
        DXGADAPTER::ReleaseReference(v32);
      v32 = 0LL;
      if ( v36[0] )
        DXGADAPTER::ReleaseReference(v36[0]);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
      return (unsigned int)PairingAdapters;
    }
    CurrentThreadPreviousMode = v27;
  }
  v9 = (VIDMM_EXPORT **)*((_QWORD *)v32 + 396);
  v34 = (struct DXGPAGINGQUEUE *)v9;
  if ( *((_BYTE *)v32 + 209) )
  {
    v24 = (struct DXGADAPTER *)((char *)v32 + 4712);
    if ( v7 )
      v25 = *((_DWORD *)v7 + 7);
    else
      v25 = *((_DWORD *)v32 + 1200);
    HostProcess = DXGPROCESS::GetHostProcess(Current);
    v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(v24, HostProcess, v25, v6);
    goto LABEL_18;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v32, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
  if ( v10 >= 0 )
  {
    ReservationType = v6->ReservationType;
    if ( ReservationType == D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_ACCESS )
    {
LABEL_17:
      v12 = VIDMM_EXPORT::VidMmReserveGpuVirtualAddress(v9[95], v9[96], Current, v2, v6);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
LABEL_18:
      if ( v12 >= 0 && CurrentThreadPreviousMode == 1 )
      {
        RtlWriteULong64ToUser(&a1->VirtualAddress, v6->VirtualAddress);
        RtlWriteULong64ToUser(&a1->PagingFenceValue, v6->PagingFenceValue);
      }
      if ( v32 )
        DXGADAPTER::ReleaseReference(v32);
      v32 = 0LL;
      if ( v36[0] )
        DXGADAPTER::ReleaseReference(v36[0]);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
      }
      return (unsigned int)v12;
    }
    if ( ReservationType == D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
    {
      if ( v2 )
        goto LABEL_17;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 13421;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v32, 0LL);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v17);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 13415;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      if ( v32 )
        DXGADAPTER::ReleaseReference(v32);
      v32 = 0LL;
      if ( v36[0] )
        DXGADAPTER::ReleaseReference(v36[0]);
    }
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    v20 = v30 == 0;
    goto LABEL_48;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v32, 0LL);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v22);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
  return (unsigned int)v10;
}
