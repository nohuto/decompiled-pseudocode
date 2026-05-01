/*
 * XREFs of ??$?0V_lambda_3388fa7f0a5c6f3f4a8233dcf615ab87_@@@?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@QEAA@V_lambda_3388fa7f0a5c6f3f4a8233dcf615ab87_@@@Z @ 0x18035A338
 * Callers:
 *     ??$make_agile_delegate@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@1@AEBU2341@@Z @ 0x18035A8A8 (--$make_agile_delegate@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  char *v6; // [rsp+28h] [rbp-20h]

  v6 = (char *)operator new(0x28uLL);
  *((_DWORD *)v6 + 2) = 1;
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)v6 + 2) = v4;
  *(_OWORD *)(v6 + 24) = *(_OWORD *)(a2 + 8);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>,_lambda_3388fa7f0a5c6f3f4a8233dcf615ab87_>::`vftable';
  *a1 = v6;
  if ( *(_QWORD *)a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a2);
  return a1;
}
