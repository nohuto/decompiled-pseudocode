/*
 * XREFs of ?MonitorInitializeGlobal@@YAJXZ @ 0x14026F480
 * Callers:
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1400546F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x140098748 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??0EDIDCACHE@DxgMonitor@@QEAA@XZ @ 0x140270408 (--0EDIDCACHE@DxgMonitor@@QEAA@XZ.c)
 *     ?CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ @ 0x140273A04 (-CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // eax
  int StaticUSB4Class; // eax
  int v12; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  DxgMonitor::EDIDCACHE *v23; // rax
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE v26; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v27; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v28; // [rsp+68h] [rbp-A0h] BYREF
  GUID v29; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v30[10]; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+128h] [rbp+20h]
  _OWORD v32[10]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v33; // [rsp+1D8h] [rbp+D0h]

  WdLogNewEntry5_WdTrace(a1, a2);
  WdLogGlobalForLineNumber = 74;
  Handle = 0LL;
  *(_QWORD *)&v27.Length = 10748066LL;
  byte_140169554 = 0;
  v2 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v30[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v3 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v30[1] = v2;
  v4 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v30[2] = v3;
  v5 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v30[3] = v4;
  v6 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v30[4] = v5;
  v7 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v30[5] = v6;
  v8 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v30[6] = v7;
  v30[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v9 = *(_OWORD *)L"OnBadEDID";
  v10 = *(_DWORD *)L"D";
  v30[8] = v8;
  v30[9] = v9;
  v31 = v10;
  v27.Buffer = (wchar_t *)v30;
  if ( DxgkOpenRegistrySubkey(&Handle, 0x20019u, 0LL, &v27) >= 0 )
  {
    byte_140169554 = 1;
    ZwClose(Handle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_140168708 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  v29 = GUID_DEVINTERFACE_MONITOR_DRIVER;
  if ( IoRegisterPlugPlayNotification(
         EventCategoryDeviceInterfaceChange,
         1u,
         &v29,
         (PDRIVER_OBJECT)g_pDriverObject,
         MONITOR_MGR::_HandleMonitorPnPNotification,
         0LL,
         &MONITOR_MGR::_pInterfaceNotificationHandle) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 123;
  }
  StaticUSB4Class = MONITOR_MGR::CreateStaticUSB4Class();
  qword_140168770 = 0LL;
  v12 = StaticUSB4Class;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  v26 = 0LL;
  *(_QWORD *)&v28.Length = 11010214LL;
  qword_140168750 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v13 = *(_OWORD *)(0x140000000LL + 792768);
  v32[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v14 = *(_OWORD *)(0x140000000LL + 792784);
  v32[1] = v13;
  v15 = *(_OWORD *)(0x140000000LL + 792800);
  v32[2] = v14;
  v16 = *(_OWORD *)(0x140000000LL + 792816);
  v32[3] = v15;
  v17 = *(_OWORD *)(0x140000000LL + 792832);
  v32[4] = v16;
  v18 = *(_OWORD *)(0x140000000LL + 792848);
  v32[5] = v17;
  v19 = *(_OWORD *)(0x140000000LL + 792864);
  v32[6] = v18;
  v20 = *(_OWORD *)(0x140000000LL + 792880);
  v32[7] = v19;
  v21 = *(_OWORD *)(0x140000000LL + 792896);
  v22 = *(_QWORD *)(0x140000000LL + 792912);
  v32[8] = v20;
  v32[9] = v21;
  v33 = v22;
  v28.Buffer = (wchar_t *)v32;
  if ( DxgkCreateRegistrySubkey(&v26, 0xF003Fu, 0LL, &v28) >= 0 )
    ZwClose(v26);
  if ( v12 >= 0 )
  {
    v23 = (DxgMonitor::EDIDCACHE *)operator new(0x2A8uLL, 0x4D677844u, 256LL);
    if ( v23 )
    {
      DxgMonitor::EDIDCACHE::s_pEdidCache = (DxgMonitor::EDIDCACHE *)DxgMonitor::EDIDCACHE::EDIDCACHE(v23);
      if ( DxgMonitor::EDIDCACHE::s_pEdidCache )
        return 0;
    }
    else
    {
      DxgMonitor::EDIDCACHE::s_pEdidCache = 0LL;
    }
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 31;
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
