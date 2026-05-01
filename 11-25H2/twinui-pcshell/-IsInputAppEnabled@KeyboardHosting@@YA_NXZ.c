/*
 * XREFs of ?IsInputAppEnabled@KeyboardHosting@@YA_NXZ @ 0x180472720
 * Callers:
 *     _lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x1804578C0 (_lambda_c20ddfa74c13e3309a3b622ad13c0825_--operator()_winrt--WindowsUdk--UI--Shell-_ea_1804578C0.c)
 *     _lambda_125ce7e834e11fd92811414f264430c1_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x18045809C (_lambda_125ce7e834e11fd92811414f264430c1_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1804634F4 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CF7AC (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 */

bool __fastcall KeyboardHosting::IsInputAppEnabled(KeyboardHosting *this)
{
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  if ( !byte_18089C719 )
  {
    pvData = 0;
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
           L"DisableNewKeyboardExperience",
           0x10u,
           0LL,
           &pvData,
           &pcbData) )
    {
      goto LABEL_5;
    }
    if ( pvData == 1 )
    {
LABEL_7:
      LOWORD(pvData) = 256;
LABEL_9:
      unk_18089C718 = pvData;
      return *(_BYTE *)std::optional<bool>::value((__int64)&unk_18089C718);
    }
    if ( pvData )
    {
LABEL_5:
      pcbData = 4;
      if ( !RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
              L"DisableNewKeyboardExperience",
              0x10u,
              0LL,
              &pvData,
              &pcbData)
        && pvData == 1 )
      {
        goto LABEL_7;
      }
    }
    LOWORD(pvData) = 257;
    goto LABEL_9;
  }
  return *(_BYTE *)std::optional<bool>::value((__int64)&unk_18089C718);
}
