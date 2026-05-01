/*
 * XREFs of ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180586E50
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ??Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ @ 0x180225990 (--Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180310130 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180310594 (--0system_error@std@@QEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn std::filesystem::_Throw_fs_error(__int64 a1, int a2)
{
  char *v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-C8h] BYREF
  __int64 *v4[4]; // [rsp+30h] [rbp-B8h] BYREF
  void **pExceptionObject; // [rsp+50h] [rbp-98h] BYREF
  char *v6; // [rsp+58h] [rbp-90h]
  _BYTE v7[32]; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v8[32]; // [rsp+98h] [rbp-50h] BYREF
  _QWORD v9[6]; // [rsp+B8h] [rbp-30h] BYREF

  LODWORD(v3) = a2;
  *((_QWORD *)&v3 + 1) = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  std::string::string(v4, "directory_iterator::operator++");
  std::system_error::system_error(&pExceptionObject, &v3, v4);
  pExceptionObject = &std::filesystem::filesystem_error::`vftable';
  std::wstring::wstring((__int64)v7);
  std::wstring::wstring((__int64)v8);
  v2 = "Unknown exception";
  if ( v6 )
    v2 = v6;
  std::string::string(v9, v2);
  throw (std::filesystem::filesystem_error *)&pExceptionObject;
}
