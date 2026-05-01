/*
 * XREFs of ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@Z @ 0x1806A5420
 * Callers:
 *     ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@V21@V?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@1$$QEAV?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@Z @ 0x1806A4E20 (--$-RV-$nvp@AEA_N@tson@@V-$nvp@AEAH@1@V21@V-$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180330CD4 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180463EC4 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum SwitcherTip::MultiTaskingViewInputType &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  char v4; // r10
  char v8; // dl
  int v9; // ebx
  __int64 v10; // rax
  _DWORD *v11; // rdi
  char result; // al
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v4;
  tson::input_archive::operator()<int &>(this, *(_DWORD **)(a2 + 16));
  v8 = *(_BYTE *)(a3 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a3;
  *((_BYTE *)this + 24) = v8;
  tson::input_archive::operator()<int &>(this, *(_DWORD **)(a3 + 16));
  v9 = 0;
  v10 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v10;
  v11 = (_DWORD *)a4[2];
  v13 = 0;
  result = tson::input_archive::search(this);
  if ( result )
  {
    tson::input_archive::consume_expected_marker(this, 18, -2147023267);
    result = tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v13, 4uLL);
    v9 = v13;
  }
  *v11 = v9;
  return result;
}
