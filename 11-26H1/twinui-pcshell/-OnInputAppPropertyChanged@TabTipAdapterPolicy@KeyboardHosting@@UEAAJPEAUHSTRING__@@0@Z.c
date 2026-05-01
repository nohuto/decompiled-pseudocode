/*
 * XREFs of ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x1801E7010
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Traits_find@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x180030644 (--$_Traits_find@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18013DCC4 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180201B54 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x180203DD8 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::OnInputAppPropertyChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        HSTRING a2,
        HSTRING a3)
{
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx
  PCWSTR v8; // rax
  unsigned __int64 v9; // rax
  const void *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  __int128 *v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  __int128 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  __int128 *v25; // rcx
  __int128 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned int v30; // [rsp+30h] [rbp-29h] BYREF
  __int128 v31; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-11h]
  unsigned __int64 v33; // [rsp+50h] [rbp-9h]
  wchar_t String[8]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v35; // [rsp+68h] [rbp+Fh]
  _OWORD v36[2]; // [rsp+78h] [rbp+1Fh] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v6 = std::_WChar_traits<wchar_t>::length((__int64)StringRawBuffer);
  std::wstring::_Construct<1,unsigned short const *>((char **)&v31, v7, v6);
  v8 = WindowsGetStringRawBuffer(a3, 0LL);
  memset(v36, 0, sizeof(v36));
  v9 = std::_WChar_traits<wchar_t>::length((__int64)v8);
  std::wstring::_Construct<1,unsigned short const *>((char **)v36, v10, v9);
  v11 = std::_WChar_traits<wchar_t>::length((__int64)L"RegistryKeyNameForLastPositionX:");
  v13 = std::_WChar_traits<wchar_t>::length(v12);
  v15 = &v31;
  if ( v33 > 7 )
    v15 = (__int128 *)v31;
  v16 = -1LL;
  if ( std::_Traits_find<std::char_traits<unsigned short>>((__int64)v15, v32, 0LL, v14, v13) != -1 )
  {
    *(_OWORD *)String = 0LL;
    v35 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset(&v31, v11);
    v17 = -1LL;
    if ( v32 - v11 != -1LL )
      v17 = v32 - v11;
    v18 = &v31;
    if ( v33 > 7 )
      v18 = (__int128 *)v31;
    std::wstring::_Construct<1,unsigned short const *>((char **)String, (char *)v18 + 2 * v11, v17);
    v30 = std::stoul(String);
    std::wstring::_Tidy_deallocate(String);
    v19 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
            (_QWORD *)this + 7,
            (__int64)String,
            &v30);
    std::wstring::operator=((char *)(*(_QWORD *)v19 + 40LL), (char *)v36, v20);
  }
  v21 = std::_WChar_traits<wchar_t>::length((__int64)L"RegistryKeyNameForLastPositionY:");
  v23 = std::_WChar_traits<wchar_t>::length(v22);
  v25 = &v31;
  if ( v33 > 7 )
    v25 = (__int128 *)v31;
  if ( std::_Traits_find<std::char_traits<unsigned short>>((__int64)v25, v32, 0LL, v24, v23) != -1 )
  {
    *(_OWORD *)String = 0LL;
    v35 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset(&v31, v21);
    if ( v32 - v21 != -1LL )
      v16 = v32 - v21;
    v26 = &v31;
    if ( v33 > 7 )
      v26 = (__int128 *)v31;
    std::wstring::_Construct<1,unsigned short const *>((char **)String, (char *)v26 + 2 * v21, v16);
    v30 = std::stoul(String);
    std::wstring::_Tidy_deallocate(String);
    v27 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
            (_QWORD *)this + 9,
            (__int64)String,
            &v30);
    std::wstring::operator=((char *)(*(_QWORD *)v27 + 40LL), (char *)v36, v28);
  }
  std::wstring::_Tidy_deallocate(v36);
  std::wstring::_Tidy_deallocate(&v31);
  return 0LL;
}
