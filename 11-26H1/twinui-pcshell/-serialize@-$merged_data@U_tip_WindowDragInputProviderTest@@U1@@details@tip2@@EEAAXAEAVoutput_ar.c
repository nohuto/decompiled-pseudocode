/*
 * XREFs of ?serialize@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805C0260
 * Callers:
 *     <none>
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DF098 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  const char *v10; // [rsp+20h] [rbp-38h] BYREF
  char v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  const char *v13; // [rsp+38h] [rbp-20h] BYREF
  char v14; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+48h] [rbp-10h]

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    v14 = 14;
    v13 = "payloadMessage";
    v11 = 13;
    v7 = a1 + 276;
    if ( !a1 )
      v7 = 20LL;
    v15 = v7;
    v10 = "windowMessage";
    v8 = a1 + 272;
    if ( !a1 )
      v8 = 16LL;
    v12 = v8;
    tson::output_archive::process<tson::nvp<unsigned int &>>((__int64)a2, (__int64 *)&v10, v6);
    tson::output_archive::process<tson::nvp<unsigned int &>>((__int64)a2, (__int64 *)&v13, v9);
    tson::output_archive::finishNode(a2);
  }
}
