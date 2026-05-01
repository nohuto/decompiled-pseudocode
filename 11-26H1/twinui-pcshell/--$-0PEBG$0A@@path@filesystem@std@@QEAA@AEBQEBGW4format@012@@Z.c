/*
 * XREFs of ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x1801F3B78
 * Callers:
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1801DF5B0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180586378 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805EEFFC (_anonymous_namespace_--CreateTemporaryFile.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 */

__int64 __fastcall std::filesystem::path::path(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  const void *v5; // rcx

  v3 = std::_WChar_traits<wchar_t>::length(*a2);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = v4;
  std::wstring::_Construct<1,unsigned short const *>((char **)a1, v5, v3);
  return a1;
}
