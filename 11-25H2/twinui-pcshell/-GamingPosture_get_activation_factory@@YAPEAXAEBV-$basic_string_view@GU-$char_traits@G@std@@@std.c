/*
 * XREFs of ?GamingPosture_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180333EDC
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18017A1D4 (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$make@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18033569C (--$make@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Wi.c)
 */

__int64 __fastcall GamingPosture_get_activation_factory(char **a1)
{
  char *v1; // rdx
  __int64 v2; // rcx
  char *v3; // rax
  signed __int64 v4; // r8
  char *i; // rcx
  __int64 *v6; // rax
  __int64 v7; // rbx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 2LL * (_QWORD)a1[1];
  v3 = &v1[v2];
  if ( v2 != 138 )
    return 0LL;
  v4 = (char *)L"" - v3;
  for ( i = v3 - 2; i + 2 != v1; i -= 2 )
  {
    if ( *(_WORD *)i != *(_WORD *)&i[v4] )
      return 0LL;
  }
  v6 = (__int64 *)winrt::make<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,>(
                    &v9,
                    v1,
                    v4);
  v7 = *v6;
  *v6 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return v7;
}
