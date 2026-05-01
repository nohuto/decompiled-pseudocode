/*
 * XREFs of ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180318F20
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x18005C120 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800B0FCC (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x18029CFB0 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 *     ??0directory_iterator@filesystem@std@@QEAA@AEBVpath@12@@Z @ 0x1802C6FE4 (--0directory_iterator@filesystem@std@@QEAA@AEBVpath@12@@Z.c)
 *     ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x1805F34F8 (-last_write_time@filesystem@std@@YA-AV-$time_point@U_File_time_clock@filesystem@std@@V-$duration.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18031403C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18031428C (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::filesystem::_Throw_fs_error(_BYTE *a1, int a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE pExceptionObject[152]; // [rsp+50h] [rbp-98h] BYREF

  LODWORD(v4) = a2;
  *((_QWORD *)&v4 + 1) = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  std::string::string(v5, a1);
  std::filesystem::filesystem_error::filesystem_error((__int64)pExceptionObject, (__int64)v5, a3, &v4);
  throw (std::filesystem::filesystem_error *)pExceptionObject;
}
