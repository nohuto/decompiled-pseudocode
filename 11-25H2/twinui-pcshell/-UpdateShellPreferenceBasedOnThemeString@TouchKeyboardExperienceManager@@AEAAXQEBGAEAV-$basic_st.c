/*
 * XREFs of ?UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801F0F54
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C0F18 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C40C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x18014AD88 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1801855B8 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18023A6FC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferenceBasedOnThemeString(
        __int64 a1,
        WCHAR *a2,
        void **a3)
{
  PVOID *pvData; // rax
  __int64 v7; // r8
  void **v8; // rax
  unsigned int v9; // r8d
  KeyboardHosting::TabTipAdapter *v10; // rdi
  HSTRING Reserved1; // rbx
  unsigned int v12; // r8d
  const WCHAR *v13; // rax
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  DWORD pcbData; // [rsp+40h] [rbp-69h] BYREF
  const WCHAR *v17; // [rsp+48h] [rbp-61h] BYREF
  PVOID v18[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v19; // [rsp+60h] [rbp-49h]
  unsigned __int64 v20; // [rsp+68h] [rbp-41h]
  void *v21[4]; // [rsp+70h] [rbp-39h] BYREF
  HSTRING_HEADER v22; // [rsp+90h] [rbp-19h] BYREF
  HSTRING_HEADER v23; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  pcbData = 0;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  v20 = 7LL;
  LOWORD(v18[0]) = 0;
  if ( RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", a2, 2u, 0LL, 0LL, &pcbData) || !pcbData )
    goto LABEL_9;
  std::wstring::resize((wchar_t *)v18, (unsigned __int64)pcbData >> 1);
  pvData = v18;
  if ( v20 > 7 )
    pvData = (PVOID *)v18[0];
  if ( RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", a2, 2u, 0LL, pvData, &pcbData) )
  {
LABEL_9:
    if ( !a3[2] )
      goto LABEL_18;
    std::wstring::operator=(a3, &LocaleName);
  }
  else
  {
    std::wstring::resize((wchar_t *)v18, (unsigned __int64)pcbData >> 1);
    if ( !v19 || !(unsigned int)std::wstring::compare(v18, a3) )
      goto LABEL_18;
    std::wstring::operator=((char *)a3, (char *)v18, v7);
  }
  v8 = (void **)std::wstring::wstring((char **)&v22, a2);
  std::operator+<unsigned short>((__int64)v21, (char *)L"KeyboardTheme_", v8);
  std::wstring::_Tidy_deallocate(&v22.Reserved.Reserved1);
  v10 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
  if ( (unsigned __int64)a3[3] > 7 )
    a3 = (void **)*a3;
  v17 = (const WCHAR *)a3;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v17, v9)[1].Reserved.Reserved1;
  v13 = (const WCHAR *)v21;
  if ( v21[3] > (void *)7 )
    v13 = (const WCHAR *)v21[0];
  v17 = v13;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v17, v12);
  v15 = KeyboardHosting::TabTipAdapter::SetShellPreference(v10, (HSTRING)v14[1].Reserved.Reserved1, Reserved1);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1284,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
  std::wstring::_Tidy_deallocate(v21);
LABEL_18:
  std::wstring::_Tidy_deallocate(v18);
}
