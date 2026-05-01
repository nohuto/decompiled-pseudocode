/*
 * XREFs of _lambda_1b91a7a6515db6d6d798acc687776bab_::_lambda_1b91a7a6515db6d6d798acc687776bab_ @ 0x18030B990
 * Callers:
 *     ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18030CF64 (-SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_1b91a7a6515db6d6d798acc687776bab_::_lambda_1b91a7a6515db6d6d798acc687776bab_(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3)
{
  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_DWORD *)(a1 + 8) = *a3;
  return a1;
}
