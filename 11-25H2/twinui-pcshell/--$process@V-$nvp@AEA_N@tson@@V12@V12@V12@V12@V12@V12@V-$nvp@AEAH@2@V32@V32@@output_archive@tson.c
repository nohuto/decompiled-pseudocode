/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAH@2@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000$$QEAV?$nvp@AEAH@1@11@Z @ 0x1805CE3B4
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805CEA44 (--$serialize@Voutput_archive@tson@@@_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@QEAAXAEAVo.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1800DFF74 (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<int &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11)
{
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a4);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a5);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a6);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a7);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a8);
  v14 = *a9;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a9 + 8);
  *(_QWORD *)a1 = v14;
  tson::output_archive::operator()<int &>(a1, (int *)a9[2]);
  v15 = *a10;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a10 + 8);
  *(_QWORD *)a1 = v15;
  tson::output_archive::operator()<int &>(a1, (int *)a10[2]);
  v16 = *a11;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a11 + 8);
  *(_QWORD *)a1 = v16;
  return tson::output_archive::operator()<int &>(a1, (int *)a11[2]);
}
