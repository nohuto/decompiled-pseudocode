/*
 * XREFs of ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x18005BD20
 * Callers:
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x18005E1C0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180562208 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805CB05C (_anonymous_namespace_--CreateTemporaryFile.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 */

_QWORD *__fastcall std::filesystem::path::path(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v4 = -1LL;
  *(_QWORD *)&v6 = *a2;
  do
    ++v4;
  while ( *(_WORD *)(v3 + 2 * v4) );
  *((_QWORD *)&v6 + 1) = v4;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(a1, &v6);
  return a1;
}
