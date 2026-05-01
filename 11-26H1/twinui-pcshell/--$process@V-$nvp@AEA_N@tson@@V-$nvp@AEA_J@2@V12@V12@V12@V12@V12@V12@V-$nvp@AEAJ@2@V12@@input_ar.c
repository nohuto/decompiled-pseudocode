/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEA_J@1@000000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x180458608
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEA_J@1@000000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18045820C (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@V12@@inpu.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_J@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_J@1@@Z @ 0x180326DE8 (--$process@V-$nvp@AEA_J@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_J@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18032752C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<__int64 &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  char v11; // r10
  bool *v15; // rdi
  __int64 v16; // rdx
  char *v17; // rax
  char v18; // cl
  bool v19; // al

  v11 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v11;
  v15 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v19 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v16 = *(_QWORD *)this;
  v17 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v17 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v18 = *v17;
    *(_QWORD *)(v16 + 8) = v17 + 1;
    v19 = v18 != 0;
LABEL_6:
    *v15 = v19;
    goto LABEL_7;
  }
  *(_BYTE *)(v16 + 24) = 1;
LABEL_7:
  tson::input_archive::process<tson::nvp<__int64 &>>((__int64)this, a3);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
           this,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
