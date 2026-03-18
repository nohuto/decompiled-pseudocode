/*
 * XREFs of ??1MultiMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x140098F80
 * Callers:
 *     ??_GMultiMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140098FB0 (--_GMultiMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 */

void __fastcall DxgMonitor::MultiMonitorDescriptor::~MultiMonitorDescriptor(DxgMonitor::MultiMonitorDescriptor *this)
{
  wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 4,
    0LL);
  wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 3,
    0LL);
}
