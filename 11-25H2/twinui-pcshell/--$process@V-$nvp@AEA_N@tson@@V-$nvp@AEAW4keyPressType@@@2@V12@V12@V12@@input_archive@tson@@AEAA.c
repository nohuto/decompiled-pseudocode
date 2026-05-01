/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4keyPressType@@@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4keyPressType@@@1@000@Z @ 0x1805FCAA0
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@000@Z @ 0x1805FC8B4 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAI@2@V-$nvp@AEAH@2@V12@V-$nvp@AEAW4keyPressType@@@2@V12@V.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180331D14 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<enum keyPressType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  char v6; // r10
  bool *v10; // r14
  int v11; // edi
  __int64 v12; // rdx
  char *v13; // rax
  char v14; // cl
  bool v15; // al
  __int64 v16; // rax
  _DWORD *v17; // rsi
  __int64 *v18; // r9
  __int64 v19; // r8
  int v21; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v6;
  v10 = *(bool **)(a2 + 16);
  v11 = 0;
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 10, -2147023267);
    v12 = *(_QWORD *)this;
    v13 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v12 + 24) = 1;
      goto LABEL_7;
    }
    v14 = *v13;
    *(_QWORD *)(v12 + 8) = v13 + 1;
    v15 = v14 != 0;
  }
  else
  {
    v15 = 0;
  }
  *v10 = v15;
LABEL_7:
  v16 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v16;
  v17 = (_DWORD *)a3[2];
  v21 = 0;
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 18, -2147023267);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v21, 4uLL);
    v11 = v21;
  }
  v18 = a6;
  v19 = a5;
  *v17 = v11;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (__int64)this,
           a4,
           v19,
           v18);
}
