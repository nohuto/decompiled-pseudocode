/*
 * XREFs of DxgkFlushPresentHistory @ 0x1404052F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  int v8; // eax
  unsigned int v9; // edi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h]
  char v17; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v18; // [rsp+68h] [rbp-98h] BYREF
  DXGADAPTER *v19[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[144]; // [rsp+80h] [rbp-80h] BYREF

  v1 = (unsigned int)a1;
  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2189;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2189);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6871;
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
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v18 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v19, v1, Current, &v18, 1);
  v4 = v18;
  if ( !v18 )
  {
    WdLogSingleEntry2(3LL, v1, -1073741811LL);
    WdLogGlobalForLineNumber = 6882;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v19, v5);
    goto LABEL_9;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v18, 0LL);
  v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v20, 2LL);
  v9 = v8;
  if ( v8 == -1073741130 )
    goto LABEL_23;
  if ( v8 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v19, v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return v9;
  }
  v12 = *((_QWORD *)v4 + 396);
  if ( v12 )
  {
    if ( !*((_BYTE *)v4 + 209) )
      ADAPTER_RENDER::FlushScheduler(v12, 1, 0xFFFFFFFF, 0);
LABEL_23:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
    if ( v19[0] )
      DXGADAPTER::ReleaseReference(v19[0]);
    goto LABEL_25;
  }
  WdLogSingleEntry2(3LL, v1, -1073741637LL);
  WdLogGlobalForLineNumber = 6906;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v19, v13);
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  return 0LL;
}
