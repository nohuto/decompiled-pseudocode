/*
 * XREFs of _lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::__lambda_f9c49c7b293ed1d0382b2914a11b6bf4_ @ 0x1800189C0
 * Callers:
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_f9c49c7b293ed1d0382b2914a11b6bf4____::_1_::dtor$2 @ 0x180043D79 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_ea_180043D79.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@.c)
 */

HRESULT __fastcall lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::__lambda_f9c49c7b293ed1d0382b2914a11b6bf4_(__int64 a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release();
  }
  return result;
}
