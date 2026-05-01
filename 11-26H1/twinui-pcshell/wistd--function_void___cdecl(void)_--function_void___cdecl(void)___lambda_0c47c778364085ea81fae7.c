/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_0c47c778364085ea81fae706b8ebeb3b__void_ @ 0x1802D9AD8
 * Callers:
 *     ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180108CDC (-RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     wistd::__function::__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl(void)_::__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl(void)_ @ 0x1802DA4A8 (wistd--__function--__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl(void)_--__func_.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_0c47c778364085ea81fae706b8ebeb3b__void_(
        __int64 a1)
{
  __int64 *v2; // rdx

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = wistd::__function::__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl_void__::__func__lambda_0c47c778364085ea81fae706b8ebeb3b__void___cdecl_void__(a1 + 8);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(v2);
  return a1;
}
