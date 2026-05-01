/*
 * XREFs of ??$process@AEA_N@input_archive@tson@@AEAAXAEA_N@Z @ 0x18018523C
 * Callers:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00@Z @ 0x1801851C0 (--$-RV-$nvp@AEA_N@tson@@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@00@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x1801FB3FC (--$process@V-$nvp@AEA_N@tson@@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@0@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00@Z @ 0x180207410 (--$process@V-$nvp@AEA_N@tson@@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@00@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

char __fastcall tson::input_archive::process<bool &>(tson::input_archive *a1, _BYTE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v6; // rax
  char v7; // cl

  if ( tson::input_archive::search(a1) )
  {
    LOBYTE(v4) = 10;
    tson::input_archive::consume_expected_marker(a1, v4, 2147944029LL);
    v5 = *(_QWORD *)a1;
    v6 = *(char **)(*(_QWORD *)a1 + 8LL);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    {
      *(_BYTE *)(v5 + 24) = 1;
      return (char)v6;
    }
    v7 = *v6;
    *(_QWORD *)(v5 + 8) = v6 + 1;
    LOBYTE(v6) = v7 != 0;
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  *a2 = (_BYTE)v6;
  return (char)v6;
}
