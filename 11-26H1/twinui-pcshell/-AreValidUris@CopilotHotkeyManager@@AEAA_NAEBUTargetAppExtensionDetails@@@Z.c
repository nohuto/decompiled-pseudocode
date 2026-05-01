/*
 * XREFs of ?AreValidUris@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x180623758
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806344E8 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 */

bool __fastcall CopilotHotkeyManager::AreValidUris(
        CopilotHotkeyManager *this,
        const struct TargetAppExtensionDetails *a2)
{
  const wchar_t *v2; // r8
  char *v4; // rcx
  __int64 v5; // r9
  size_t v6; // rdx
  CopilotHotkeyManager *v7; // rcx

  v2 = (const wchar_t *)((char *)a2 + 144);
  v4 = (char *)a2 + 104;
  v5 = *((_QWORD *)a2 + 20);
  if ( *((_QWORD *)a2 + 21) > 7uLL )
    v2 = *(const wchar_t **)v2;
  v6 = *((_QWORD *)a2 + 15);
  if ( *((_QWORD *)v4 + 3) > 7uLL )
    v4 = *(char **)v4;
  return !std::_Traits_equal<std::char_traits<unsigned short>>((const wchar_t *)v4, v6, v2, v5)
      && *((_QWORD *)a2 + 15)
      && *((_QWORD *)a2 + 20)
      && CopilotHotkeyManager::SchemaNameAreRegisteredProtocol(v7, a2);
}
