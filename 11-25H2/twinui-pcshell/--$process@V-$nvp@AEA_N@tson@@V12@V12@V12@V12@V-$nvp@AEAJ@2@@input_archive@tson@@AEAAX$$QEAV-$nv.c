/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAJ@1@@Z @ 0x18045A70C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000$$QEAV?$nvp@AEAJ@1@@Z @ 0x18045A548 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAJ@1@@Z @ 0x18045A7C0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V-$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r10
  bool *v8; // rdi
  __int64 v9; // rdx
  char *v10; // rax
  char v11; // cl
  bool v12; // al

  v4 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v4;
  v8 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v12 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v9 = *(_QWORD *)this;
  v10 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v10 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v11 = *v10;
    *(_QWORD *)(v9 + 8) = v10 + 1;
    v12 = v11 != 0;
LABEL_6:
    *v8 = v12;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>>(
             this,
             a3,
             a4);
  }
  *(_BYTE *)(v9 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>>(
           this,
           a3,
           a4);
}
