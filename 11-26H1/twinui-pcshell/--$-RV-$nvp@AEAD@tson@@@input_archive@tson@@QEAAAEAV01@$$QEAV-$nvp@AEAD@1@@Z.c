/*
 * XREFs of ??$?RV?$nvp@AEAD@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x180325440
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180331D58 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

__int64 *__fastcall tson::input_archive::operator()<tson::nvp<char &>>(__int64 *a1, __int64 a2)
{
  char v2; // r8
  _BYTE *v4; // rdi
  __int64 v5; // rdx
  char *v6; // rax
  char v7; // cl

  v2 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v2;
  v4 = *(_BYTE **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    tson::input_archive::consume_expected_marker(a1, 11, -2147023267);
    v5 = *a1;
    v6 = *(char **)(*a1 + 8);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(*a1 + 16) )
    {
      *(_BYTE *)(v5 + 24) = 1;
    }
    else
    {
      v7 = *v6;
      *(_QWORD *)(v5 + 8) = v6 + 1;
      *v4 = v7;
    }
  }
  else
  {
    *v4 = 0;
  }
  return a1;
}
