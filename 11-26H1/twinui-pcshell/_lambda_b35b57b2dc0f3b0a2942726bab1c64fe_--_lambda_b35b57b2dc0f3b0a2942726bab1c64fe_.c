/*
 * XREFs of _lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::_lambda_b35b57b2dc0f3b0a2942726bab1c64fe_ @ 0x1802DCF60
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1802973E0 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::_lambda_b35b57b2dc0f3b0a2942726bab1c64fe_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _BYTE *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 *v7; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v7 = (__int64 *)(a1 + 8);
  *v7 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
  *(_BYTE *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  result = a1;
  *(_DWORD *)(a1 + 32) = *a6;
  return result;
}
