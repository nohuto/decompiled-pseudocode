/*
 * XREFs of ??$?0V_lambda_7536ed3602bc242f525d5b8b1c633343_@@@?$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_7536ed3602bc242f525d5b8b1c633343_@@@Z @ 0x180337A54
 * Callers:
 *     ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x1803380F0 (--$make_agile_delegate@U-$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Postu.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::AsyncOperationCompletedHandler<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>(
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
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,_lambda_7536ed3602bc242f525d5b8b1c633343_>::`vftable';
  *a1 = v6;
  if ( *(_QWORD *)a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a2);
  return a1;
}
