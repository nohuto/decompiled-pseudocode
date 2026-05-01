/*
 * XREFs of ??$?0V_lambda_735bb2238cff7f690541b2a10058ef70_@@@SnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@V_lambda_735bb2238cff7f690541b2a10058ef70_@@@Z @ 0x1805B18EC
 * Callers:
 *     ??$make_agile_delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@1@AEBU234561@@Z @ 0x1802A667C (--$make_agile_delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler::SnapFlyoutInstanceShownHandler(
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
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler,_lambda_735bb2238cff7f690541b2a10058ef70_>::`vftable';
  *a1 = v6;
  if ( *(_QWORD *)a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a2);
  return a1;
}
