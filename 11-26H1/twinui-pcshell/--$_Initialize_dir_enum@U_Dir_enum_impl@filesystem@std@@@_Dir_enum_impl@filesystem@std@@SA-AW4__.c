/*
 * XREFs of ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1800E16FC
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ??0directory_iterator@filesystem@std@@QEAA@AEBVpath@12@@Z @ 0x1802BDFF4 (--0directory_iterator@filesystem@std@@QEAA@AEBVpath@12@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0_Creator@_Dir_enum_impl@filesystem@std@@QEAA@AEBVpath@23@W4directory_options@23@@Z @ 0x1802AE620 (--0_Creator@_Dir_enum_impl@filesystem@std@@QEAA@AEBVpath@23@W4directory_options@23@@Z.c)
 *     ??$_Construct_in_place@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@std@@YAXAEAU_Dir_enum_impl@filesystem@0@$$QEAU_Creator@120@AEBW4directory_options@20@@Z @ 0x1802B442C (--$_Construct_in_place@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     __std_fs_directory_iterator_close @ 0x1802CD61C (__std_fs_directory_iterator_close.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::filesystem::_Dir_enum_impl::_Initialize_dir_enum<std::filesystem::_Dir_enum_impl>(
        _QWORD *a1,
        __int64 a2)
{
  std::_Ref_count_base *v3; // rcx
  unsigned int v4; // ebx
  _DWORD *v6; // [rsp+20h] [rbp-2A8h]
  _QWORD v7[79]; // [rsp+30h] [rbp-298h] BYREF
  char v8; // [rsp+2A8h] [rbp-20h]
  unsigned int v9; // [rsp+2ACh] [rbp-1Ch]

  std::filesystem::_Dir_enum_impl::_Creator::_Creator(v7, a2, 0LL);
  if ( v8 )
  {
    v6 = operator new(0x58uLL);
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::`vftable';
    std::_Construct_in_place<std::filesystem::_Dir_enum_impl,std::filesystem::_Dir_enum_impl::_Creator,enum std::filesystem::directory_options const &>((std::filesystem::_Dir_enum_impl *)(v6 + 4));
    *a1 = v6 + 4;
    v3 = (std::_Ref_count_base *)a1[1];
    a1[1] = v6;
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
  }
  v4 = v9;
  _std_fs_directory_iterator_close(v7[4]);
  std::wstring::_Tidy_deallocate(v7);
  return v4;
}
