/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAJ@1@1110001$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x180457768
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAJ@1@1110001$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x180457490 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V-$nvp@A.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@1110001$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x180457A20 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V-$nvp@AEAI@2@V1.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21)
{
  char v21; // r10
  bool *v25; // rdi
  __int64 v26; // rdx
  char *v27; // rax
  char v28; // cl
  bool v29; // al

  v21 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v21;
  v25 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v29 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(a1, 10, -2147023267);
  v26 = *a1;
  v27 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v27 < *(_QWORD *)(*a1 + 16) )
  {
    v28 = *v27;
    *(_QWORD *)(v26 + 8) = v27 + 1;
    v29 = v28 != 0;
LABEL_6:
    *v25 = v29;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             (_DWORD)a1,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21);
  }
  *(_BYTE *)(v26 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (_DWORD)a1,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21);
}
