/*
 * XREFs of ??$swap@U?$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@0@Z @ 0x180340178
 * Callers:
 *     ??4?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180341C34 (--4-$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@-$abi@UIDeviceWat.c)
 *     _lambda_3e036b3644723c146ee880a5a6e63477_::operator() @ 0x1805F5980 (_lambda_3e036b3644723c146ee880a5a6e63477_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A7EDC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 *__fastcall std::swap<winrt::weak_ref<winrt::Windows::Devices::Enumeration::IDeviceWatcher>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 *result; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  *a1 = 0LL;
  v5 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, a2);
  result = winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a2, &v5);
  if ( v5 )
    return (__int64 *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
  return result;
}
