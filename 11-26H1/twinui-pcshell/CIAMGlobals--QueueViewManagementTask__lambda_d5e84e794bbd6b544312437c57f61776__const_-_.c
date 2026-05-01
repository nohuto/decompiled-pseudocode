/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1802BFC48
 * Callers:
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18010D834 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_d7e722f97b0ff1a046566d4f834dfe37_::__lambda_d7e722f97b0ff1a046566d4f834dfe37_ @ 0x18010D6A8 (_lambda_d7e722f97b0ff1a046566d4f834dfe37_--__lambda_d7e722f97b0ff1a046566d4f834dfe37_.c)
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x18010DA98 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d7e722f97b0ff1a046566d4f834dfe37___ @ 0x1801F62CC (Windows--Internal--ComTaskPool--QueueTask__lambda_d7e722f97b0ff1a046566d4f834dfe37___.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  volatile int *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v10 = *a2;
  winrt::com_ptr<CMultitaskingViewManager>::add_ref(&v10, v5);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_d7e722f97b0ff1a046566d4f834dfe37___(
         v7,
         v6,
         (unsigned int)v2[15].Ptr,
         (__int64)&Ptr);
  lambda_d7e722f97b0ff1a046566d4f834dfe37_::__lambda_d7e722f97b0ff1a046566d4f834dfe37_((__int64 *)&Ptr);
  return v8;
}
