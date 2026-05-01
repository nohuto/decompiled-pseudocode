/*
 * XREFs of ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x180211A58
 * Callers:
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x1806349D4 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x180636294 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

bool __fastcall std::operator!=<unsigned short>(const wchar_t *a1, const wchar_t *a2)
{
  __int64 v2; // r9
  size_t v3; // rax

  v2 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    a2 = *(const wchar_t **)a2;
  v3 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(const wchar_t **)a1;
  return !std::_Traits_equal<std::char_traits<unsigned short>>(a1, v3, a2, v2);
}
