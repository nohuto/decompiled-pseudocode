/*
 * XREFs of ??1?$ComPtr@VSwitchItem@@@WRL@Microsoft@@QEAA@XZ @ 0x1804AB674
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SwitchItem_SwitchItem_IApplicationView___&_enum_GroupingType_&__::_1_::dtor$2 @ 0x1806C94F1 (_Microsoft--WRL--Details--MakeAndInitialize_SwitchItem_SwitchItem_IApplicationView___-_enum_Grou.c)
 *     _SwitchItem_CreateInstance_::_1_::dtor$0 @ 0x1806C9503 (_SwitchItem_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItem>::~ComPtr<SwitchItem>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease(a1);
}
