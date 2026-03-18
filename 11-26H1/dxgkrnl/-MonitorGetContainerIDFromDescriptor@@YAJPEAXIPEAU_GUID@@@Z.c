/*
 * XREFs of ?MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z @ 0x140408D18
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1404085E8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MonitorGetContainerIDFromDescriptor(__int64 a1, unsigned int a2, struct _GUID *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( a1 )
  {
    if ( a2 == -1 )
      return -1073741275LL;
    MONITOR_MGR::AcquireMonitorShared(v7, a1, a2, 1u);
    if ( v7[0] )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v7[0] + 216LL) + 160LL);
      if ( !v6 || (*(int (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v6 + 216LL))(v6, a3) < 0 )
        v3 = -1073741275;
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6757;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v7);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6746;
  }
  return v3;
}
