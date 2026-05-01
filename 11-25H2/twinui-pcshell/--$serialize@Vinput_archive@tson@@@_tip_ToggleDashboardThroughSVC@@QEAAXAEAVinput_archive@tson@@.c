/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805A5510
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805B7950 (-deserialize@-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@EEAAXAEAVinput_arc.c)
 * Callees:
 *     ??$?RV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEA_N@1@V31@V31@V?$nvp@AEAJ@1@V21@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18059F818 (--$-RV-$nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tso.c)
 *     ??$make_nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@YA?AV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@0@PEBDAEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@_K@Z @ 0x1805A1DD0 (--$make_nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tso.c)
 */

tson::input_archive *__fastcall _tip_ToggleDashboardThroughSVC::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  tson::input_archive *v3; // r10
  __int64 v5; // [rsp+88h] [rbp-11h] BYREF
  char v6; // [rsp+90h] [rbp-9h]
  __int64 v7; // [rsp+98h] [rbp-1h]
  const char *v8; // [rsp+A0h] [rbp+7h] BYREF
  char v9; // [rsp+A8h] [rbp+Fh]
  __int64 v10; // [rsp+B0h] [rbp+17h]
  const char *v11; // [rsp+B8h] [rbp+1Fh] BYREF
  char v12; // [rsp+C0h] [rbp+27h]
  __int64 v13; // [rsp+C8h] [rbp+2Fh]
  _BYTE v14[32]; // [rsp+D0h] [rbp+37h] BYREF

  v5 = (__int64)"isDashboardExtensionCreationSuccessful";
  v7 = a1 + 57;
  v8 = "isRelevantExtensionError";
  v10 = a1 + 56;
  v11 = "argContexts";
  v13 = a1 + 24;
  v6 = 38;
  v9 = 24;
  v12 = 11;
  v2 = tson::make_nvp<std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType> &>(
         (__int64)v14,
         a2,
         a1 + 16);
  return tson::input_archive::operator()<tson::nvp<std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType> &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
           v3,
           v2,
           (__int64 *)&v11,
           (__int64)&v8,
           (__int64)&v5);
}
