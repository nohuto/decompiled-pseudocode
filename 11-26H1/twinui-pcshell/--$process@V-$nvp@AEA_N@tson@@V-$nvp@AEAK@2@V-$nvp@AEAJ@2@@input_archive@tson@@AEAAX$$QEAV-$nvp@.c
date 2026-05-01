/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1805E2280
 * Callers:
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1805E2034 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_1805E2034.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$?RAEAK@input_archive@tson@@QEAAAEAV01@AEAK@Z @ 0x1803253E8 (--$-RAEAK@input_archive@tson@@QEAAAEAV01@AEAK@Z.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<unsigned long &>,tson::nvp<long &>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  char v4; // r10
  bool *v8; // rsi
  __int64 v9; // rdx
  char *v10; // rax
  char v11; // cl
  bool v12; // al
  __int64 v13; // rax

  v4 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v4;
  v8 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v12 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker((_DWORD *)a1, 10, -2147023267);
  v9 = *(_QWORD *)a1;
  v10 = *(char **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v10 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v11 = *v10;
    *(_QWORD *)(v9 + 8) = v10 + 1;
    v12 = v11 != 0;
LABEL_6:
    *v8 = v12;
    goto LABEL_7;
  }
  *(_BYTE *)(v9 + 24) = 1;
LABEL_7:
  v13 = *a3;
  *(_BYTE *)(a1 + 24) = *((_BYTE *)a3 + 8);
  *(_QWORD *)(a1 + 16) = v13;
  tson::input_archive::operator()<unsigned long &>((tson::input_archive *)a1, (_DWORD *)a3[2]);
  return tson::input_archive::process<tson::nvp<long &>>(a1, a4);
}
