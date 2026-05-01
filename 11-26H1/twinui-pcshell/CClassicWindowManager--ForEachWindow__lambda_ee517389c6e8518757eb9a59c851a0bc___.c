/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_ee517389c6e8518757eb9a59c851a0bc___ @ 0x1802EBEA8
 * Callers:
 *     CClassicWindowManager::ForEachOwnee__lambda_f9eae87d6f3e756ba3ea7bb51b575bf4___ @ 0x1802EBDE0 (CClassicWindowManager--ForEachOwnee__lambda_f9eae87d6f3e756ba3ea7bb51b575bf4___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x18012883C (-IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z.c)
 *     _lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_::operator() @ 0x1802EC2C0 (_lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_--operator().c)
 */

char __fastcall CClassicWindowManager::ForEachWindow__lambda_ee517389c6e8518757eb9a59c851a0bc___(
        __int64 a1,
        __int64 a2)
{
  char v4; // bl
  unsigned __int64 v5; // rsi
  unsigned __int64 i; // rdi
  struct IClassicWindow *v7; // rbx
  CClassicWindowManager *v8; // rcx
  struct IClassicWindow *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v10 = *(struct IClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * i);
    v7 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v4 = CClassicWindowManager::IsWindowOwnedBy(v8, v7, **(struct IClassicWindow ***)(a2 + 8))
       ? lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_::operator()(*(_QWORD *)(a2 + 16), &v10)
       : 1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  }
  return v4;
}
