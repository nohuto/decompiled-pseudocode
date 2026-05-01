/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@V21@V?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@1$$QEAV?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@Z @ 0x1806A4E20
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_TaskViewShowTest@SwitcherTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806A54CC (--$serialize@Vinput_archive@tson@@@_tip_TaskViewShowTest@SwitcherTip@@QEAAXAEAVinput_archive@tso.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@Z @ 0x1806A5420 (--$process@V-$nvp@AEAH@tson@@V12@V-$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@2@@input_ar.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum SwitcherTip::MultiTaskingViewInputType &>>(
        tson::input_archive *this,
        __int64 a2)
{
  char v2; // r10
  bool *v4; // rdi
  __int64 v5; // rdx
  char *v6; // rax
  char v7; // cl
  bool v8; // al

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v2;
  v4 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v8 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v5 = *(_QWORD *)this;
  v6 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v6 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v7 = *v6;
    *(_QWORD *)(v5 + 8) = v6 + 1;
    v8 = v7 != 0;
LABEL_6:
    *v4 = v8;
    goto LABEL_7;
  }
  *(_BYTE *)(v5 + 24) = 1;
LABEL_7:
  tson::input_archive::process<tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum SwitcherTip::MultiTaskingViewInputType &>>(this);
  return this;
}
