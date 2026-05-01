/*
 * XREFs of _lambda_e144cef1f387178a308841941c02025f_::_lambda_e144cef1f387178a308841941c02025f_ @ 0x180570E80
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801F1EA0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289144 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 */

__int64 __fastcall lambda_e144cef1f387178a308841941c02025f_::_lambda_e144cef1f387178a308841941c02025f_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4,
        void **a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  __int64 *v10; // rcx
  void **v11; // rax
  volatile signed __int32 *v12; // rcx

  v7 = *a3;
  *(_QWORD *)a1 = a2;
  v10 = (__int64 *)(a1 + 8);
  *v10 = v7;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v10);
  *(_DWORD *)(a1 + 16) = *a4;
  v11 = tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::ensure_data(a5);
  v12 = (volatile signed __int32 *)*v11;
  *(_QWORD *)(a1 + 24) = *v11;
  if ( v12 )
    _InterlockedIncrement(v12 + 78);
  *(_QWORD *)(a1 + 32) = *a6;
  *(_QWORD *)(a1 + 40) = *a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 40));
  return a1;
}
