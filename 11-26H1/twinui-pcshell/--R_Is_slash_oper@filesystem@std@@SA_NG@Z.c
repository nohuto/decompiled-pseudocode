/*
 * XREFs of ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180030780 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x18003250C (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ?has_extension@path@filesystem@std@@QEBA_NXZ @ 0x18003263C (-has_extension@path@filesystem@std@@QEBA_NXZ.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1800327E0 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180032908 (-compare@path@filesystem@std@@QEBAHV-$basic_string_view@GU-$char_traits@G@std@@@3@@Z.c)
 *     ?_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z @ 0x1800331B8 (-_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800C58A8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18013A1D8 (-parent_path@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?is_absolute@path@filesystem@std@@QEBA_NXZ @ 0x18013CFE0 (-is_absolute@path@filesystem@std@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::filesystem::_Is_slash_oper::operator()(__int16 a1)
{
  return a1 == 92 || a1 == 47;
}
