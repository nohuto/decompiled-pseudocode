/*
 * XREFs of ??1TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ @ 0x180469260
 * Callers:
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x180468C54 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$33 @ 0x1806EEC1A (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$33.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$34 @ 0x1806EEC33 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$34.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::~TouchKeyboardThemeInfo(
        TouchKeyboardExperienceManager::TouchKeyboardThemeInfo *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 60);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 56);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 52);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 48);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 44);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 40);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 36);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 32);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 28);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 24);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 20);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 16);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 12);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 8);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 4);
  std::wstring::_Tidy_deallocate(this);
}
