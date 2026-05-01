/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___ @ 0x1802C8408
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18007C4B0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___ @ 0x1802B6BE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___.c)
 *     _lambda_efcd6f7655c646e4b7d2db7830a7991f_::__lambda_efcd6f7655c646e4b7d2db7830a7991f_ @ 0x1802C277C (_lambda_efcd6f7655c646e4b7d2db7830a7991f_--__lambda_efcd6f7655c646e4b7d2db7830a7991f_.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v10 = 0LL;
  if ( &v10 != a2 )
  {
    v7 = *a2;
    *a2 = 0LL;
    v10 = v7;
  }
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___(
         v6,
         v5,
         (unsigned int)v2[15].Ptr,
         (__int64)&Ptr);
  lambda_efcd6f7655c646e4b7d2db7830a7991f_::__lambda_efcd6f7655c646e4b7d2db7830a7991f_((__int64 *)&Ptr);
  return v8;
}
