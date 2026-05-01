/*
 * XREFs of ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F635C
 * Callers:
 *     ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18017CD30 (-OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804AAE2C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1804F63C8 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z @ 0x180659DD8 (-GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::ForegroundViewChanged(TabletModePositioner *this, struct IApplicationView *a2)
{
  struct IApplicationView **v4; // r8
  struct IApplicationView *v5; // rdx
  char IsOperableView; // al
  TabletModePositionerHelpers *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  ApplicationViewHelpers::GetRootSwitchableOwnerOrSelf(a2, (struct IApplicationView *)&v8, v4);
  IsOperableView = TabletModePositionerHelpers::IsOperableView(
                     (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v8,
                     v5);
  LODWORD(a2) = TabletModePositioner::ForegroundViewChanged(this, v8, IsOperableView, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  return (unsigned int)a2;
}
