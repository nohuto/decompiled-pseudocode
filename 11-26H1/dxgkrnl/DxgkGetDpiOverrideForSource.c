/*
 * XREFs of DxgkGetDpiOverrideForSource @ 0x140337580
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x140338300 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 */

__int64 __fastcall DxgkGetDpiOverrideForSource(DpiPersistence *this, struct _LUID *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  bool v5; // di
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rcx
  unsigned int *v11; // [rsp+20h] [rbp-50h]
  int v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h]
  char v14; // [rsp+60h] [rbp-10h]
  bool v15; // [rsp+A0h] [rbp+30h] BYREF
  int v16; // [rsp+A8h] [rbp+38h] BYREF

  v2 = (unsigned int)a2;
  v12 = -1;
  v13 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2193;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2193);
  v4 = DxgkAcquireSessionModeChangeLock(0);
  v5 = v4 >= 0;
  v15 = v4 >= 0;
  if ( v4 < 0 )
  {
    v6 = v4;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2435;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v5 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_16;
  }
  v16 = 0;
  if ( (int)DpiPersistence::ReadDpiFromRegistry(this, (const struct _LUID *)v2, 0, (int)&v16, v11) < 0 )
  {
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v15);
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    }
    return 0LL;
  }
  v7 = v16;
  if ( v5 )
    DxgkReleaseSessionModeChangeLock();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
  return v7;
}
