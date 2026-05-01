/*
 * XREFs of ?SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180305C30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_ @ 0x1802ED524 (_lambda_dafc2c99c39dbaf60a815ea558bf8360_--_lambda_dafc2c99c39dbaf60a815ea558bf8360_.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___ @ 0x180303B94 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetPosition(
        CFrameApplicationPresentation *this,
        struct IApplicationViewPosition *a2)
{
  __int64 *v3; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IApplicationViewPosition *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v3 = lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_(
         v5,
         (__int64 *)&v6,
         (__int64)this);
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___(this, v3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  return 0LL;
}
