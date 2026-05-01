/*
 * XREFs of ??0RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180662BA0
 * Callers:
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C2B70 (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x180137160 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180137160.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801EABB8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x1801F31AC (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801F31AC.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@std@@@std@@@2@@Z @ 0x1802859E4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1802859E4.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x180611EA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@U_String_const_ea_180611EA8.c)
 *     ??0?$list@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@1@@Z @ 0x180662B64 (--0-$list@U-$pair@$$CBUhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=19
winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::RemoteSessionPersistenceHelper(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax
  unsigned __int64 size_of; // rax
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD v15[4]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v16[4]; // [rsp+50h] [rbp-79h] BYREF
  _QWORD v17[4]; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v19[4]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v20[4]; // [rsp+D0h] [rbp+7h] BYREF

  *(_QWORD *)this = 0LL;
  v2 = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v3 = operator new(0x58uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    0x10uLL,
    *((_QWORD *)v2 + 1));
  *((_DWORD *)this + 18) = 0;
  std::list<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>::list<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>((_QWORD *)this + 10);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 7LL;
  *((_QWORD *)this + 16) = 8LL;
  *((_DWORD *)this + 18) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 12,
    0x10uLL,
    *((_QWORD *)this + 10));
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)this + 18) = v5;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 7LL;
  *((_QWORD *)this + 24) = 8LL;
  *((_DWORD *)this + 34) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,enum winrt::WindowsUdk::UI::Shell::ShellView>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 20,
    0x10uLL,
    *((_QWORD *)this + 18));
  v6 = std::wstring::wstring((__int64)v17, (__int64)L"TrackedWindows");
  v7 = std::wstring::wstring((__int64)v16, (__int64)L"Software\\Microsoft\\Windows\\RemoteSystemIntegration");
  v8 = std::operator+<unsigned short>((__int64)v15, v7, (__int64)L"\\");
  std::wstring::wstring((char **)this + 25, v9, v8, v6);
  std::wstring::_Tidy_deallocate(v15);
  std::wstring::_Tidy_deallocate(v16);
  std::wstring::_Tidy_deallocate(v17);
  v10 = std::wstring::wstring((__int64)v20, (__int64)L"TrackedProcesses");
  v11 = std::wstring::wstring((__int64)v19, (__int64)L"Software\\Microsoft\\Windows\\RemoteSystemIntegration");
  v12 = std::operator+<unsigned short>((__int64)v18, v11, (__int64)L"\\");
  std::wstring::wstring((char **)this + 29, v13, v12, v10);
  std::wstring::_Tidy_deallocate(v18);
  std::wstring::_Tidy_deallocate(v19);
  std::wstring::_Tidy_deallocate(v20);
  return this;
}
