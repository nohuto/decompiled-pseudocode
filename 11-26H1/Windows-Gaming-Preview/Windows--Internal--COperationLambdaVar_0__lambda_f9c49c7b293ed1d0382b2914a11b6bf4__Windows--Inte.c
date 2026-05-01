/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______ @ 0x180018FB0
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001B660 (Windows--Internal--COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4___ea_18001B660.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180001D50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@.c)
 */

void **__fastcall Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______(
        __int64 a1)
{
  void **result; // rax

  `eh vector destructor iterator'(
    (char *)(a1 + 48),
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  WindowsDeleteString(*(HSTRING *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release();
  }
  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  return result;
}
