/*
 * XREFs of ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x18031079C
 * Callers:
 *     ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x180310C00 (--_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180315204 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::filesystem::filesystem_error::~filesystem_error(std::filesystem::filesystem_error *this)
{
  std::string::_Tidy_deallocate((char *)this + 104);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 9);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 5);
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
