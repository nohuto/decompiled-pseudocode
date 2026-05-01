/*
 * XREFs of ?ShouldEnableEduThemes@EduThemeHelpers@@YA_NXZ @ 0x18023F214
 * Callers:
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805E3510 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     <none>
 */

char __fastcall EduThemeHelpers::ShouldEnableEduThemes(EduThemeHelpers *this)
{
  char v1; // bl
  __m128i si128; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (int)PolicyManager_GetPolicy(L"Education", L"EnableEduThemes", &si128, &v4) >= 0 )
  {
    v1 = 1;
    if ( *(_DWORD *)(v4 + 8) != 1 || *(_DWORD *)(v4 + 16) != 1 )
      v1 = 0;
  }
  if ( v4 )
    PolicyManager_FreeGetPolicyData(v4);
  return v1;
}
