/*
 * XREFs of _lambda_a03ebfe222b20f6e78e73c052cdff49c_::_lambda_a03ebfe222b20f6e78e73c052cdff49c_ @ 0x18030D728
 * Callers:
 *     ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801D8600 (-DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE.c)
 * Callees:
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x18021CDA4 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesk.c)
 */

__int64 __fastcall lambda_a03ebfe222b20f6e78e73c052cdff49c_::_lambda_a03ebfe222b20f6e78e73c052cdff49c_(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _BYTE *a4,
        volatile int **a5)
{
  __int64 v5; // r10

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = *a3;
  *(_BYTE *)(a1 + 16) = *a4;
  wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
    (volatile int **)(a1 + 24),
    *a5);
  return v5;
}
