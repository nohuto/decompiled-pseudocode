/*
 * XREFs of ?_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z @ 0x180032624
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180030780 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x18003250C (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ?_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z @ 0x1800325F4 (-_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z.c)
 *     ?has_extension@path@filesystem@std@@QEBA_NXZ @ 0x18003263C (-has_extension@path@filesystem@std@@QEBA_NXZ.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1800327E0 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180032908 (-compare@path@filesystem@std@@QEBAHV-$basic_string_view@GU-$char_traits@G@std@@@3@@Z.c)
 *     ?_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z @ 0x1800331B8 (-_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ?is_absolute@path@filesystem@std@@QEBA_NXZ @ 0x18013CFE0 (-is_absolute@path@filesystem@std@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::filesystem::_Is_drive_prefix(std::filesystem *this, const unsigned __int16 *const a2)
{
  return (*(_DWORD *)this & 0xFFFFFFDF) - 3801153 < 0x1A;
}
