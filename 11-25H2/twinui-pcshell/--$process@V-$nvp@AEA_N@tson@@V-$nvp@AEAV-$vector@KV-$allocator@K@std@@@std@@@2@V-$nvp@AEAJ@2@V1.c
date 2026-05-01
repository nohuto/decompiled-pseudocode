/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805DB4CC
 * Callers:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@V?$nvp@AEAJ@1@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805DA438 (--$-RV-$nvp@AEA_N@tson@@V01@V-$nvp@AEAV-$vector@KV-$allocator@K@std@@@std@@@1@V-$nvp@AEAJ@1@V01@.c)
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1801852A0 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x180185568 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$load_nothrow@KV?$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1805DB27C (--$load_nothrow@KV-$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@KV-$allocator@K@.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::vector<unsigned long> &>,tson::nvp<long &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  char v5; // r10
  bool *v9; // rbx
  __int64 v10; // rdx
  char *v11; // rax
  char v12; // cl
  bool v13; // al
  __int64 v14; // rax
  __int64 v15; // rbx
  tson::input_archive *v16; // rcx

  v5 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v5;
  v9 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v13 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v10 = *(_QWORD *)this;
  v11 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v11 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v12 = *v11;
    *(_QWORD *)(v10 + 8) = v11 + 1;
    v13 = v12 != 0;
LABEL_6:
    *v9 = v13;
    goto LABEL_7;
  }
  *(_BYTE *)(v10 + 24) = 1;
LABEL_7:
  v14 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v14;
  v15 = a3[2];
  tson::input_archive::startNode(this);
  tson::load_nothrow<unsigned long,std::allocator<unsigned long>>(this, v15);
  tson::input_archive::finishNode(this);
  return tson::input_archive::process<tson::nvp<long &>,tson::nvp<bool &>>(v16, a4, a5);
}
