/*
 * XREFs of ?GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180201190
 * Callers:
 *     <none>
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x18002D174 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180032218 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180289270 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::GetAppId(TouchKeyboardExperienceManager *this, HSTRING *a2)
{
  __int64 CurrentInputAppId; // rax
  winrt::impl *v4; // rcx
  struct winrt::impl::hstring_header *v5; // rdx
  unsigned int v6; // r8d
  struct winrt::impl::hstring_header *v7; // rax
  winrt::impl *hstring_on_heap; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-30h] BYREF

  CurrentInputAppId = TouchKeyboardExperienceManager::GetCurrentInputAppId((char *)this - 200, v10);
  v4 = (winrt::impl *)CurrentInputAppId;
  if ( *(_QWORD *)(CurrentInputAppId + 24) > 7uLL )
    v4 = *(winrt::impl **)CurrentInputAppId;
  hstring_on_heap = winrt::impl::create_hstring_on_heap(v4, (winrt::impl *)*(unsigned int *)(CurrentInputAppId + 16));
  std::wstring::_Tidy_deallocate(v10);
  v7 = winrt::impl::duplicate_hstring(hstring_on_heap, v5, v6);
  winrt::handle_type<winrt::impl::hstring_traits>::attach(a2, (__int64)v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&hstring_on_heap);
  return 0LL;
}
