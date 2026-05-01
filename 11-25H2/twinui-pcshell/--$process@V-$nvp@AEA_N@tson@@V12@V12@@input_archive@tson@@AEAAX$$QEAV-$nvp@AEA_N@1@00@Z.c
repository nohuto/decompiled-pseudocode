/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00@Z @ 0x180207410
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000@Z @ 0x18032A330 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@000@Z.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_TabTearOutEventTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180582734 (--$serialize@Vinput_archive@tson@@@_tip_TabTearOutEventTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4keyPressType@@@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4keyPressType@@@1@000@Z @ 0x1805FCAA0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAW4keyPressType@@@2@V12@V12@V12@@input_archive@tson@@AEAA.c)
 * Callees:
 *     ??$process@AEA_N@input_archive@tson@@AEAAXAEA_N@Z @ 0x18018523C (--$process@AEA_N@input_archive@tson@@AEAAXAEA_N@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  char v4; // r10
  char v8; // dl
  __int64 v9; // rax

  v4 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v4;
  tson::input_archive::process<bool &>((tson::input_archive *)a1, *(_BYTE **)(a2 + 16));
  v8 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 24) = v8;
  tson::input_archive::process<bool &>((tson::input_archive *)a1, *(_BYTE **)(a3 + 16));
  v9 = *a4;
  *(_BYTE *)(a1 + 24) = *((_BYTE *)a4 + 8);
  *(_QWORD *)(a1 + 16) = v9;
  return tson::input_archive::process<bool &>((tson::input_archive *)a1, (_BYTE *)a4[2]);
}
