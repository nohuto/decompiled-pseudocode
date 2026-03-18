/*
 * XREFs of ?_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x14027FC40
 * Callers:
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027FBB0 (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_DsiReset(
        DxgMonitor::MonitorMipiDsiState *this,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        void *a5,
        __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rbx
  unsigned __int64 *v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ebx

  v6 = a4;
  v8 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 421;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 422;
  }
  v10 = (unsigned __int64 *)a6;
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 423;
  }
  *v10 = 0LL;
  a6 = (unsigned int)Feature_MipiDsi2__private_featureState;
  if ( (Feature_MipiDsi2__private_featureState & 0x10) == 0 )
  {
    LODWORD(a6) = Feature_MipiDsi2__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_MipiDsi2__private_descriptor, a6, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(a6, 3, (__int64)&Feature_MipiDsi2__private_descriptor);
  }
  if ( !(unsigned __int8)ExIsManufacturingModeEnabled() )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 438;
    return 3221225659LL;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12) < 0xC002 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 445;
    return 3221225659LL;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 452;
    return 3221225659LL;
  }
  if ( (unsigned int)v8 < 8 )
  {
    WdLogSingleEntry2(2LL, 8LL, v8);
    WdLogGlobalForLineNumber = 460;
    return 3221225507LL;
  }
  if ( (_DWORD)v8 != (_DWORD)v6 )
  {
    WdLogSingleEntry2(2LL, v8, v6);
    WdLogGlobalForLineNumber = 470;
    return 3221225507LL;
  }
  if ( a3 != a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 474;
  }
  *v10 = v6;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&a5, (DxgMonitor::MonitorMipiDsiState *)((char *)this + 32));
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v14 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 120LL))(v13, a3);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&a5);
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 486;
  }
  return 0LL;
}
