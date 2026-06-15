/*
 * XREFs of Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____ @ 0x180037784
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____lambda_2b6e7f78b65f10010076d2e207bfb9e0___ @ 0x180036B58 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2b6e7f78b65f1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
