/*
 * XREFs of ?saveValue@output_archive@tson@@QEAAXE@Z @ 0x1800DF200
 * Callers:
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DF53C (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180480864 (--$serialize@Voutput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Co.c)
 *     ?serialize@?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180483070 (-serialize@-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableSh.c)
 * Callees:
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF0E4 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 */

void __fastcall tson::output_archive::saveValue(tson::output_archive *this, char a2)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  if ( tson::output_archive::write_type((__int64)this, a2 == 0, 12) )
    tson::write_buffer::push_back<unsigned char>(*((_QWORD *)this + 18), &v3);
}
