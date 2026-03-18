/*
 * XREFs of DxgkGetScanLine @ 0x1402A3580
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x140193B4C (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     RtlWriteUCharToUser @ 0x1401967C8 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1401FD450 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1402A532C (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetScanLine(void *Src)
{
  __int64 v2; // r15
  struct _KTHREAD **Current; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGADAPTER *v6; // rdi
  int PairingAdapters; // eax
  unsigned int v8; // esi
  struct DXGADAPTER *v9; // rdi
  DXGADAPTER *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r12
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // r8d
  BOOLEAN InVerticalBlank; // al
  bool v20; // cc
  UINT v21; // ecx
  int ScanLine; // edi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // rax
  ADAPTER_DISPLAY *v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v32; // rax
  BLTQUEUE **v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // [rsp+50h] [rbp-118h] BYREF
  __int64 v37; // [rsp+58h] [rbp-110h]
  char v38; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v39; // [rsp+68h] [rbp-100h] BYREF
  DXGADAPTER *v40[2]; // [rsp+70h] [rbp-F8h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-E8h] BYREF
  unsigned int v42[4]; // [rsp+88h] [rbp-E0h] BYREF
  _DXGKARG_GETSCANLINE v43; // [rsp+98h] [rbp-D0h] BYREF
  _BYTE v44[8]; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v45[16]; // [rsp+B8h] [rbp-B0h] BYREF
  DXGADAPTER *v46; // [rsp+C8h] [rbp-A0h]
  _BYTE v47[16]; // [rsp+F8h] [rbp-70h] BYREF
  DXGADAPTER *v48; // [rsp+108h] [rbp-60h]
  char v49; // [rsp+110h] [rbp-58h]
  __int64 v50; // [rsp+118h] [rbp-50h]

  v36 = -1;
  LOBYTE(v2) = 0;
  v37 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    ScanLine = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8388;
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
LABEL_49:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 != (_BYTE)v2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
    return (unsigned int)ScanLine;
  }
  *(_OWORD *)v42 = 0LL;
  RtlCopyFromUser(v42, Src, 0x10uLL);
  *(_QWORD *)&v43.VidPnTargetId = 0LL;
  v43.ScanLine = 0;
  if ( !v42[0] && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v4) )
  {
    Global = DXGGLOBAL::GetGlobal();
    ScanLine = REMOTE_VSYNC::GetScanLine((BLTQUEUE **)Global + 129, &v43);
    goto LABEL_35;
  }
  v39 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v40, v42[0], Current, &v39, 1);
  v6 = v39;
  if ( !v39 )
  {
    ScanLine = -1073741811;
    WdLogSingleEntry2(3LL, v42[0], -1073741811LL);
    WdLogGlobalForLineNumber = 8424;
LABEL_47:
    if ( v40[0] )
      DXGADAPTER::ReleaseReference(v40[0]);
    goto LABEL_49;
  }
  if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v5) )
  {
    if ( *((_BYTE *)v6 + 209) && (v32 = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(v32) + 4742)) )
      v33 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal() + 1088);
    else
      v33 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal() + 1032);
    ScanLine = REMOTE_VSYNC::GetScanLine(v33, &v43);
LABEL_33:
    if ( v40[0] )
      DXGADAPTER::ReleaseReference(v40[0]);
LABEL_35:
    if ( ScanLine >= 0 )
    {
      RtlWriteUCharToUser((_BYTE *)Src + 8, v43.InVerticalBlank);
      RtlWriteULongToUser((_DWORD *)Src + 3, v43.ScanLine);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( v38 != (_BYTE)v2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
      return 0LL;
    }
    goto LABEL_49;
  }
  v39 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v6, v42[1], 0LL, 0LL, &v39, &v41, 0);
  v8 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v9 = v39;
    if ( !v39 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8465;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 8465LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v9, 0LL);
    DXGADAPTER::ReleaseReference(v9);
    if ( v49 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v47, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v10 = v48;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v48 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v48 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)"g");
        KeWaitForSingleObject((char *)v48 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v48, 0LL);
      v10 = v48;
    }
    v50 = 0LL;
    v49 = 1;
    if ( *((_DWORD *)v10 + 50) != 1 )
      goto LABEL_57;
    if ( v46 != v48 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v45, 0LL);
      if ( *((_DWORD *)v46 + 50) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v45);
LABEL_57:
        COREACCESS::Release((COREACCESS *)v47);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v40, v29);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
        if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit);
        return 3221226166LL;
      }
    }
    v44[1] = 1;
    if ( !*((_QWORD *)v9 + 395) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8479;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        8479LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = *((_QWORD *)v9 + 395);
    v13 = v42[1];
    if ( v42[1] >= *(_DWORD *)(v12 + 96) )
    {
      ScanLine = -1073741811;
      WdLogSingleEntry2(3LL, v42[1], -1073741811LL);
      WdLogGlobalForLineNumber = 8485;
    }
    else
    {
      v14 = v42[1];
      if ( !v12 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10648;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10648LL, 0LL, 0LL, 0LL, 0LL);
        v13 = v42[1];
      }
      v2 = *((_QWORD *)v9 + 395);
      if ( !v2 )
        goto LABEL_25;
      if ( (unsigned int)v14 >= *(_DWORD *)(v2 + 96) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6468;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          6468LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v13 = v42[1];
      }
      v26 = *(_QWORD *)(v2 + 128);
      LODWORD(v2) = 0;
      if ( !*(_BYTE *)(4024 * v14 + v26 + 760) )
      {
LABEL_25:
        v15 = 4024LL * v13;
        v16 = *((_QWORD *)v9 + 395);
        v17 = *(_QWORD *)(v16 + 128);
        v18 = *(_DWORD *)(v15 + v17 + 1080) + 20;
        InVerticalBlank = v43.InVerticalBlank;
        v20 = v18 <= *(_DWORD *)(v15 + v17 + 996);
        if ( v18 > *(_DWORD *)(v15 + v17 + 996) )
          InVerticalBlank = 1;
        v43.InVerticalBlank = InVerticalBlank;
        v21 = v2;
        if ( v20 )
          v21 = v18;
        *(_DWORD *)(v15 + *(_QWORD *)(v16 + 128) + 1080) = v21;
        v43.ScanLine = v21;
        ScanLine = v2;
        goto LABEL_32;
      }
      v43.VidPnTargetId = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 395) + 128LL) + 4024LL * v13 + 1072);
      if ( v43.VidPnTargetId != -1 )
      {
        v27 = (ADAPTER_DISPLAY *)*((_QWORD *)v9 + 395);
        if ( *((_QWORD *)v9 + 396) )
          v23 = ADAPTER_DISPLAY::DdiGetScanLine(v27, &v43);
        else
          v23 = ADAPTER_DISPLAY::DodGetScanLine(v27, v13, &v43);
        ScanLine = v23;
LABEL_32:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
        goto LABEL_33;
      }
      ScanLine = -1071774912;
      WdLogSingleEntry3(4LL, v13, v42[0], -1071774912LL);
      WdLogGlobalForLineNumber = 8510;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    goto LABEL_47;
  }
  WdLogSingleEntry3(4LL, v6, v42[1], PairingAdapters);
  WdLogGlobalForLineNumber = 8461;
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v40, v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit);
  return v8;
}
