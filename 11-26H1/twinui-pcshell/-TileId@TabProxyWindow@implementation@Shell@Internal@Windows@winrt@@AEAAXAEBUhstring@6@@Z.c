/*
 * XREFs of ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18002C7D4
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1802245BC (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x180265CB0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031D64 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180032218 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180201B54 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Traits_rfind@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x18021FB2C (--$_Traits_rfind@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        const struct winrt::hstring *a2)
{
  const unsigned __int16 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r8d
  int v8; // r9d
  __int128 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int128 *v12; // rdx
  unsigned int v13; // r8d
  winrt::impl *v14; // rdx
  char v15; // bl
  winrt::impl *v16; // rcx
  struct winrt::impl::hstring_header **v17; // rdi
  struct winrt::impl::hstring_header *hstring_on_heap; // rsi
  __int64 v19; // rbx
  __int128 *v20; // rax
  struct winrt::impl::hstring_header *v21; // [rsp+38h] [rbp-31h] BYREF
  __int128 v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+50h] [rbp-19h]
  unsigned __int64 v24; // [rsp+58h] [rbp-11h]
  _OWORD v25[2]; // [rsp+60h] [rbp-9h] BYREF
  _OWORD v26[2]; // [rsp+80h] [rbp+17h] BYREF

  v3 = winrt::hstring::c_str(a2);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = std::_WChar_traits<wchar_t>::length(v3);
  std::wstring::_Construct<1,unsigned short const *>(&v22, v5, v4);
  v6 = std::_WChar_traits<wchar_t>::length(L":");
  v9 = &v22;
  if ( v24 > 7 )
    LODWORD(v9) = v22;
  v10 = std::_Traits_rfind<std::char_traits<unsigned short>>((_DWORD)v9, v23, v7, v8, v6);
  v11 = -1LL;
  if ( v10 == -1 )
  {
    memset(v26, 0, sizeof(v26));
    v12 = &v22;
    if ( v24 > 7 )
      v12 = (__int128 *)v22;
    std::wstring::_Construct<2,unsigned short const *>(v26, v12, v23);
    v14 = (winrt::impl *)v26;
    v15 = 1;
    v16 = *(winrt::impl **)&v26[0];
  }
  else
  {
    v19 = v10 + 1;
    memset(v25, 0, sizeof(v25));
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset(&v22, v10 + 1);
    if ( v23 - v19 != -1 )
      v11 = v23 - v19;
    v20 = &v22;
    if ( v24 > 7 )
      v20 = (__int128 *)v22;
    std::wstring::_Construct<1,unsigned short const *>(v25, (char *)v20 + 2 * v19, v11);
    v14 = (winrt::impl *)v25;
    v15 = 6;
    v16 = *(winrt::impl **)&v25[0];
  }
  v17 = (struct winrt::impl::hstring_header **)((char *)this + 64);
  if ( *((_QWORD *)v14 + 3) <= 7uLL )
    v16 = v14;
  hstring_on_heap = winrt::impl::create_hstring_on_heap(v16, (winrt::impl *)*((unsigned int *)v14 + 4), v13);
  v21 = hstring_on_heap;
  if ( v17 != &v21 )
  {
    v21 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(v17);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v17);
    *v17 = hstring_on_heap;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    std::wstring::_Tidy_deallocate(v25);
  }
  if ( (v15 & 1) != 0 )
    std::wstring::_Tidy_deallocate(v26);
  std::wstring::_Tidy_deallocate(&v22);
}
