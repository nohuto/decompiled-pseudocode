/*
 * XREFs of ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801D7210
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180030EA0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1801DF5B0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x1802915EC (-GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180586378 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x1801D72B8 (-_Get_any_status@filesystem@std@@YA-AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_fla.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180310130 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x1803103AC (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall std::filesystem::exists(std::filesystem *this, const struct std::filesystem::path *a2, __int64 a3)
{
  __int64 any_status; // rax
  int v5; // ecx
  bool result; // al
  int v7; // [rsp+20h] [rbp-D8h] BYREF
  void ***v8; // [rsp+28h] [rbp-D0h]
  __int64 v9; // [rsp+30h] [rbp-C8h]
  _BYTE v10[32]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE pExceptionObject[152]; // [rsp+60h] [rbp-98h] BYREF

  any_status = std::filesystem::_Get_any_status(&v7, this, a3);
  v9 = *(_QWORD *)any_status;
  v5 = *(_DWORD *)(any_status + 8);
  v7 = v5;
  v8 = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  result = 0;
  if ( (_DWORD)v9 )
    return (_DWORD)v9 != 1;
  if ( v5 )
  {
    std::string::string(v10, "exists");
    std::filesystem::filesystem_error::filesystem_error(pExceptionObject, v10, this, &v7);
    throw (std::filesystem::filesystem_error *)pExceptionObject;
  }
  return result;
}
