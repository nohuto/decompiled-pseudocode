/*
 * XREFs of ??$process@V?$nvp@AEAM@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAM@1@@Z @ 0x1805707BC
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180570AFC (--$serialize@Vinput_archive@tson@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180331D14 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<float &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  _DWORD *v4; // rdi
  char result; // al

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v4 = *(_DWORD **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    tson::input_archive::consume_expected_marker((_DWORD *)a1, 22, -2147023267);
    return tson::read_buffer::consume_n(*(tson::read_buffer **)a1, v4, 4uLL);
  }
  else
  {
    result = 0;
    *v4 = 0;
  }
  return result;
}
