/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x14035018C
 * Callers:
 *     ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402244C0 (-VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreatePagingQueue @ 0x140350170 (DxgkCreatePagingQueue.c)
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x140423CF0 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x140350624 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *Src, int a2)
{
  __int64 v4; // rcx
  struct _D3DKMT_CREATEPAGINGQUEUE *v5; // rdi
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v7; // r14
  __int64 v8; // r9
  int v9; // r12d
  unsigned int PhysicalAdapterIndex; // eax
  int PagingQueue; // r14d
  struct DXGDEVICE *v12; // r10
  ADAPTER_RENDER **v13; // rcx
  __int64 v14; // rcx
  ADAPTER_RENDER **v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+50h] [rbp-138h] BYREF
  __int64 v20; // [rsp+58h] [rbp-130h]
  char v21; // [rsp+60h] [rbp-128h]
  struct DXGDEVICE *v22; // [rsp+68h] [rbp-120h] BYREF
  struct DXGDEVICE *v23[2]; // [rsp+70h] [rbp-118h] BYREF
  struct _D3DKMT_CREATEPAGINGQUEUE *v24; // [rsp+80h] [rbp-108h]
  _BYTE v25[16]; // [rsp+88h] [rbp-100h] BYREF
  _OWORD v26[2]; // [rsp+98h] [rbp-F0h] BYREF
  _BYTE v27[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v23[1] = (struct DXGDEVICE *)Src;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2117;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2117);
  memset(v26, 0, sizeof(v26));
  v24 = 0LL;
  if ( a2 )
  {
    RtlCopyFromUser(v26, Src, 0x20uLL);
    v5 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v26;
    v24 = (struct _D3DKMT_CREATEPAGINGQUEUE *)v26;
  }
  else
  {
    v5 = Src;
    v24 = Src;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v23[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, v5->hDevice, Current, v23);
  v7 = v23[0];
  if ( !v23[0] )
  {
    WdLogSingleEntry2(2LL, v5->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 296;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v5->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v16 = (ADAPTER_RENDER **)v22;
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v16[2], (struct DXGDEVICE *)v16);
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25, v23[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, (__int64)v7, 0, v8, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27, 0LL);
  if ( v9 >= 0 )
  {
    PhysicalAdapterIndex = v5->PhysicalAdapterIndex;
    if ( PhysicalAdapterIndex < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 296LL) )
    {
      v23[0] = 0LL;
      PagingQueue = DXGDEVICE::CreatePagingQueue(v7, PhysicalAdapterIndex, v5->Priority, v23);
      if ( PagingQueue < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
        v13 = (ADAPTER_RENDER **)v22;
        if ( !v22 )
        {
LABEL_16:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
          if ( v21 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
          }
          return (unsigned int)PagingQueue;
        }
      }
      else
      {
        v12 = v23[0];
        v5->hSyncObject = *(_DWORD *)(*((_QWORD *)v23[0] + 5) + 40LL);
        v5->FenceValueCPUVirtualAddress = *(void **)(*((_QWORD *)v12 + 5) + 56LL);
        v5->hPagingQueue = *((_DWORD *)v12 + 6);
        if ( a2 )
          RtlCopyToUser(Src, v5, 0x20uLL);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
        v13 = (ADAPTER_RENDER **)v22;
        if ( !v22 )
          goto LABEL_16;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v13[2], (struct DXGDEVICE *)v13);
      goto LABEL_16;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 316;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v22);
    goto LABEL_26;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v22);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  return (unsigned int)v9;
}
