/*
 * XREFs of ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801E2D2C
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800589A0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x18005E1C0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800B0FCC (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x180299048 (-GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180562208 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x1801E2DCC (-_Get_any_status@filesystem@std@@YA-AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_fla.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18031403C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18031428C (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall std::filesystem::exists(std::filesystem *this, const struct std::filesystem::path *a2)
{
  __int64 any_status; // rax
  int v4; // ecx
  bool result; // al
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  void ***v7; // [rsp+28h] [rbp-D0h]
  __int64 v8; // [rsp+30h] [rbp-C8h]
  _BYTE v9[32]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE pExceptionObject[152]; // [rsp+60h] [rbp-98h] BYREF

  any_status = std::filesystem::_Get_any_status(&v6, this);
  v8 = *(_QWORD *)any_status;
  v4 = *(_DWORD *)(any_status + 8);
  v6 = v4;
  v7 = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  result = 0;
  if ( (_DWORD)v8 )
    return (_DWORD)v8 != 1;
  if ( v4 )
  {
    std::string::string(v9, "exists");
    std::filesystem::filesystem_error::filesystem_error(pExceptionObject, v9, this, &v6);
    throw (std::filesystem::filesystem_error *)pExceptionObject;
  }
  return result;
}
