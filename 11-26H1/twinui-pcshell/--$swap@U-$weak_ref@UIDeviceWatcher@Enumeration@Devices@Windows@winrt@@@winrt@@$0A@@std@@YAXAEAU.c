/*
 * XREFs of ??$swap@U?$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@0@Z @ 0x1803402D0
 * Callers:
 *     ??4?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180342F88 (--4-$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@-$abi@UIDeviceWat.c)
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x18061A160 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 *__fastcall std::swap<winrt::weak_ref<winrt::Windows::Devices::Enumeration::IDeviceWatcher>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *result; // rax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = *a1;
  *a1 = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, a2);
  result = winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a2, v4);
  if ( v4[0] )
    return (__int64 *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
  return result;
}
