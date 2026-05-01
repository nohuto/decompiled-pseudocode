/*
 * XREFs of ?ExitCloudPC@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA_NAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@@Z @ 0x18066A490
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

bool winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::ExitCloudPC()
{
  volatile signed __int32 *v1; // [rsp+48h] [rbp+20h] BYREF

  winrt::hstring::hstring((winrt::hstring *)&v1, &pvData);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v1);
  return ExitWindowsEx(4u, 0x80000000);
}
