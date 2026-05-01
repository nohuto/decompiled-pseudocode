/*
 * XREFs of ?HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z @ 0x180308890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_ @ 0x1802ED524 (_lambda_dafc2c99c39dbaf60a815ea558bf8360_--_lambda_dafc2c99c39dbaf60a815ea558bf8360_.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x1803074D0 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationViewManager::HandleFlashingChangeForApplication(
        CApplicationViewManager *this,
        struct IImmersiveApplication *a2,
        int a3)
{
  __int64 *v5; // rax
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IImmersiveApplication *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v5 = lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_(
         v6,
         (__int64 *)&v7,
         (__int64)this - 160);
  CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___(
    (__int64)this - 160,
    v5,
    a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
}
