/*
 * XREFs of DxgkInvalidateCache @ 0x1401BBD70
 * Callers:
 *     ?VmBusInvalidateCache@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227B30 (-VmBusInvalidateCache@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
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
 *     ?VidMmInvalidateCache@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K4@Z @ 0x140074A04 (-VidMmInvalidateCache@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_MULTI_GLOBA.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendInvalidateCache@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@II_K1@Z @ 0x140230230 (-VmBusSendInvalidateCache@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@II_K1@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkInvalidateCache(unsigned __int64 *Src)
{
  struct _KTHREAD **Current; // rsi
  struct DXGDEVICE *v3; // rdi
  __int64 v4; // r9
  int v5; // r14d
  __int64 v6; // rcx
  struct DXGDEVICE *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  struct VIDMM_MULTI_ALLOC *v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp-108h] BYREF
  __int64 v16; // [rsp+58h] [rbp-100h]
  char v17; // [rsp+60h] [rbp-F8h]
  __int64 v18; // [rsp+68h] [rbp-F0h] BYREF
  _BYTE v19[8]; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGDEVICE *v20[2]; // [rsp+78h] [rbp-E0h] BYREF
  unsigned int v21[4]; // [rsp+88h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp-C0h]
  _BYTE v23[160]; // [rsp+A0h] [rbp-B8h] BYREF

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2122);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 34;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 34LL, 0LL, 0LL, 0LL, 0LL);
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    RtlCopyFromUser(v21, Src, 0x18uLL);
  }
  else
  {
    *(_OWORD *)v21 = *(_OWORD *)Src;
    v22 = Src[2];
  }
  v20[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v19, v21[0], Current, v20);
  v3 = v20[0];
  if ( !v20[0] )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 66;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified",
      v21[0],
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_31:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v19);
    goto LABEL_32;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v20,
    v20[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v3, 0, v4, 0);
  v5 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
  if ( v5 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v20);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    return (unsigned int)v5;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v18, v21[1]);
  if ( !v18 )
  {
    WdLogSingleEntry2(3LL, v3, v21[1]);
    WdLogGlobalForLineNumber = 87;
LABEL_30:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v20);
    goto LABEL_31;
  }
  v8 = *(struct DXGDEVICE **)(v18 + 8);
  if ( v8 != v3 )
  {
    WdLogSingleEntry2(2LL, v8, v3);
    WdLogGlobalForLineNumber = 96;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch between allocation device 0x%p and paging queue device 0x%p",
      *(_QWORD *)(v18 + 8),
      (__int64)v3,
      0LL,
      0LL,
      0LL);
    goto LABEL_30;
  }
  if ( (*((_BYTE *)v3 + 1917) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) < 0x2Bu )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 105;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v20);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v19);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
      if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
      return 3221225473LL;
    }
    v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendInvalidateCache(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 16LL) + 4712LL),
            (struct DXGPROCESS *)Current,
            *((_DWORD *)v3 + 118),
            *(_DWORD *)(v18 + 20),
            v22,
            *(unsigned __int64 *)&v21[2]);
  }
  else
  {
    v11 = *(struct VIDMM_MULTI_ALLOC **)(v18 + 24);
    if ( !v11 )
    {
      WdLogSingleEntry3(3LL, v3, v21[1], v18);
      WdLogGlobalForLineNumber = 124;
      goto LABEL_30;
    }
    v10 = VIDMM_EXPORT::VidMmInvalidateCache(
            *(VIDMM_EXPORT **)(*((_QWORD *)v3 + 2) + 760LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)v3 + 2) + 768LL),
            (struct DXGPROCESS *)Current,
            0LL,
            v11,
            *(unsigned __int64 *)&v21[2],
            v22);
  }
  v13 = v10;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v20);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  return v13;
}
