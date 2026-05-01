/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180290720
 * Callers:
 *     ?UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801F0EB0 (-UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180290428 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034F230 (-OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Win.c)
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068C860 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068CF00 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1801A950C (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x1801A9554 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall std::to_wstring(__int64 a1, signed int a2)
{
  _WORD *v3; // rdx
  _WORD v5[3]; // [rsp+5Ah] [rbp-1Eh] BYREF

  if ( a2 >= 0 )
  {
    v3 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v5, a2);
  }
  else
  {
    v3 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v5, -a2) - 1;
    *v3 = 45;
  }
  std::wstring::wstring(a1, (__int64)v3, (__int64)v5);
  return a1;
}
