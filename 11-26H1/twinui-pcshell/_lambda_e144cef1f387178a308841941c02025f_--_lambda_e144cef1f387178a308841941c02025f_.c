/*
 * XREFs of _lambda_e144cef1f387178a308841941c02025f_::_lambda_e144cef1f387178a308841941c02025f_ @ 0x1805946E4
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801E8420 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180284170 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBA.c)
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
  __int64 *v8; // rcx
  void **v10; // rax
  volatile signed __int32 *v11; // rcx

  *(_QWORD *)a1 = a2;
  v8 = (__int64 *)(a1 + 8);
  *v8 = *a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v8);
  *(_DWORD *)(a1 + 16) = *a4;
  v10 = tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::ensure_data(a5);
  v11 = (volatile signed __int32 *)*v10;
  *(_QWORD *)(a1 + 24) = *v10;
  if ( v11 )
    _InterlockedIncrement(v11 + 80);
  *(_QWORD *)(a1 + 32) = *a6;
  *(_QWORD *)(a1 + 40) = *a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 40));
  return a1;
}
