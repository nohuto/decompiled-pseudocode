/*
 * XREFs of ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180294F0C
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031D64 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180033B70 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x1800E1E34 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?_Get_any_status@directory_entry@filesystem@std@@AEBA?AU_File_status_and_error@23@W4__std_fs_stats_flags@@@Z @ 0x180295070 (-_Get_any_status@directory_entry@filesystem@std@@AEBA-AU_File_status_and_error@23@W4__std_fs_sta.c)
 *     ??$transform@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@std@@YA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0V10@P6AGG@Z@Z @ 0x180295118 (--$transform@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180315134 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall StartupFolderNotification::IsValidStartupAppFile(const struct std::filesystem::directory_entry *a1)
{
  std::filesystem *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  __int128 *v5; // r9
  __int128 *v6; // rcx
  __int128 *v7; // rdx
  size_t v8; // rax
  const wchar_t *v9; // r8
  const wchar_t *v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-1h]
  __int128 v15; // [rsp+40h] [rbp+7h] BYREF
  __int128 v16; // [rsp+50h] [rbp+17h]
  _QWORD v17[4]; // [rsp+60h] [rbp+27h] BYREF

  std::filesystem::directory_entry::_Get_any_status(a1, &v13);
  if ( v14 && (((_DWORD)v13 - 1) & 0xFFFFFFF7) != 0 )
    std::filesystem::_Throw_fs_error("directory_entry::status", v14, (char *)a1 + 32);
  if ( (_DWORD)v13 != 3 )
  {
    v2 = (const struct std::filesystem::directory_entry *)((char *)a1 + 32);
    v3 = std::filesystem::path::filename(v2, (__int64)v17);
    v15 = 0LL;
    v16 = 0LL;
    v4 = *(_QWORD *)(v3 + 16);
    if ( *(_QWORD *)(v3 + 24) > 7uLL )
      v3 = *(_QWORD *)v3;
    std::wstring::_Construct<2,unsigned short const *>(&v15, (_OWORD *)v3, v4);
    std::wstring::_Tidy_deallocate(v17);
    v5 = &v15;
    if ( *((_QWORD *)&v16 + 1) > 7uLL )
      LODWORD(v5) = v15;
    v6 = &v15;
    if ( *((_QWORD *)&v16 + 1) > 7uLL )
      LODWORD(v6) = v15;
    v7 = &v15;
    if ( *((_QWORD *)&v16 + 1) > 7uLL )
      LODWORD(v7) = v15;
    std::transform<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short (*)(unsigned short)>(
      (unsigned int)&v13,
      (_DWORD)v7,
      (_DWORD)v6 + 2 * v16,
      (_DWORD)v5,
      (__int64)_o_towlower);
    v8 = std::_WChar_traits<wchar_t>::length((__int64)L"desktop.ini");
    v10 = (const wchar_t *)&v15;
    if ( *((_QWORD *)&v16 + 1) > 7uLL )
      v10 = (const wchar_t *)v15;
    LOBYTE(v11) = std::_Traits_compare<std::char_traits<unsigned short>>(v10, v16, v9, v8);
    if ( v11 )
    {
      if ( *((_QWORD *)v2 + 3) > 7uLL )
        v2 = *(std::filesystem **)v2;
      if ( (GetFileAttributesW((LPCWSTR)v2) & 2) == 0 )
      {
        std::wstring::_Tidy_deallocate(&v15);
        return 1;
      }
    }
    std::wstring::_Tidy_deallocate(&v15);
  }
  return 0;
}
