/*
 * XREFs of _lambda_1a5eae780b6c1663d254d797c20a7e0a_::__lambda_1a5eae780b6c1663d254d797c20a7e0a_ @ 0x1806599C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___::_CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___ @ 0x1806599F4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___--_CTask.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180659AF8 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1a5eae780b6c1663d254d797c20a7e0a_::__lambda_1a5eae780b6c1663d254d797c20a7e0a_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
