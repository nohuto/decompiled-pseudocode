/*
 * XREFs of ?deserialize@?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180580DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1801852A0 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180328F10 (--$-RV-$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

void __fastcall tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  const char *v5; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v5 = "launchedWithAumid";
  v6 = 17;
  v4 = a1 + 265;
  if ( !a1 )
    v4 = 17LL;
  v7 = v4;
  tson::input_archive::operator()<tson::nvp<bool &>>((__int64 *)a2, (__int64)&v5);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
