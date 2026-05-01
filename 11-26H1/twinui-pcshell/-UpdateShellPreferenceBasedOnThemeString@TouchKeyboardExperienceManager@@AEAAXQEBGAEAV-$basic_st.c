/*
 * XREFs of ?UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801EB674
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024B8F8 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1801080A8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x180177520 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18022C708 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TouchKeyboardExperienceManager::UpdateShellPreferenceBasedOnThemeString(
        __int64 a1,
        const WCHAR *a2,
        char *a3)
{
  LPCWSTR v6; // rdx
  PVOID *pvData; // rax
  __int64 v8; // r8
  void **v9; // rax
  unsigned int v10; // r8d
  KeyboardHosting::TabTipAdapter *v11; // rdi
  HSTRING Reserved1; // rbx
  unsigned int v13; // r8d
  const WCHAR *v14; // rax
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  DWORD pcbData; // [rsp+40h] [rbp-59h] BYREF
  const WCHAR *v19; // [rsp+48h] [rbp-51h] BYREF
  PVOID v20[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v21[4]; // [rsp+70h] [rbp-29h] BYREF
  HSTRING_HEADER v22; // [rsp+90h] [rbp-9h] BYREF
  HSTRING_HEADER v23; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  pcbData = 0;
  std::wstring::wstring((__int64)v20);
  if ( RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v6, 2u, 0LL, 0LL, &pcbData) || !pcbData )
    goto LABEL_9;
  std::wstring::resize((__int64 *)v20, (unsigned __int64)pcbData >> 1);
  pvData = v20;
  if ( v20[3] > (PVOID)7 )
    pvData = (PVOID *)v20[0];
  if ( RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", a2, 2u, 0LL, pvData, &pcbData) )
  {
LABEL_9:
    if ( !*((_QWORD *)a3 + 2) )
      return std::wstring::_Tidy_deallocate(v20);
    std::wstring::operator=(a3, (void *)&::pvData);
  }
  else
  {
    std::wstring::resize((__int64 *)v20, (unsigned __int64)pcbData >> 1);
    if ( !v20[2] || !(unsigned int)std::wstring::compare(v20, a3) )
      return std::wstring::_Tidy_deallocate(v20);
    std::wstring::operator=(a3, (char *)v20, v8);
  }
  v9 = (void **)std::wstring::wstring((__int64)&v22, (__int64)a2);
  std::operator+<unsigned short>((__int64)v21, L"KeyboardTheme_", v9);
  std::wstring::_Tidy_deallocate(&v22);
  v11 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
  if ( *((_QWORD *)a3 + 3) > 7uLL )
    a3 = *(char **)a3;
  v19 = (const WCHAR *)a3;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v19, v10)[1].Reserved.Reserved1;
  v14 = (const WCHAR *)v21;
  if ( v21[3] > 7uLL )
    v14 = (const WCHAR *)v21[0];
  v19 = v14;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v19, v13);
  v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v11, (HSTRING)v15[1].Reserved.Reserved1, Reserved1);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1248,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  std::wstring::_Tidy_deallocate(v21);
  return std::wstring::_Tidy_deallocate(v20);
}
