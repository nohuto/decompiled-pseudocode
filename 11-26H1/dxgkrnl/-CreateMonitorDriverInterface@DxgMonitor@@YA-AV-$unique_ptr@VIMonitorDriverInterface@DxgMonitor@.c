/*
 * XREFs of ?CreateMonitorDriverInterface@DxgMonitor@@YA?AV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@PEAUHDXGMONITOR__@@PEAVADAPTER_DISPLAY@@IPEAU_DEVICE_OBJECT@@@Z @ 0x14019146C
 * Callers:
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFFAC (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 *__fastcall DxgMonitor::CreateMonitorDriverInterface(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rax

  v9 = operator new(0x28uLL, 0x4D677844u, 256LL);
  if ( v9 )
  {
    *(_QWORD *)v9 = &KernelDriver::`vftable';
    *(_QWORD *)(v9 + 16) = a5;
    *(_QWORD *)(v9 + 8) = a2;
    *(_QWORD *)(v9 + 24) = a3;
    *(_DWORD *)(v9 + 32) = a4;
  }
  *a1 = v9;
  return a1;
}
