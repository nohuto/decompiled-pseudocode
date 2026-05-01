/*
 * XREFs of ??1TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18045CF44
 * Callers:
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18045C948 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$33 @ 0x1806C6EFB (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$33.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$34 @ 0x1806C6F14 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$34.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::~TouchKeyboardThemeInfo(void **this)
{
  std::wstring::_Tidy_deallocate(this + 60);
  std::wstring::_Tidy_deallocate(this + 56);
  std::wstring::_Tidy_deallocate(this + 52);
  std::wstring::_Tidy_deallocate(this + 48);
  std::wstring::_Tidy_deallocate(this + 44);
  std::wstring::_Tidy_deallocate(this + 40);
  std::wstring::_Tidy_deallocate(this + 36);
  std::wstring::_Tidy_deallocate(this + 32);
  std::wstring::_Tidy_deallocate(this + 28);
  std::wstring::_Tidy_deallocate(this + 24);
  std::wstring::_Tidy_deallocate(this + 20);
  std::wstring::_Tidy_deallocate(this + 16);
  std::wstring::_Tidy_deallocate(this + 12);
  std::wstring::_Tidy_deallocate(this + 8);
  std::wstring::_Tidy_deallocate(this + 4);
  std::wstring::_Tidy_deallocate(this);
}
