/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileRemovedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ae55d667dee5f74db031bb94afbcc4c3_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805F09F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::TileRemovedEventArgs>,_lambda_ae55d667dee5f74db031bb94afbcc4c3_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void (*v4)(void); // rbx
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(void (**)(void))(a1 + 24);
  v7 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v7);
  v8 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v8);
  try
  {
    v4();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
