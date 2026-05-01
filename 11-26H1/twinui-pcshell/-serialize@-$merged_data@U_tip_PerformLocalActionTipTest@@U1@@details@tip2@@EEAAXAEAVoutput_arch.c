/*
 * XREFs of ?serialize@?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180654CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$save_nothrow@AEAU_tip_PerformLocalActionTipTest@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_PerformLocalActionTipTest@@@0@@Z @ 0x180647894 (--$save_nothrow@AEAU_tip_PerformLocalActionTipTest@@@tson@@YAXAEAVoutput_archive@0@AEAV-$nvp@AEA.c)
 */

void __fastcall tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  const char *v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

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
    v7 = 4;
    v6 = "test";
    v8 = (a1 + 256) & -(__int64)(a1 != 0);
    tson::save_nothrow<_tip_PerformLocalActionTipTest &>(a2, (__int64)&v6);
  }
}
