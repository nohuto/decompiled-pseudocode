/*
 * XREFs of ??$?RAEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@_lambda_ec733d4b7bc4a75c52677f9b176b6cf3_@@QEBA?A_PAEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x1800A1A00
 * Callers:
 *     ?GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBURect@Foundation@67@@Z @ 0x1800A179C (-GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall _lambda_ec733d4b7bc4a75c52677f9b176b6cf3_::operator()<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager> &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  char v4; // bl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v2 = *a2;
  v6 = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManager>,
      &v6);
    v3 = v6;
    if ( v6 )
    {
      v4 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v3 = 0LL;
  }
  v4 = 1;
LABEL_6:
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  return v4;
}
