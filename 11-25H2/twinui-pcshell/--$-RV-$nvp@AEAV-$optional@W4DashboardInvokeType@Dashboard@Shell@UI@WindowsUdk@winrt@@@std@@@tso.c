/*
 * XREFs of ??$?RV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEA_N@1@V31@V31@V?$nvp@AEAJ@1@V21@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18059F818
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805A5510 (--$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180185064 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1801852A0 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x180185568 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@Z @ 0x1805A1A40 (--$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_a.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805A4258 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<tson::nvp<std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType> &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  char v5; // r10
  __int64 v9; // rbx
  __int64 v10; // rax

  v5 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v5;
  v9 = *(_QWORD *)(a2 + 16);
  tson::input_archive::startNode(this);
  tson::load_nothrow<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>(this, v9);
  tson::input_archive::finishNode(this);
  v10 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v10;
  tson::load_nothrow(this, (_WORD *)a3[2]);
  tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
    this,
    a4,
    a5);
  return this;
}
