/*
 * XREFs of ??$?RV?$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x180325540
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180331D58 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x1802C1E90 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::nvp<unsigned char &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  _BYTE *v4; // rdi

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v4 = *(_BYTE **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    tson::input_archive::consume_expected_marker((_DWORD *)a1, 12, -2147023267);
    tson::read_buffer::consume<unsigned char>(*(_QWORD *)a1, v4);
  }
  else
  {
    *v4 = 0;
  }
  return a1;
}
