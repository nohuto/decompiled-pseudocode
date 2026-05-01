/*
 * XREFs of ??1?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B3150
 * Callers:
 *     _ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run_::_1_::dtor$0 @ 0x1806F1364 (_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___--Run_--_1_--dtor$0.c)
 *     _SwitchItemFilteredCollection_CreateInstance_::_1_::dtor$0 @ 0x1806F1376 (_SwitchItemFilteredCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::~ComPtr<SwitchItemFilteredCollection>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease(a1);
}
