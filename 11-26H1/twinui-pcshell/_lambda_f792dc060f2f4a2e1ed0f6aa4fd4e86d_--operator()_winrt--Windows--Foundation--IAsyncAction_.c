/*
 * XREFs of _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805F1818
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::Invoke @ 0x1805F5F80 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncActionCompletedHandler__lambda_f792dc060f.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18027AF0C (-get@-$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1805F32AC (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1805F32E0 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_Tl_ea_1805F32E0.c)
 *     ??1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805F3AA4 (--1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805F3D34 (--4-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag.c)
 *     ?ErrorCode@?$consume_Windows_Foundation_IAsyncInfo@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805F4CBC (-ErrorCode@-$consume_Windows_Foundation_IAsyncInfo@UIAsyncAction@Foundation@Windows@winrt@@@impl.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805F75A0 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflector.c)
 *     ?UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F7FFC (-UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_(
        __int64 *a1,
        __int64 a2,
        int a3)
{
  __int64 *v6; // rdi
  __int64 v7; // rdx
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *v8; // rbx
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *v10[2]; // [rsp+20h] [rbp-2D8h] BYREF
  _QWORD v11[42]; // [rsp+30h] [rbp-2C8h] BYREF
  _QWORD v12[42]; // [rsp+180h] [rbp-178h] BYREF

  v6 = a1 + 1;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
  v11[0] = &MeetAndChatTelemetry::HideFlyout::`vftable';
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    v12,
    v6);
  v12[0] = &MeetAndChatTelemetry::HideFlyout::`vftable';
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::operator=(
    v6,
    v11);
  MeetAndChatTelemetry::HideFlyout::~HideFlyout((MeetAndChatTelemetry::HideFlyout *)v12);
  MeetAndChatTelemetry::HideFlyout::~HideFlyout((MeetAndChatTelemetry::HideFlyout *)v11);
  if ( a3 == 3 )
  {
    v7 = *(unsigned int *)winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncAction>::ErrorCode(
                            a2,
                            v10);
  }
  else
  {
    winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::get(
      a1,
      (struct IUnknown *)v10);
    v8 = v10[0];
    if ( v10[0] )
      winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::UpdateFlyoutVisibility(v10[0]);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v10);
    v7 = 0LL;
  }
  return wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
           v6,
           v7);
}
