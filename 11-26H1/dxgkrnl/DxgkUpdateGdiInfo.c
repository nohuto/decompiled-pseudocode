/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1403809B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x14005F4A4 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401D4A18 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x140338300 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     DxgkQueryDmmInterface @ 0x140365A0C (DxgkQueryDmmInterface.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x140380F68 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x140381104 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1403F8654 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        char *a1,
        struct _LUID *a2,
        unsigned int a3,
        struct _GDIINFO *a4,
        struct _DPI_INFORMATION *a5)
{
  struct _GDIINFO *v5; // rbx
  __int64 v7; // r15
  int v9; // eax
  __int64 v10; // r14
  bool v11; // di
  int v12; // eax
  __int64 v13; // rcx
  int DpiFromRegistry; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int DmmInterface; // eax
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 CurrentProcess; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v34; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v35; // r8
  int PlateauIndexForScaleFactor; // eax
  int v37; // r10d
  struct _UNICODE_STRING *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v41[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h]
  char v45; // [rsp+68h] [rbp-98h]
  struct _GDIINFO *v46; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v47[4]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v48; // [rsp+88h] [rbp-78h]
  _BYTE v49[144]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a4;
  v46 = a4;
  v7 = (unsigned int)a2;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2172);
  if ( !a1 )
  {
    LODWORD(v5) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2219;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    v22 = v45 == 0;
LABEL_18:
    if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    return (unsigned int)v5;
  }
  v9 = DxgkAcquireSessionModeChangeLock(0);
  v10 = v9;
  v11 = v9 >= 0;
  v41[0] = v9 >= 0;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2233;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v11 )
      DxgkReleaseSessionModeChangeLock();
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    v25 = v45 == 0;
  }
  else
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, (struct DXGADAPTER *const)a1, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v49, 0LL);
    v10 = v12;
    if ( v12 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v13);
      WdLogSingleEntry3(2LL, v10, CurrentProcess, a1);
      WdLogGlobalForLineNumber = 2245;
      v31 = PsGetCurrentProcess(v30);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x",
        v10,
        v31,
        (__int64)a1,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      v25 = v45 == 0;
    }
    else
    {
      v40 = 0;
      IsEmergencyMonitorConnected(a1, v7, &v40);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v49);
      v42 = 0;
      if ( v40 )
      {
        v42 = dword_140168A40;
      }
      else
      {
        DpiFromRegistry = DpiPersistence::ReadDpiFromRegistry(
                            (DpiPersistence *)(a1 + 412),
                            (const struct _LUID *)(unsigned int)v7,
                            1,
                            (struct _UNICODE_STRING *)&v42);
        v16 = DpiFromRegistry;
        if ( DpiFromRegistry < 0 )
        {
          v32 = PsGetCurrentProcess(v15);
          WdLogSingleEntry3(3LL, v16, v32, a1);
          WdLogGlobalForLineNumber = 2266;
        }
        v5 = v46;
      }
      v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v49, 0LL);
      v10 = v17;
      if ( v17 < 0 )
      {
        v26 = PsGetCurrentProcess(v19);
        WdLogSingleEntry3(2LL, v10, v26, a1);
        WdLogGlobalForLineNumber = 2280;
        v28 = PsGetCurrentProcess(v27);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x",
          v10,
          v28,
          (__int64)a1,
          0LL,
          0LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
        if ( v11 )
          DxgkReleaseSessionModeChangeLock();
      }
      else
      {
        v46 = 0LL;
        DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1, v18, (const struct _DXGDMM_INTERFACE **)&v46);
        v10 = DmmInterface;
        if ( DmmInterface >= 0 )
        {
          LODWORD(v5) = UpdateGdiInfoForVidPnSource((const struct _DXGDMM_INTERFACE *)v46, a1, v7, v42, a3, v5, a5);
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v49);
          if ( *((_DWORD *)a5 + 21) == 1234568 )
          {
            v33 = *((_DWORD *)a5 + 2);
            *(_OWORD *)v47 = 0LL;
            v48 = 0LL;
            QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v47);
            DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a5 + 3), (__int64)v47, v34);
            PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                           (DpiInternal *)v33,
                                           (__int64)v47,
                                           v35);
            v39 = DpiPersistence::WriteDpiToHKLMRegistry(
                    (DpiPersistence *)(a1 + 412),
                    (const struct _LUID *)(unsigned int)v7,
                    PlateauIndexForScaleFactor - v37,
                    v38);
            v5 = (struct _GDIINFO *)v39;
            if ( v39 < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 2319;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to write DPI to registry with Status = 0x%I64x",
                (__int64)v5,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v5) = 0;
            }
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
          if ( v11 )
            DxgkReleaseSessionModeChangeLock();
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
          v22 = v45 == 0;
          goto LABEL_18;
        }
        WdLogSingleEntry3(2LL, DmmInterface, a1, v7);
        WdLogGlobalForLineNumber = 2293;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DxgkQueryDmmInterface with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x",
          v10,
          (__int64)a1,
          v7,
          0LL,
          0LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v41);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      v25 = v45 == 0;
    }
  }
  if ( !v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
  return (unsigned int)v10;
}
