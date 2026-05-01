/*
 * XREFs of ??$process@V?$nvp@AEA_J@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_J@1@@Z @ 0x180326DE8
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180331D58 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEA_J@1@000000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x180458608 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@V12@@input_ar.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180330CD4 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<__int64 &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  _QWORD *v4; // rdi
  bool result; // al

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v4 = *(_QWORD **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    tson::input_archive::consume_expected_marker((_DWORD *)a1, 19, -2147023267);
    return tson::read_buffer::consume_n(*(tson::read_buffer **)a1, v4, 8uLL);
  }
  else
  {
    result = 0;
    *v4 = 0LL;
  }
  return result;
}
