/*
 * XREFs of DxgkSetDodIndirectSwapchain @ 0x1401B81E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1401A3174 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x14036AF68 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall DxgkSetDodIndirectSwapchain(void *Src)
{
  struct _KTHREAD **Current; // rdi
  struct DXGADAPTER *v3; // rdi
  unsigned __int64 v4; // rdx
  int v5; // esi
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  ADAPTER_DISPLAY *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+50h] [rbp-108h] BYREF
  __int64 v18; // [rsp+58h] [rbp-100h]
  char v19; // [rsp+60h] [rbp-F8h]
  _BYTE v20[8]; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGDEVICE *v21; // [rsp+70h] [rbp-E8h] BYREF
  DXGADAPTER *v22[2]; // [rsp+78h] [rbp-E0h] BYREF
  unsigned int v23[4]; // [rsp+88h] [rbp-D0h] BYREF
  void *v24[2]; // [rsp+98h] [rbp-C0h]
  struct DXGADAPTER *v25; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v26[144]; // [rsp+B0h] [rbp-A8h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2114;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2114);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10124;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 10124LL, 0LL, 0LL, 0LL, 0LL);
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v23 = 0LL;
  *(_OWORD *)v24 = 0LL;
  RtlCopyFromUser(v23, Src, 0x20uLL);
  v21 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v20, v23[1], Current, &v21);
  if ( !v21 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 10147;
LABEL_32:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
    goto LABEL_33;
  }
  v25 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v22, v23[0], Current, &v25, 1);
  v3 = v25;
  if ( !v25 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 10158;
LABEL_31:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v4);
    goto LABEL_32;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v25, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_QWORD *)v3 + 396) || (*((_DWORD *)v3 + 111) & 0x100) == 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 10177;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      goto LABEL_31;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*((ADAPTER_DISPLAY **)v3 + 395), v21, v23[2]) )
    {
      v11 = (ADAPTER_DISPLAY *)*((_QWORD *)v3 + 395);
      if ( LODWORD(v24[1]) )
        v12 = ADAPTER_DISPLAY::DodTerminateIndirectOutput(v11, v23[2]);
      else
        v12 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(v11, v23[2], v24[0]);
      v13 = v12;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v14);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
      return v13;
    }
    else
    {
      WdLogSingleEntry3(3LL, v21, v3, v23[2]);
      WdLogGlobalForLineNumber = 10183;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v9);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v6);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    return (unsigned int)v5;
  }
}
