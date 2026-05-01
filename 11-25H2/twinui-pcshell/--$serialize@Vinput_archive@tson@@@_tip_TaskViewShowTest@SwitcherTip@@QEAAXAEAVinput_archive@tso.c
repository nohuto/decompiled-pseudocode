/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_TaskViewShowTest@SwitcherTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18067E5F0
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180680FF0 (-deserialize@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@V21@V?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@1$$QEAV?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@Z @ 0x18067DF5C (--$-RV-$nvp@AEA_N@tson@@V-$nvp@AEAH@1@V21@V-$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@.c)
 */

tson::input_archive *__fastcall SwitcherTip::_tip_TaskViewShowTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  const char *v3; // [rsp+78h] [rbp+3Fh] BYREF
  char v4; // [rsp+80h] [rbp+47h]
  __int64 v5; // [rsp+88h] [rbp+4Fh]

  v4 = 5;
  v3 = "shown";
  v5 = a1 + 16;
  return tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum SwitcherTip::MultiTaskingViewInputType &>>(
           a2,
           (__int64)&v3);
}
