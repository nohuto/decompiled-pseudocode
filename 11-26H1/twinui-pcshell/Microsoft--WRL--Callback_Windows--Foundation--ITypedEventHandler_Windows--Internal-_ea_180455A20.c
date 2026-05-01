/*
 * XREFs of Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_35f4cbd95a69b099cdc1fec594b9803b___ @ 0x180455A20
 * Callers:
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180243790 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x1802214C8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_35f4cbd95a69b099cdc1fec594b9803b___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_35f4cbd95a69b099cdc1fec594b9803b___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___ @ 0x18045903C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18045903C.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_35f4cbd95a69b099cdc1fec594b9803b___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v5;
  if ( v5 )
  {
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_35f4cbd95a69b099cdc1fec594b9803b___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_35f4cbd95a69b099cdc1fec594b9803b___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___(
           v5,
           a2);
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v7);
  result = a1;
  *a1 = v4;
  return result;
}
