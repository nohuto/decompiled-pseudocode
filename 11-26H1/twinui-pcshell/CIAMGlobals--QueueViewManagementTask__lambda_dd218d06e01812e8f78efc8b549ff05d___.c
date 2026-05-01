/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___ @ 0x1802BF9CC
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180092E50 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___ @ 0x1802ADAFC (Windows--Internal--ComTaskPool--QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___.c)
 *     _lambda_efcd6f7655c646e4b7d2db7830a7991f_::__lambda_efcd6f7655c646e4b7d2db7830a7991f_ @ 0x1802B9888 (_lambda_efcd6f7655c646e4b7d2db7830a7991f_--__lambda_efcd6f7655c646e4b7d2db7830a7991f_.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v9 = 0LL;
  if ( &v9 != a2 )
  {
    v9 = *a2;
    *a2 = 0LL;
  }
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___(
         v6,
         v5,
         (unsigned int)v2[15].Ptr,
         (__int64)&Ptr);
  lambda_efcd6f7655c646e4b7d2db7830a7991f_::__lambda_efcd6f7655c646e4b7d2db7830a7991f_((__int64 *)&Ptr);
  return v7;
}
