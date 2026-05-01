/*
 * XREFs of ?ConfigurationChanged@?$consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigurationStatics@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1801584F0
 * Callers:
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180156990 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     ?ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@@Z @ 0x18035A518 (-ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winr.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigurationStatics<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::ConfigurationChanged(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v4; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v11 = 0;
  v7 = *a3;
  v8 = *v4;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *))(v8 + 112))(v4, v7, a2);
  winrt::check_hresult(&v13, v9, &v11);
  return a2;
}
