/*
 * XREFs of ??1?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B4928
 * Callers:
 *     _MultitaskingViewGestureHandler_CreateInstance_::_1_::dtor$0 @ 0x1806D5112 (_MultitaskingViewGestureHandler_CreateInstance_--_1_--dtor$0.c)
 *     _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::Invoke_::_1_::dtor$0 @ 0x1806EFF69 (_winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_efc442667d.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::~ComPtr<MultitaskingViewGestureHandler>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(a1);
}
