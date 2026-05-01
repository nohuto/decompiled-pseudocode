/*
 * XREFs of ?IsInputAppEnabled@KeyboardHosting@@YA_NXZ @ 0x1804813A0
 * Callers:
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180463F20 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     _lambda_945e3f99e324f0975fc3b8cf1a6859ea_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x1804644EC (_lambda_945e3f99e324f0975fc3b8cf1a6859ea_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x18046F438 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 *     ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1804840A0 (-IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 * Callees:
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802C6A08 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 */

bool __fastcall KeyboardHosting::IsInputAppEnabled(KeyboardHosting *this)
{
  __int16 v1; // bx
  __int16 v3; // [rsp+50h] [rbp+8h]
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  if ( !byte_1808DCDCD )
  {
    HIBYTE(v3) = 0;
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            L"DisableNewKeyboardExperience",
            0x10u,
            0LL,
            &pvData,
            &pcbData) )
    {
      if ( pvData == 1 )
      {
        v3 = 256;
      }
      else if ( !pvData )
      {
        v3 = 257;
      }
    }
    v1 = v3;
    if ( !HIBYTE(v3) )
    {
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
        v1 = 256;
      }
    }
    if ( !HIBYTE(v1) )
      v1 = 257;
    unk_1808DCDCC = v1;
  }
  return *(_BYTE *)std::optional<bool>::value((__int64)&unk_1808DCDCC);
}
