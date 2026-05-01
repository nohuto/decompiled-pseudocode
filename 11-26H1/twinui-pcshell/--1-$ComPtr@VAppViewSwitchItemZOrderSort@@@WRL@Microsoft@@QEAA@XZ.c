/*
 * XREFs of ??1?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@QEAA@XZ @ 0x1802932D8
 * Callers:
 *     _AppViewSwitchItemZOrderSort_CreateInstance_::_1_::dtor$0 @ 0x1806DE15F (_AppViewSwitchItemZOrderSort_CreateInstance_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__::_1_::dtor$0 @ 0x1806DE1AD (_wil--MakeAndInitializeOrThrow_AppViewSwitchItemZOrderSort__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::~ComPtr<AppViewSwitchItemZOrderSort>()
{
  return Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::InternalRelease();
}
