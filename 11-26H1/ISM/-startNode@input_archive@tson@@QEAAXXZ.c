/*
 * XREFs of ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800A4C60
 * Callers:
 *     ??$process@AEAU_tip_ISMSessionMonitorCreationTipTest@@@input_archive@tson@@AEAAXAEAU_tip_ISMSessionMonitorCreationTipTest@@@Z @ 0x1800A27A8 (--$process@AEAU_tip_ISMSessionMonitorCreationTipTest@@@input_archive@tson@@AEAAXAEAU_tip_ISMSess.c)
 *     ??$?RV?$nvp@AEAVtest_data_basic@tip2@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAVtest_data_basic@tip2@@@1@@Z @ 0x180108658 (--$-RV-$nvp@AEAVtest_data_basic@tip2@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAVtes.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180108DC0 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180108F7C (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 * Callees:
 *     ?push_node@input_archive@tson@@AEAAXXZ @ 0x1800A40A4 (-push_node@input_archive@tson@@AEAAXXZ.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800A4778 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

void __fastcall tson::input_archive::startNode(tson::input_archive *this)
{
  tson::input_archive::search(this);
  if ( !*((_BYTE *)this + 25) )
    tson::input_archive::push_node((tson::read_buffer **)this);
}
