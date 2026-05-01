/*
 * XREFs of ??$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@Z @ 0x1805C5D20
 * Callers:
 *     ??$?RV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEA_N@1@V31@V31@V?$nvp@AEAJ@1@V21@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x1805C395C (--$-RV-$nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tso.c)
 * Callees:
 *     ?value@?$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@std@@QEGAAAEAW4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@XZ @ 0x180201AC4 (-value@-$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@w.c)
 *     ??$?RV?$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@@Z @ 0x1803257C8 (--$-RV-$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$?RV?$nvp@AEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@1@@Z @ 0x1805C3A54 (--$-RV-$nvp@AEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@@input_archive@.c)
 */

__int64 __fastcall tson::load_nothrow<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  const char *v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  char *v8; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  v6 = "has_value";
  v7 = 9;
  v8 = &v10;
  result = (__int64)tson::input_archive::operator()<tson::nvp<bool &>>((__int64 *)a1, (__int64)&v6);
  *(_BYTE *)(a2 + 4) = 0;
  if ( v10 )
  {
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 4) = 1;
    try
    {
      v5 = std::optional<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::value(a2);
      v6 = "value";
      v7 = 5;
      v8 = (char *)v5;
      result = tson::input_archive::operator()<tson::nvp<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType &>>(
                 a1,
                 (__int64)&v6);
    }
    catch ( ... )
    {
      result = a1;
      if ( *(int *)(a1 + 8) >= 0 )
        *(_DWORD *)(a1 + 8) = -2147024882;
    }
  }
  return result;
}
