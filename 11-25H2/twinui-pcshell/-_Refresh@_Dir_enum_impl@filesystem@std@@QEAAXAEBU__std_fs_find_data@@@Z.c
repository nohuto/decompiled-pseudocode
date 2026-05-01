/*
 * XREFs of ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x1800AF384
 * Callers:
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x1802B9324 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 *     ??$_Construct_in_place@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@std@@YAXAEAU_Dir_enum_impl@filesystem@0@$$QEAU_Creator@120@AEBW4directory_options@20@@Z @ 0x1802BA0F0 (--$_Construct_in_place@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x18005BE18 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x1800AFAEC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x1800AFECC (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::filesystem::_Dir_enum_impl::_Refresh(
        std::filesystem::_Dir_enum_impl *this,
        const struct __std_fs_find_data *a2)
{
  std::filesystem *v2; // rbx
  char *v3; // rdx
  __int64 v4; // rax
  const unsigned __int16 *v5; // r8
  std::filesystem *v6; // r11
  char *filename; // rax
  __int64 v8; // r11
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  void *v10[4]; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 7) = 6;
  if ( (*(_DWORD *)a2 & 0x400) == 0 )
  {
    *((_QWORD *)this + 1) = *((unsigned int *)a2 + 8) + ((unsigned __int64)*((unsigned int *)a2 + 7) << 32);
    *(_QWORD *)this = *(_QWORD *)((char *)a2 + 20);
    *((_DWORD *)this + 7) = 46;
  }
  v2 = (std::filesystem::_Dir_enum_impl *)((char *)this + 32);
  v3 = (char *)a2 + 44;
  *(_QWORD *)&v9 = v3;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&v3[2 * v4] );
  *((_QWORD *)&v9 + 1) = v4;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v10, &v9);
  v6 = v2;
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v6 = *(std::filesystem **)v2;
  filename = std::filesystem::_Find_filename(v6, (char *)v6 + 2 * *((_QWORD *)v2 + 2), v5);
  std::wstring::erase(v2, (__int64)&filename[-v8] >> 1);
  std::filesystem::path::operator/=(v2, (std::filesystem::path *)v10);
  std::wstring::_Tidy_deallocate(v10);
}
