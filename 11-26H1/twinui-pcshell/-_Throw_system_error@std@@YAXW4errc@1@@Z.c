/*
 * XREFs of ?_Throw_system_error@std@@YAXW4errc@1@@Z @ 0x180315198
 * Callers:
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x18030F2F4 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18031050C (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 */

void __noreturn std::_Throw_system_error()
{
  __int128 v0; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+30h] [rbp-38h] BYREF

  LODWORD(v0) = 22;
  *((_QWORD *)&v0 + 1) = &`std::_Immortalize_memcpy_image<std::_Generic_error_category>'::`2'::_Static;
  std::system_error::system_error((__int64)pExceptionObject, &v0);
  throw (std::system_error *)pExceptionObject;
}
