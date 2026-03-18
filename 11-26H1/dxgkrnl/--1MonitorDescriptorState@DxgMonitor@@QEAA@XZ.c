/*
 * XREFs of ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x14041BAD8
 * Callers:
 *     ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x140063FB0 (-reset@-$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U-$default_delete@VMonitorDescriptorStat.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ?_CleanupMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@AEAAJXZ @ 0x1401943F0 (-_CleanupMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(
        DxgMonitor::MonitorDescriptorState *Resource)
{
  DxgMonitor::MonitorDescriptorState::_CleanupMonitorDescriptors(Resource);
  wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))Resource + 18,
    0LL);
  wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))Resource + 17,
    0LL);
  wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))Resource + 16,
    0LL);
  ExDeleteResourceLite((PERESOURCE)Resource);
}
