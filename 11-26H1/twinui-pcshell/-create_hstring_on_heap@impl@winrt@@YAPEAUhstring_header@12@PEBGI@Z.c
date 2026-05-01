/*
 * XREFs of ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180032218
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18002C7D4 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18002CAA8 (--4hstring@winrt@@QEAAAEAU01@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x18002D174 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x1800A479C (-IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180201190 (-GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::_dynamic_initializer_for__c_snapWindowId__ @ 0x18020C3D0 (winrt--Windows--Internal--Shell--implementation--_dynamic_initializer_for__c_snapWindowId__.c)
 *     _dynamic_initializer_for__eduPackageFamilyName__ @ 0x18020D4F0 (_dynamic_initializer_for__eduPackageFamilyName__.c)
 *     _dynamic_initializer_for__c_remoteSystemAvailabilityPath__ @ 0x18020F720 (_dynamic_initializer_for__c_remoteSystemAvailabilityPath__.c)
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800306AC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     memcpy_s_3 @ 0x1802D97A0 (memcpy_s_3.c)
 */

struct winrt::impl::hstring_header *__fastcall winrt::impl::create_hstring_on_heap(winrt::impl *this, winrt::impl *a2)
{
  unsigned int v2; // edi
  struct winrt::impl::shared_hstring_header *v4; // rbx

  v2 = (unsigned int)a2;
  if ( !(_DWORD)a2 )
    return 0LL;
  v4 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)(unsigned int)a2);
  memcpy_s_3((char *)v4 + 28, 2LL * v2, this, 2LL * v2);
  return v4;
}
