/*
 * XREFs of ??$process@V?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@1@@Z @ 0x1805FCB88
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805FCBFC (--$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@ts.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180331D14 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<enum _tip_CopilotHardwareKeyInvokedTest::reason>>(
        __int64 a1,
        __int64 a2)
{
  char v2; // r8
  int v3; // ebx
  char result; // al
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a2 + 8);
  v3 = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v7 = 0;
  result = tson::input_archive::search((tson::input_archive *)a1);
  if ( result )
  {
    tson::input_archive::consume_expected_marker((_DWORD *)a1, 18, -2147023267);
    result = tson::read_buffer::consume_n(*(tson::read_buffer **)a1, &v7, 4uLL);
    v3 = v7;
  }
  *(_DWORD *)(a2 + 12) = v3;
  return result;
}
