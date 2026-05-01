/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@000000@Z @ 0x18045AC34
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18045AFD0 (--$serialize@Vinput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingT.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000@Z @ 0x18032A478 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1804577F8 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  char v9; // r10
  bool *v13; // rdi
  __int64 v14; // rdx
  char *v15; // rax
  char v16; // cl
  bool v17; // al
  __int64 v18; // rax

  v9 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v9;
  v13 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v17 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker((_DWORD *)a1, 10, -2147023267);
  v14 = *(_QWORD *)a1;
  v15 = *(char **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v15 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v16 = *v15;
    *(_QWORD *)(v14 + 8) = v15 + 1;
    v17 = v16 != 0;
LABEL_6:
    *v13 = v17;
    goto LABEL_7;
  }
  *(_BYTE *)(v14 + 24) = 1;
LABEL_7:
  v18 = *a3;
  *(_BYTE *)(a1 + 24) = *((_BYTE *)a3 + 8);
  *(_QWORD *)(a1 + 16) = v18;
  tson::input_archive::operator()<int &>((tson::input_archive *)a1, (_DWORD *)a3[2]);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a1,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
