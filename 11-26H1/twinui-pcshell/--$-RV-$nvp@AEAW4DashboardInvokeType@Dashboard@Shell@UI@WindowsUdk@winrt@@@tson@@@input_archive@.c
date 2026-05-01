/*
 * XREFs of ??$?RV?$nvp@AEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@1@@Z @ 0x1805C3A54
 * Callers:
 *     ??$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@Z @ 0x1805C5D20 (--$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_a.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180330CD4 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::nvp<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType &>>(
        __int64 a1,
        __int64 a2)
{
  char v2; // r8
  int v3; // edi
  _DWORD *v5; // rsi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a2 + 8);
  v3 = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v5 = *(_DWORD **)(a2 + 16);
  v7 = 0;
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    tson::input_archive::consume_expected_marker((_DWORD *)a1, 18, -2147023267);
    tson::read_buffer::consume_n(*(tson::read_buffer **)a1, &v7, 4uLL);
    v3 = v7;
  }
  *v5 = v3;
  return a1;
}
