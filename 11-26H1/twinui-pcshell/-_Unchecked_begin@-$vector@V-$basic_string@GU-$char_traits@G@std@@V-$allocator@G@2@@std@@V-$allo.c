/*
 * XREFs of ?_Unchecked_begin@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180318D40
 * Callers:
 *     ?get_ActiveExperience@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAPEAUICustomShellExperience@2345@@Z @ 0x180318D60 (-get_ActiveExperience@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJP.c)
 * Callees:
 *     <none>
 */

__int64 std::vector<std::wstring>::_Unchecked_begin()
{
  return Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds;
}
