/*
 * XREFs of DxgkSetQueuedLimit @ 0x14039FEC0
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140233330 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x14018CA3C (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1403A031C (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(struct _D3DKMT_SETQUEUEDLIMIT *a1)
{
  char CurrentThreadPreviousMode; // di
  __int64 v3; // rcx
  struct _KTHREAD **Current; // r13
  struct _D3DKMT_SETQUEUEDLIMIT *p_Src; // rsi
  struct DXGDEVICE *v6; // rdi
  __int64 v7; // r9
  int v8; // r15d
  unsigned int Type; // eax
  int v10; // eax
  int v11; // edi
  ADAPTER_RENDER **v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rcx
  char v16; // [rsp+50h] [rbp-118h]
  int v17; // [rsp+58h] [rbp-110h] BYREF
  __int64 v18; // [rsp+60h] [rbp-108h]
  char v19; // [rsp+68h] [rbp-100h]
  struct DXGDEVICE *v20; // [rsp+70h] [rbp-F8h] BYREF
  int v21; // [rsp+78h] [rbp-F0h]
  struct DXGDEVICE *v22; // [rsp+80h] [rbp-E8h] BYREF
  __int128 Src; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v24[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2035);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v16 = CurrentThreadPreviousMode;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
  if ( !Current )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5442;
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
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v11;
  }
  Src = 0LL;
  p_Src = (struct _D3DKMT_SETQUEUEDLIMIT *)&Src;
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(&Src, a1, 0x10uLL);
  else
    p_Src = a1;
  v20 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, p_Src->hDevice, Current, &v20);
  v6 = v20;
  if ( !v20 )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, p_Src->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 5476;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      p_Src->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_21:
    v12 = (ADAPTER_RENDER **)v22;
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v12[2], (struct DXGDEVICE *)v12);
    goto LABEL_24;
  }
  v21 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v20);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v6, 2, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
  if ( v8 >= 0 )
  {
    if ( (*((_BYTE *)v6 + 1917) & 1) != 0 )
    {
      v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 4712LL),
              (struct DXGPROCESS *)Current,
              v6,
              p_Src);
    }
    else
    {
      Type = p_Src->Type;
      if ( Type == 1 )
      {
        v10 = DXGDEVICE::SetQueuedPresentLimit(v6, p_Src->QueuedPresentLimit);
      }
      else
      {
        if ( Type != 2 )
        {
          v11 = -1073741811;
LABEL_15:
          if ( v11 >= 0 && v16 == 1 )
            RtlCopyToUser(a1, p_Src, 0x10uLL);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
          if ( v20 && v21 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)v20 + 17));
            KeLeaveCriticalRegion();
          }
          goto LABEL_21;
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 736LL) + 8LL) + 192LL))(
                *((_QWORD *)v6 + 100),
                &p_Src->8);
      }
    }
    v11 = v10;
    goto LABEL_15;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v20);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v22);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return (unsigned int)v8;
}
