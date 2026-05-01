/*
 * XREFs of ?deserialize@?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18044C170
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180177078 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$?RAEAK@input_archive@tson@@QEAAAEAV01@AEAK@Z @ 0x1803253E8 (--$-RAEAK@input_archive@tson@@QEAAAEAV01@AEAK@Z.c)
 */

void __fastcall tip2::details::merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK,XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v4 = a1 + 272;
  if ( !a1 )
    v4 = 16LL;
  tson::input_archive::operator()<unsigned long &>((tson::input_archive *)a2, (_DWORD *)v4);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
