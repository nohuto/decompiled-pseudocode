/*
 * XREFs of ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1802ECA48
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x1801C9770 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___ @ 0x1802E23E0 (CDelayIAMOperations--AddOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___.c)
 *     _lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_ @ 0x1802E38C8 (_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_--_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_.c)
 *     _lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::__lambda_2cec81e5a08c64ba5d30bf166a2a5e31_ @ 0x1802E39AC (_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_--__lambda_2cec81e5a08c64ba5d30bf166a2a5e31_.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_AttemptPendingActivationTracking(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplication *a3)
{
  HWND ForegroundWindow; // rax
  int *v7; // rbx
  _QWORD *v8; // rax
  HWND v9; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-30h] BYREF
  HWND v11; // [rsp+78h] [rbp+10h] BYREF
  struct IImmersiveApplication *v12; // [rsp+88h] [rbp+20h] BYREF

  v11 = a2;
  ForegroundWindow = GetForegroundWindow();
  v9 = ForegroundWindow;
  if ( !ForegroundWindow || ForegroundWindow == a2 )
  {
    v12 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v7 = (int *)*((_QWORD *)this + 100);
    v8 = lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_(
           v10,
           (__int64)this,
           &v11,
           &v9,
           (__int64 *)&v12);
    CDelayIAMOperations::AddOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___(v7, v8);
    lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::__lambda_2cec81e5a08c64ba5d30bf166a2a5e31_((__int64)v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  }
}
