/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x1802C7698
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18045B4E4 (--$serialize@Voutput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingT.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<int &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v5; // dl

  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  v5 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 8) = v5;
  return tson::output_archive::operator()<int &>(a1, *(int **)(a3 + 16));
}
