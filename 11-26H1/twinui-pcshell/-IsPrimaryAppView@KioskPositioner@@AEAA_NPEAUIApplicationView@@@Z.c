/*
 * XREFs of ?IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F0E44
 * Callers:
 *     ?ShouldHandleActivation@KioskPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801F2FA0 (-ShouldHandleActivation@KioskPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18020D68C (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804F1440 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KioskPositioner::IsPrimaryAppView(KioskPositioner *this, struct IApplicationView *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 80) + 8LL))(
           *((_QWORD *)this + 80),
           a2);
}
