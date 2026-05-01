/*
 * XREFs of _lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x18069725C
 * Callers:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_____lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___ @ 0x180696F40 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____lambda_634a8efdf62851cb3d468a5f6e943be4___ @ 0x180696FDC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a8efdf6285.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x180697094 (CreationThreadDispatcher--RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 *     CreationThreadDispatcher::RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x18069716C (CreationThreadDispatcher--RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = __abi_winrt_ptr_ctor(*a2);
  a1[1] = __abi_winrt_ptr_ctor(a2[1]);
  a1[2] = __abi_winrt_ptr_ctor(a2[2]);
  return a1;
}
