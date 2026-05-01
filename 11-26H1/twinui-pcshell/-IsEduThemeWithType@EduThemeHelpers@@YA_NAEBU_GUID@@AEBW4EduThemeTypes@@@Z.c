/*
 * XREFs of ?IsEduThemeWithType@EduThemeHelpers@@YA_NAEBU_GUID@@AEBW4EduThemeTypes@@@Z @ 0x180606B5C
 * Callers:
 *     ?SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1806071EC (-SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

char __fastcall EduThemeHelpers::IsEduThemeWithType(
        const GUID *this,
        const struct _GUID *a2,
        const enum EduThemeTypes *a3)
{
  wchar_t **i; // rcx
  OLECHAR *v5; // rax
  int v6; // r8d
  int v7; // edx
  OLECHAR sz[40]; // [rsp+20h] [rbp-68h] BYREF

  StringFromGUID2(this, sz, 39);
  for ( i = (wchar_t **)&unk_180760550; i != off_1807605E0; i += 3 )
  {
    if ( (*(_DWORD *)i & a2->Data1) != 0 )
    {
      v5 = sz;
      do
      {
        v6 = *(OLECHAR *)((char *)v5 + (char *)i[1] - (char *)sz);
        v7 = *v5 - v6;
        if ( v7 )
          break;
        ++v5;
      }
      while ( v6 );
      if ( !v7 )
        return 1;
    }
  }
  return 0;
}
