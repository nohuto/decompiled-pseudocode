/*
 * XREFs of ??$?RAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@input_archive@tson@@QEAAAEAV01@AEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18059F6AC
 * Callers:
 *     ??$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@Z @ 0x1805A1A40 (--$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_a.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180331D14 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType &>(
        tson::input_archive *a1,
        _DWORD *a2)
{
  int v2; // edi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v6 = 0;
  if ( tson::input_archive::search(a1) )
  {
    tson::input_archive::consume_expected_marker(a1, 18, -2147023267);
    tson::read_buffer::consume_n(*(tson::read_buffer **)a1, &v6, 4uLL);
    v2 = v6;
  }
  *a2 = v2;
  return a1;
}
