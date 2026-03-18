/*
 * XREFs of ?MonitorSetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@_N1@Z @ 0x140411FB0
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x1400354BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetExternalBrightnessPolicy(struct HDXGMONITOR__ *a1, char a2, char a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !a1 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6814;
    return v5;
  }
  MONITOR_MGR::AcquireMonitorExclusive(&v10, (__int64)a1);
  v7 = v10;
  if ( !v10 )
  {
    v5 = -1073741275;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6820;
LABEL_13:
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)&v10);
    return v5;
  }
  v8 = *(_QWORD *)(v10 + 224);
  if ( !*(_BYTE *)(v8 + 518) || *(_BYTE *)(v8 + 517) )
  {
    if ( *(_BYTE *)(v8 + 519) != a2 || *(_BYTE *)(v8 + 520) != a3 )
    {
      *(_BYTE *)(v8 + 519) = a2;
      *(_BYTE *)(v8 + 520) = a3;
      LOBYTE(v6) = a2;
      (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**(_QWORD **)(v8 + 8) + 152LL))(
        *(_QWORD *)(v8 + 8),
        4LL,
        L"ExternalBrightnessEnabled",
        v6);
    }
    v5 = 0;
    goto LABEL_13;
  }
  v5 = -1073741811;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 6822;
  ExReleaseResourceLite((PERESOURCE)(v7 + 40));
  KeLeaveCriticalRegion();
  v10 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v11);
  if ( v10 )
  {
    ExReleaseResourceLite((PERESOURCE)(v10 + 40));
    KeLeaveCriticalRegion();
  }
  return v5;
}
