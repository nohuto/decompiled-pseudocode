/*
 * XREFs of ??1?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C548C
 * Callers:
 *     _CDesktopPositioner::_CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x1806D220B (_CDesktopPositioner--_CreateTitlebarConfiguration_--_1_--dtor$0.c)
 *     _CloneTitleBarConfiguration_::_1_::dtor$0 @ 0x1806D88C4 (_CloneTitleBarConfiguration_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__::_1_::dtor$0 @ 0x1806D88D6 (_wil--MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__--_1_--dtor$0.c)
 *     _FullScreenPositionerHelpers::CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x1806E1964 (_FullScreenPositionerHelpers--CreateTitlebarConfiguration_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::~ComPtr<ApplicationViewTitlebarConfiguration>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(a1);
}
