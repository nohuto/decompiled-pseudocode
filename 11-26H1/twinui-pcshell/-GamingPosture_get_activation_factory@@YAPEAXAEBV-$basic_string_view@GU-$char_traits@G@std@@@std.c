/*
 * XREFs of ?GamingPosture_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18033374C
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016947C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$make@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x180334EFC (--$make@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Wi.c)
 */

__int64 __fastcall GamingPosture_get_activation_factory(_QWORD *a1, __int64 a2, _WORD *a3)
{
  _WORD *v3; // rdx
  _WORD *v4; // rax
  const unsigned __int16 *v5; // r9
  __int64 *v6; // rax
  __int64 v7; // rbx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_WORD *)*a1;
  if ( 2LL * a1[1] != 138 )
    return 0LL;
  v4 = v3 + 69;
  v5 = L"n";
  while ( v4 != v3 )
  {
    a3 = v4 - 1;
    v4 = a3;
    if ( *a3 != *v5 )
      return 0LL;
    --v5;
  }
  v6 = (__int64 *)winrt::make<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,>(
                    &v9,
                    v3,
                    a3,
                    v5);
  v7 = *v6;
  *v6 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return v7;
}
