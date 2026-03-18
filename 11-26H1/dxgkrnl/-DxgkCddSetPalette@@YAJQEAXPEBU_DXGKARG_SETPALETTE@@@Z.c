/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1401BD5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1401B1500 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2)
{
  struct DXGPROCESS *Current; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  __int64 v6; // r12
  int PairingAdapters; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct DXGADAPTER *v11; // rbx
  ADAPTER_DISPLAY **v12; // rdi
  int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h]
  char v19; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v20; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v21; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[144]; // [rsp+90h] [rbp-70h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 3010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 3010);
  Current = DXGPROCESS::GetCurrent();
  VidPnSourceId = a2->VidPnSourceId;
  v6 = (__int64)Current;
  v21 = 0LL;
  v20 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, &v21, &v23, &v20, &v22, 0);
  v8 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v11 = v21;
    v12 = (ADAPTER_DISPLAY **)v20;
    if ( !v21 || !v20 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2387;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
        2387LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v11, (struct DXGADAPTER *const)v12);
    DXGADAPTER::ReleaseReference(v11);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
    v13 = COREADAPTERACCESS::AcquireExclusive((__int64)v24, 2LL);
    LODWORD(v14) = v13;
    if ( v13 >= 0 )
    {
      if ( !*((_QWORD *)v11 + 396) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2404;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pRenderAdapter->IsRenderAdapter()",
          2404LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !v12[395] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2405;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          2405LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v11 + 396), 6LL, 0xFFFFFFFFLL);
      v14 = (int)ADAPTER_DISPLAY::DdiSetPalette(v12[395], a2);
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v11 + 396), 7LL, 0xFFFFFFFFLL);
      if ( (int)v14 < 0 )
      {
        WdLogSingleEntry4(2LL, v14, v12, a2->VidPnSourceId, v6);
        v16 = a2->VidPnSourceId;
        WdLogGlobalForLineNumber = 2419;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x DdiSetPalette() failed 0x%I64x 0x%I64x 0x%I64x",
          v14,
          (__int64)v12,
          v16,
          v6,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry4(4LL, v13, v11, v12, v6);
      WdLogGlobalForLineNumber = 2400;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return (unsigned int)v14;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, PairingAdapters);
    WdLogGlobalForLineNumber = 2381;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x in DxgkCddSetPalette (ntStatus = 0x%I64x).",
      (__int64)a1,
      v8,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v8;
  }
}
