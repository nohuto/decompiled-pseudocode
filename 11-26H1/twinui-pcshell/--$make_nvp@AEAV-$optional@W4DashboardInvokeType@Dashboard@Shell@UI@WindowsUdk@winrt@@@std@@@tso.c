/*
 * XREFs of ??$make_nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@YA?AV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@0@PEBDAEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@_K@Z @ 0x1805C6110
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800E160C (--$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVoutput_archive@tson.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805C954C (--$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::make_nvp<std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType> &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 8) = 10;
  *(_QWORD *)a1 = "invokeType";
  result = a1;
  *(_QWORD *)(a1 + 16) = a3;
  return result;
}
