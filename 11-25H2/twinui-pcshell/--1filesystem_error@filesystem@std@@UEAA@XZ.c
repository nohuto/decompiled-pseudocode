/*
 * XREFs of ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x180314610
 * Callers:
 *     ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x180314A90 (--_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1803144EC (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall std::filesystem::filesystem_error::~filesystem_error(void **this)
{
  std::string::~string((__int64)(this + 13));
  std::wstring::_Tidy_deallocate(this + 9);
  std::wstring::_Tidy_deallocate(this + 5);
  *this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
