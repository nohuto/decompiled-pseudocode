/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAJ@2@V?$nvp@AEA_K@2@V42@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_K@1@2$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C83CC
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805C869C (--$serialize@Vinput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180177078 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x1801774D0 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x180326C24 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x180326EA8 (--$process@V-$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1805C5C5C (--$load_nothrow@HV-$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@HV-$allocator@H@.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned __int64 &>,tson::nvp<unsigned __int64 &>,tson::nvp<std::vector<int> &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  char v7; // r10
  bool *v11; // rbx
  __int64 v12; // rdx
  char *v13; // rax
  char v14; // cl
  bool v15; // al
  __int64 v16; // rax
  const void **v17; // rbx
  __int64 v18; // rax

  v7 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v7;
  v11 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v15 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v12 = *(_QWORD *)this;
  v13 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v13 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v14 = *v13;
    *(_QWORD *)(v12 + 8) = v13 + 1;
    v15 = v14 != 0;
LABEL_6:
    *v11 = v15;
    goto LABEL_7;
  }
  *(_BYTE *)(v12 + 24) = 1;
LABEL_7:
  tson::input_archive::process<tson::nvp<long &>>((__int64)this, a3);
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>((__int64)this, a4);
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>((__int64)this, a5);
  v16 = *a6;
  *((_BYTE *)this + 24) = *((_BYTE *)a6 + 8);
  *((_QWORD *)this + 2) = v16;
  v17 = (const void **)a6[2];
  tson::input_archive::startNode(this);
  tson::load_nothrow<int,std::allocator<int>>(this, v17);
  tson::input_archive::finishNode(this);
  v18 = *a7;
  *((_BYTE *)this + 24) = *((_BYTE *)a7 + 8);
  *((_QWORD *)this + 2) = v18;
  return tson::load_nothrow(this, (_QWORD *)a7[2]);
}
