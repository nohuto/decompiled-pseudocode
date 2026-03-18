/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401E45A8
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1401E59C0 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401E4CF4 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     DxgkQueryDmmInterface @ 0x140365A0C (DxgkQueryDmmInterface.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v7; // rbx
  unsigned int updated; // ebx
  __int64 v10; // rcx
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 CurrentProcess; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int DmmInterface; // eax
  __int64 v21; // r14
  __int64 v22; // rcx
  struct _DPI_INFORMATION *v23; // [rsp+30h] [rbp-D0h]
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  char v26; // [rsp+60h] [rbp-A0h]
  Win81 *v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[144]; // [rsp+70h] [rbp-90h] BYREF

  v7 = (unsigned int)a2;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2172);
  if ( !this )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1069;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified an invalid adapter handle, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    v11 = v26 == 0;
LABEL_18:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    return updated;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, this, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v27 = 0LL;
    DmmInterface = DxgkQueryDmmInterface(this);
    v21 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      updated = Win81::UpdateGdiInfoForVidPnSource(v27, this, (void *const)(unsigned int)v7, a3, a4, a5, v23);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      v11 = v26 == 0;
      goto LABEL_18;
    }
    WdLogSingleEntry3(2LL, DmmInterface, this, v7);
    WdLogGlobalForLineNumber = 1094;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed DxgkQueryDmmInterface with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x",
      v21,
      (__int64)this,
      v7,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return (unsigned int)v21;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v13);
    WdLogSingleEntry3(2LL, v14, CurrentProcess, this);
    WdLogGlobalForLineNumber = 1081;
    v17 = PsGetCurrentProcess(v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x",
      v14,
      v17,
      (__int64)this,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    return (unsigned int)v14;
  }
}
