/*
 * XREFs of ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x18029CFB0
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x18005C120 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x18005BDB4 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ??$transform@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@std@@YA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0V10@P6AGG@Z@Z @ 0x18029D114 (--$transform@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@.c)
 *     ?_Get_any_status@directory_entry@filesystem@std@@AEBA?AU_File_status_and_error@23@W4__std_fs_stats_flags@@@Z @ 0x18029D17C (-_Get_any_status@directory_entry@filesystem@std@@AEBA-AU_File_status_and_error@23@W4__std_fs_sta.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180318F20 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall StartupFolderNotification::IsValidStartupAppFile(const struct std::filesystem::directory_entry *a1)
{
  std::filesystem *v2; // rbx
  _QWORD *v3; // rax
  void **v4; // r9
  void **v5; // rcx
  void **v6; // rdx
  void **v7; // r8
  __int64 v8; // rdx
  const wchar_t *v9; // rcx
  signed __int64 v10; // r8
  __int64 v12; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-1h]
  void *v14[2]; // [rsp+40h] [rbp+7h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp+17h]
  unsigned __int64 v16; // [rsp+58h] [rbp+1Fh]
  void *v17[4]; // [rsp+60h] [rbp+27h] BYREF

  std::filesystem::directory_entry::_Get_any_status(a1, &v12);
  if ( v13 && (((_DWORD)v12 - 1) & 0xFFFFFFF7) != 0 )
    std::filesystem::_Throw_fs_error("directory_entry::status", v13, (char *)a1 + 32);
  if ( (_DWORD)v12 != 3 )
  {
    v2 = (const struct std::filesystem::directory_entry *)((char *)a1 + 32);
    v3 = std::filesystem::path::filename(v2, v17);
    std::wstring::wstring((__int64)v14, (__int64)v3);
    std::wstring::_Tidy_deallocate(v17);
    v4 = v14;
    if ( v16 > 7 )
      LODWORD(v4) = v14[0];
    v5 = v14;
    if ( v16 > 7 )
      LODWORD(v5) = v14[0];
    v6 = v14;
    if ( v16 > 7 )
      LODWORD(v6) = v14[0];
    std::transform<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short (*)(unsigned short)>(
      (unsigned int)&v12,
      (_DWORD)v6,
      (_DWORD)v5 + 2 * v15,
      (_DWORD)v4,
      (__int64)_o_towlower);
    v7 = v14;
    if ( v16 > 7 )
      v7 = (void **)v14[0];
    v8 = v15;
    if ( v15 > 0xB )
      v8 = 11LL;
    v9 = L"desktop.ini";
    v10 = (char *)v7 - (char *)L"desktop.ini";
    while ( v8 )
    {
      if ( *(const wchar_t *)((char *)v9 + v10) != *v9 )
        goto LABEL_20;
      --v8;
      ++v9;
    }
    if ( v15 == 11 )
      goto LABEL_24;
LABEL_20:
    if ( *((_QWORD *)v2 + 3) > 7uLL )
      v2 = *(std::filesystem **)v2;
    if ( (GetFileAttributesW((LPCWSTR)v2) & 2) == 0 )
    {
      std::wstring::_Tidy_deallocate(v14);
      return 1;
    }
LABEL_24:
    std::wstring::_Tidy_deallocate(v14);
  }
  return 0;
}
