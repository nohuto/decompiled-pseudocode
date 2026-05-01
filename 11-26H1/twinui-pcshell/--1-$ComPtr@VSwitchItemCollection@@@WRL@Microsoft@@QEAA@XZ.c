/*
 * XREFs of ??1?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B0A20
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x1806DBFFB (_wil--MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_-__--_1_-.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlSnapAssistViewHost_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$2 @ 0x1806DFECB (_Microsoft--WRL--Details--MakeAndInitialize_XamlSnapAssistViewHost_XamlSnapAssistViewHost_XamlVi.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SwitchItemCollection_SwitchItemCollection_ISwitchItemFactory___&_IApplicationViewCollection___&_IApplicationViewVisibilityDebouncedNotificationService___&_enum_SwitchItemFilterBehavior_&__::_1_::dtor$1 @ 0x1806F12B1 (_Microsoft--WRL--Details--MakeAndInitialize_SwitchItemCollection_SwitchItemCollection_ISwitchIte.c)
 *     _SwitchItemCollection_CreateInstance_::_1_::dtor$0 @ 0x1806F12EF (_SwitchItemCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemCollection>::~ComPtr<SwitchItemCollection>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease(a1);
}
