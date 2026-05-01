/*
 * XREFs of ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x1802A34E4
 * Callers:
 *     ??0_Creator@_Dir_enum_impl@filesystem@std@@QEAA@AEBVpath@23@W4directory_options@23@@Z @ 0x1802A345C (--0_Creator@_Dir_enum_impl@filesystem@std@@QEAA@AEBVpath@23@W4directory_options@23@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@W4format@012@@Z @ 0x18005BF40 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV-$basi.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x1800AFAEC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     __std_fs_directory_iterator_advance @ 0x1802D4C24 (__std_fs_directory_iterator_advance.c)
 *     __std_fs_directory_iterator_open @ 0x1802D4C74 (__std_fs_directory_iterator_open.c)
 *     ?_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z @ 0x180562C60 (-_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filesystem::_Dir_enum_impl::_Open_dir(
        std::filesystem *a1,
        char a2,
        __int64 *a3,
        std::filesystem *a4)
{
  std::filesystem *v7; // rbx
  __int64 v8; // rax
  std::filesystem::path *v9; // rax
  __int64 result; // rax
  const struct __std_fs_find_data *v11; // rdx
  __int64 v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-68h] BYREF
  void *v14[4]; // [rsp+30h] [rbp-58h] BYREF

  v7 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(std::filesystem **)a1;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)a1 + v8) );
  if ( !v8 || v8 != *((_QWORD *)v7 + 2) )
    return 2LL;
  *(_QWORD *)&v13 = L"*";
  *((_QWORD *)&v13 + 1) = 1LL;
  v9 = (std::filesystem::path *)std::filesystem::path::path(v14, &v13);
  std::filesystem::path::operator/=(v7, v9);
  std::wstring::_Tidy_deallocate(v14);
  if ( *((_QWORD *)v7 + 3) > 7uLL )
    v7 = *(std::filesystem **)v7;
  result = _std_fs_directory_iterator_open((LPCWSTR)v7);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 5 && (a2 & 2) != 0 )
      return 18LL;
  }
  else
  {
    v12 = *a3;
    while ( std::filesystem::_Is_dot_or_dotdot(a4, v11) )
    {
      result = _std_fs_directory_iterator_advance(v12, a4);
      if ( (_DWORD)result )
        return result;
    }
    return 0LL;
  }
  return result;
}
