/*
 * XREFs of ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x18005A688
 * Callers:
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x18005E1C0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180562208 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 */

__int64 __fastcall std::filesystem::path::path(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2[2];
  if ( a2[3] > 7uLL )
    a2 = (_QWORD *)*a2;
  v5[0] = a2;
  v5[1] = v3;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(a1, v5);
  return a1;
}
