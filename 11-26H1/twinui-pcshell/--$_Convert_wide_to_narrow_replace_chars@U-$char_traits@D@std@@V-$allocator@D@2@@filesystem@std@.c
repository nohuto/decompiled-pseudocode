/*
 * XREFs of ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x18030F2F4
 * Callers:
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180314F64 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     __std_fs_convert_wide_to_narrow_replace_chars @ 0x1802CD470 (__std_fs_convert_wide_to_narrow_replace_chars.c)
 *     ?_Check_convert_result@std@@YAHU__std_fs_convert_result@@@Z @ 0x180314E18 (-_Check_convert_result@std@@YAHU__std_fs_convert_result@@@Z.c)
 *     ?_Throw_system_error@std@@YAXW4errc@1@@Z @ 0x180315198 (-_Throw_system_error@std@@YAXW4errc@1@@Z.c)
 *     ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x1803155E8 (-resize@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_KD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
        __int64 a1,
        UINT a2,
        __int64 a3)
{
  int v5; // esi
  const WCHAR *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r14
  CHAR *v9; // r9
  __int64 v10; // rax

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  if ( *(_QWORD *)(a3 + 8) )
  {
    if ( *(_QWORD *)(a3 + 8) > 0x7FFFFFFFuLL )
      std::_Throw_system_error();
    v5 = *(_DWORD *)(a3 + 8);
    v6 = *(const WCHAR **)a3;
    v7 = _std_fs_convert_wide_to_narrow_replace_chars(a2, *(LPCWCH *)a3, v5, 0LL, 0);
    v8 = (int)std::_Check_convert_result(v7);
    std::string::resize(a1, v8);
    v9 = (CHAR *)a1;
    if ( *(_QWORD *)(a1 + 24) > 0xFuLL )
      v9 = *(CHAR **)a1;
    v10 = _std_fs_convert_wide_to_narrow_replace_chars(a2, v6, v5, v9, v8);
    std::_Check_convert_result(v10);
  }
  return a1;
}
