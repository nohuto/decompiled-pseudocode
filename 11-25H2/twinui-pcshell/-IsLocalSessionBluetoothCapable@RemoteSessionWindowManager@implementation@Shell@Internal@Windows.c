/*
 * XREFs of ?IsLocalSessionBluetoothCapable@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBA_NXZ @ 0x180635318
 * Callers:
 *     ?get_IsLocalSessionBluetoothCapable@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180637D10 (-get_IsLocalSessionBluetoothCapable@-$produce@URemoteSessionWindowManager@implementation@Shell@I.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C599C (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsLocalSessionBluetoothCapable(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  char v1; // bl
  _QWORD *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  v1 = *(_BYTE *)(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v3)
                + 264LL);
  if ( v3 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v3);
  return v1;
}
