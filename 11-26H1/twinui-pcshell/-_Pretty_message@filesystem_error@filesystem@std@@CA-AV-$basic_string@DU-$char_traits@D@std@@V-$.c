/*
 * XREFs of ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180314F64
 * Callers:
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x1803103AC (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801B5C88 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     __std_fs_code_page @ 0x1802CD44C (__std_fs_code_page.c)
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x18030F2F4 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 *     ??$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@@Z @ 0x18030FB14 (--$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@-$basic_string@DU-$char_t.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1803101A0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?_Become_small@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180314D9C (-_Become_small@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180315204 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1803152D4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1803155B0 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::filesystem::filesystem_error::_Pretty_message(_QWORD *Src, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  UINT v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v14; // [rsp+40h] [rbp-49h]
  __int64 v15; // [rsp+48h] [rbp-41h] BYREF
  __int64 v16; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v18; // [rsp+78h] [rbp-11h]
  _QWORD v19[3]; // [rsp+88h] [rbp-1h] BYREF

  v14 = Src;
  std::string::string((__int64)Src);
  v8 = _std_fs_code_page();
  v13 = *(_OWORD *)std::wstring::operator std::basic_string_view<unsigned short>(a3, &v15);
  std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
    (__int64)v19,
    v8,
    (__int64)&v13);
  v13 = *(_OWORD *)std::wstring::operator std::basic_string_view<unsigned short>(a4, &v16);
  std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
    (__int64)v17,
    v8,
    (__int64)&v13);
  v9 = v18 + v19[2] + *(_QWORD *)(a2 + 8) + (v18 != 0 ? 8LL : 4LL);
  v10 = Src[2];
  if ( v10 <= v9 && Src[3] != v9 )
  {
    if ( Src[3] >= v9 )
    {
      if ( v9 <= 0xF && Src[3] > 0xFuLL )
        std::string::_Become_small((void **)Src);
    }
    else
    {
      std::string::_Reallocate_grow_by<_lambda_9013ee9e23efe4882b67eff5b0ecf103_,>((void **)Src, v9 - v10);
      Src[2] = v10;
    }
  }
  std::string::append(Src);
  std::string::append(Src);
  std::string::append(Src);
  if ( v18 )
  {
    std::string::append(Src);
    std::string::append(Src);
  }
  LOBYTE(v11) = 34;
  std::string::push_back(Src, v11);
  std::string::_Tidy_deallocate(v17);
  std::string::_Tidy_deallocate(v19);
  return Src;
}
