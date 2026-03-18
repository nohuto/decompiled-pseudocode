/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14004C424
 * Callers:
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x14004C3E4 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1400973D4 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x14009E1BC (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1400A122C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall `vector constructor iterator'(
        char *__t,
        unsigned __int64 __s,
        unsigned __int64 __n,
        void *(__fastcall *__f)(void *))
{
  do
  {
    __f(__t);
    __t += __s;
    --__n;
  }
  while ( __n );
}
