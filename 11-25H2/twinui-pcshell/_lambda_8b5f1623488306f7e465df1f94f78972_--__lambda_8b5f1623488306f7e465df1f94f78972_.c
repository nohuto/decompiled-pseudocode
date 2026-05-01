/*
 * XREFs of _lambda_8b5f1623488306f7e465df1f94f78972_::__lambda_8b5f1623488306f7e465df1f94f78972_ @ 0x1805E4F94
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___::_CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___ @ 0x1805E50A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___--_CTask.c)
 *     ?ContentFinished@SharedDesktopBackgroundVisualHost@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@3@@Z @ 0x1805E5630 (-ContentFinished@SharedDesktopBackgroundVisualHost@@QEAA-AUevent_token@winrt@@AEBU-$TypedEventHa.c)
 *     ?ContentStarted@SharedDesktopBackgroundVisualHost@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@3@@Z @ 0x1805E5708 (-ContentStarted@SharedDesktopBackgroundVisualHost@@QEAA-AUevent_token@winrt@@AEBU-$TypedEventHan.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall lambda_8b5f1623488306f7e465df1f94f78972_::__lambda_8b5f1623488306f7e465df1f94f78972_(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = a1 + 2;
  if ( *v2 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v2);
  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  return result;
}
