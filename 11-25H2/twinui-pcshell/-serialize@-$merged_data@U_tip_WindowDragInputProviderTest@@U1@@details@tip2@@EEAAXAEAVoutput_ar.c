/*
 * XREFs of ?serialize@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18059BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DE920 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v8; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  const char *v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+48h] [rbp-10h]

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
    v12 = 14;
    v11 = "payloadMessage";
    v9 = 13;
    v6 = a1 + 268;
    if ( !a1 )
      v6 = 20LL;
    v13 = v6;
    v8 = "windowMessage";
    v7 = a1 + 264;
    if ( !a1 )
      v7 = 16LL;
    v10 = v7;
    tson::output_archive::process<tson::nvp<unsigned int &>>((__int64)a2, (__int64 *)&v8);
    tson::output_archive::process<tson::nvp<unsigned int &>>((__int64)a2, (__int64 *)&v11);
    tson::output_archive::finishNode(a2);
  }
}
