/*
 * XREFs of ?Current@WindowsTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x180638EB0
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802AC8AC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18061DE70 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 *     _lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x180630430 (_lambda_77e78c927b00fdc94620a558442d73ef_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 * Callees:
 *     ?Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x180638ED0 (-Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::WindowsTracker::Current(__int64 a1)
{
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::Current();
  return a1;
}
