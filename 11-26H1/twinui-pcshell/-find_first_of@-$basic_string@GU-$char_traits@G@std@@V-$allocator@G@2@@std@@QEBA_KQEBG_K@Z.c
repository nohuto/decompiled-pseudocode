/*
 * XREFs of ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180636FC8
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x18063391C (-OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z.c)
 * Callees:
 *     ??$_Traits_find_first_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x18061E6B4 (--$_Traits_find_first_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 */

unsigned __int64 __fastcall std::wstring::find_first_of(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx

  v4 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(unsigned __int16 **)a1;
  return std::_Traits_find_first_of<std::char_traits<unsigned short>>(a1, v4, a3, a4, 2uLL);
}
