/*
 * XREFs of ?GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z @ 0x18020D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802939F0 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetIsSystemInputApp(
        TouchKeyboardExperienceManager *this,
        const unsigned __int16 *a2,
        int *a3)
{
  const WCHAR *v5; // rcx
  LPCWCH lpString1[2]; // [rsp+30h] [rbp-38h] BYREF
  int cchCount1; // [rsp+40h] [rbp-28h]
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]

  TouchKeyboardExperienceManager::GetCurrentInputAppId((char *)this - 144, lpString1);
  v5 = (const WCHAR *)lpString1;
  if ( v9 > 7 )
    v5 = lpString1[0];
  *a3 = CompareStringOrdinal(v5, cchCount1, a2, -1, 1) == 2;
  std::wstring::_Tidy_deallocate((void **)lpString1);
  return 0LL;
}
