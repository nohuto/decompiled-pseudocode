/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::Invoke @ 0x18048BBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1802BE238 (-InternalRelease@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEBAXXZ @ 0x18048BB9C (-InternalAddRef@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TeardownThumbnailsAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18048CCD4 (-TeardownThumbnailsAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::Invoke(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 16) + 16LL);
  Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalAddRef((__int64 *)&v5, a2);
  try
  {
    if ( v2 )
      MultitaskingViewGestureHandler::TeardownThumbnailsAsync(v2, &v4);
    Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
