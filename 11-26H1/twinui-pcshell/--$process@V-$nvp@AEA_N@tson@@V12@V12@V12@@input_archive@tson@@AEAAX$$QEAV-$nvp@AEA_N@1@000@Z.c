/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000@Z @ 0x1803A9B1C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000@Z @ 0x1803A9BBC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@0000.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@0000@Z @ 0x18045830C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAI@2@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nv.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAW4SwitchType@@@2@V?$nvp@AEA_N@2@V42@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4SwitchType@@@1@$$QEAV?$nvp@AEA_N@1@222@Z @ 0x180550690 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@V-$nvp.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  char v5; // r10
  bool *v9; // rdi
  __int64 v10; // rdx
  char *v11; // rax
  char v12; // cl
  bool v13; // al

  v5 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v5;
  v9 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v13 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker((_DWORD *)a1, 10, -2147023267);
  v10 = *(_QWORD *)a1;
  v11 = *(char **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v11 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v12 = *v11;
    *(_QWORD *)(v10 + 8) = v11 + 1;
    v13 = v12 != 0;
LABEL_6:
    *v9 = v13;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(a1, a3, a4, a5);
  }
  *(_BYTE *)(v10 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(a1, a3, a4, a5);
}
