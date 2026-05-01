/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@K@Z @ 0x18046A0A0
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C0F18 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@Z @ 0x18014A314 (-UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@.c)
 *     ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x180625218 (-CreateFileMappingName@FileMappingHelpers@Util@@QEAA-AUhstring@winrt@@QEAUHWND__@@AEBV-$basic_st.c)
 * Callees:
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18018DFD4 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

char **__fastcall std::to_wstring(char **a1, unsigned int a2)
{
  _BYTE *v4; // r9
  _BYTE v6[6]; // [rsp+5Ah] [rbp-1Eh] BYREF

  v4 = v6;
  do
  {
    v4 -= 2;
    *(_WORD *)v4 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  std::wstring::wstring(a1, v4, v6);
  return a1;
}
