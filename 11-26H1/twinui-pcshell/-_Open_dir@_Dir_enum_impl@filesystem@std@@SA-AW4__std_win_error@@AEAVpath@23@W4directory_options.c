/*
 * XREFs of ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x1802AE6AC
 * Callers:
 *     ??0_Creator@_Dir_enum_impl@filesystem@std@@QEAA@AEBVpath@23@W4directory_options@23@@Z @ 0x1802AE620 (--0_Creator@_Dir_enum_impl@filesystem@std@@QEAA@AEBVpath@23@W4directory_options@23@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@AEAVerror_code@2@@Z @ 0x1801D71A8 (-exists@filesystem@std@@YA_NAEBVpath@12@AEAVerror_code@2@@Z.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@W4format@012@@Z @ 0x180201154 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV-$basi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     __std_fs_directory_iterator_advance @ 0x1802CD5F4 (__std_fs_directory_iterator_advance.c)
 *     __std_fs_directory_iterator_open @ 0x1802CD644 (__std_fs_directory_iterator_open.c)
 *     ?_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z @ 0x180586E20 (-_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::filesystem::_Dir_enum_impl::_Open_dir(
        std::filesystem *a1,
        char a2,
        __int64 *a3,
        std::filesystem *a4)
{
  std::filesystem *v7; // rbx
  __int64 v8; // rax
  std::filesystem::path *v9; // rax
  const struct __std_fs_find_data *v10; // rdx
  unsigned int v11; // ebx
  struct std::error_code *v12; // r8
  __int64 v13; // rsi
  bool v15; // al
  int v16; // ecx
  _QWORD v17[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-58h] BYREF

  v7 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(std::filesystem **)a1;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)a1 + v8) );
  if ( !v8 || v8 != *((_QWORD *)v7 + 2) )
    return 2LL;
  std::wstring::wstring((__int64)v18, v7);
  v17[0] = L"*";
  v17[1] = 1LL;
  v9 = (std::filesystem::path *)std::filesystem::path::path((__int64)v19, (__int64)v17);
  std::filesystem::path::operator/=(v7, v9);
  std::wstring::_Tidy_deallocate(v19);
  if ( *((_QWORD *)v7 + 3) > 7uLL )
    v7 = *(std::filesystem **)v7;
  v11 = _std_fs_directory_iterator_open((LPCWSTR)v7);
  if ( v11 )
  {
    if ( v11 == 5 )
    {
      if ( (a2 & 2) != 0 )
        v11 = 18;
    }
    else if ( v11 == 2 )
    {
      v15 = std::filesystem::exists((std::filesystem *)v18, (const struct std::filesystem::path *)v17, v12);
      v16 = 2;
      if ( v15 )
        v16 = 18;
      v11 = v16;
    }
  }
  else
  {
    v13 = *a3;
    while ( std::filesystem::_Is_dot_or_dotdot(a4, v10) )
    {
      v11 = _std_fs_directory_iterator_advance(v13, a4);
      if ( v11 )
        goto LABEL_14;
    }
    v11 = 0;
  }
LABEL_14:
  std::wstring::_Tidy_deallocate(v18);
  return v11;
}
