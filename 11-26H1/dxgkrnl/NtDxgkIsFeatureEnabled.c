/*
 * XREFs of NtDxgkIsFeatureEnabled @ 0x1401DB020
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
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiIsFeatureEnabled @ 0x1403EC964 (DpiIsFeatureEnabled.c)
 */

__int64 __fastcall NtDxgkIsFeatureEnabled(char *Src)
{
  BOOL v2; // ebx
  int IsFeatureEnabled; // ebx
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  struct DXGADAPTER *v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  int PairingAdapters; // edi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGADAPTER *v16; // rdi
  int v17; // esi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // [rsp+50h] [rbp-108h] BYREF
  __int64 v23; // [rsp+58h] [rbp-100h]
  char v24; // [rsp+60h] [rbp-F8h]
  struct DXGADAPTER *v25; // [rsp+68h] [rbp-F0h] BYREF
  DXGADAPTER *v26[2]; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v28[2]; // [rsp+88h] [rbp-D0h] BYREF
  _DWORD Srca[4]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v30[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2224;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2224);
  *(_QWORD *)v28 = 0LL;
  Srca[0] = 0;
  RtlCopyFromUser(v28, Src, 0xCuLL);
  v2 = g_ClearDatabaseCacheOnQuery;
  if ( !v28[0] )
  {
    IsFeatureEnabled = DpiIsFeatureEnabled(0LL, v28[1], g_ClearDatabaseCacheOnQuery, Srca);
LABEL_26:
    if ( IsFeatureEnabled >= 0 )
      RtlCopyToUser(Src + 8, Srca, 4uLL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    }
    return (unsigned int)IsFeatureEnabled;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( !Current )
  {
    PsGetCurrentProcess(v5);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 53;
    CurrentProcess = PsGetCurrentProcess(v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NtDxgkIsFeatureEnabled: Failed to get DXGPROCESS, EPROCESS=0x%.16x",
      CurrentProcess,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  v25 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v26, v28[0], Current, &v25, 1);
  v9 = v25;
  if ( !v25 )
  {
    WdLogSingleEntry2(3LL, v28[0], v6);
    WdLogGlobalForLineNumber = 63;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v26, v10);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  v25 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v9, 0, &v25, &v27, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
    v16 = v25;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v25, 0LL);
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL);
    DXGADAPTER::ReleaseReference(v16);
    if ( v17 >= 0 )
    {
      IsFeatureEnabled = DpiIsFeatureEnabled(*((_QWORD *)v16 + 27), v28[1], v2, Srca);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v26, v20);
      goto LABEL_26;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 88;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v26, v18);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return (unsigned int)v17;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 74;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v26, v14);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return (unsigned int)PairingAdapters;
  }
}
