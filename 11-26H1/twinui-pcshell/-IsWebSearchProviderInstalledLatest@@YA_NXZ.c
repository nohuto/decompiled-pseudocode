/*
 * XREFs of ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1803B59B4
 * Callers:
 *     ?ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x1803B90BC (-ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x1801FDAD8 (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ComparePackageVersion@Update@Shell@Internal@Windows@@YAHAEBUPackageVersion@ApplicationModel@4winrt@@0@Z @ 0x1803B0748 (-ComparePackageVersion@Update@Shell@Internal@Windows@@YAHAEBUPackageVersion@ApplicationModel@4wi.c)
 *     ?ParsePackageVersion@Update@Shell@Internal@Windows@@YA_NPEBGGPEAUPackageVersion@ApplicationModel@4winrt@@@Z @ 0x1803B6CB8 (-ParsePackageVersion@Update@Shell@Internal@Windows@@YA_NPEBGGPEAUPackageVersion@ApplicationModel.c)
 */

bool IsWebSearchProviderInstalledLatest(void)
{
  const unsigned __int16 *v0; // rdx
  struct winrt::Windows::ApplicationModel::PackageVersion *v1; // r9
  const unsigned __int16 *v2; // rdx
  struct winrt::Windows::ApplicationModel::PackageVersion *v3; // r9
  const struct winrt::Windows::ApplicationModel::PackageVersion *v4; // r8
  unsigned __int16 v6[4]; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int16 v7[4]; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int16 v8[8]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v9; // [rsp+50h] [rbp-9h]
  __int128 v10; // [rsp+60h] [rbp+7h]
  unsigned __int16 v11[8]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v12; // [rsp+80h] [rbp+27h]
  __int128 v13; // [rsp+90h] [rbp+37h]

  *(_QWORD *)v7 = 0LL;
  *(_OWORD *)v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( SHRegGetStringEx(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
         L"WebSearchProviderPackageVersion",
         2u,
         v8,
         0x18u) < 0
    || !Windows::Internal::Shell::Update::ParsePackageVersion(
          (Windows::Internal::Shell::Update *)v8,
          v0,
          (unsigned __int16)v7,
          v1) )
  {
    return 1;
  }
  *(_QWORD *)v6 = 0LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  return SHRegGetStringEx(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
           L"WebSearchInstalledVersion",
           2u,
           v11,
           0x18u) >= 0
      && Windows::Internal::Shell::Update::ParsePackageVersion(
           (Windows::Internal::Shell::Update *)v11,
           v2,
           (unsigned __int16)v6,
           v3)
      && (int)Windows::Internal::Shell::Update::ComparePackageVersion(
                (Windows::Internal::Shell::Update *)v7,
                (const struct winrt::Windows::ApplicationModel::PackageVersion *)v6,
                v4) <= 0;
}
