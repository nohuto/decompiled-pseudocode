/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C80E4
 * Callers:
 *     ??$?RV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEA_N@1@V31@V31@V?$nvp@AEAJ@1@V21@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x1805C395C (--$-RV-$nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tso.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardUsingHotkey@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805C963C (--$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardUsingHotkey@@QEAAXAEAVinput_archive@tson@.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v6; // r10
  bool *v8; // rdi
  __int64 v9; // rdx
  char *v10; // rax
  char v11; // cl
  bool v12; // al

  v6 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v6;
  v8 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v12 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v9 = *(_QWORD *)this;
  v10 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v10 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v11 = *v10;
    *(_QWORD *)(v9 + 8) = v10 + 1;
    v12 = v11 != 0;
LABEL_6:
    *v8 = v12;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
             this,
             a6);
  }
  *(_BYTE *)(v9 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
           this,
           a6);
}
