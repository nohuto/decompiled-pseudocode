/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000@Z @ 0x1803A9BBC
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@00000@Z @ 0x1803ABCB8 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAI@2@V-$nvp@AEAJ@2@V12@V12@V12@V12@V12@@input_archive@tso.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000@Z @ 0x18046667C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805F8D38 (--$serialize@Vinput_archive@tson@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEAV.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  char v6; // r10
  bool *v10; // rdi
  __int64 v11; // rdx
  char *v12; // rax
  char v13; // cl
  bool v14; // al

  v6 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v6;
  v10 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v14 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker((_DWORD *)a1, 10, -2147023267);
  v11 = *(_QWORD *)a1;
  v12 = *(char **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v12 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v13 = *v12;
    *(_QWORD *)(v11 + 8) = v12 + 1;
    v14 = v13 != 0;
LABEL_6:
    *v10 = v14;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             a1,
             a3,
             a4,
             a5,
             a6);
  }
  *(_BYTE *)(v11 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a1,
           a3,
           a4,
           a5,
           a6);
}
