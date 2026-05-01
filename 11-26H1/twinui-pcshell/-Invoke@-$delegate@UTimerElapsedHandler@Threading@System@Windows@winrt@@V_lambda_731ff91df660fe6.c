/*
 * XREFs of ?Invoke@?$delegate@UTimerElapsedHandler@Threading@System@Windows@winrt@@V_lambda_731ff91df660fe6a6a02c254355fca9f_@@@impl@winrt@@UEAAHPEAX@Z @ 0x18034BD10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_731ff91df660fe6a6a02c254355fca9f_>::Invoke(
        __int64 a1,
        __int64 a2)
{
  void (*v2)(void); // rdi
  __int64 result; // rax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(void (**)(void))(a1 + 24);
  v4[0] = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v4);
  try
  {
    v2();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v4);
  }
  return result;
}
