/*
 * XREFs of ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800D5130
 * Callers:
 *     ??$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@0@@Z @ 0x1800D2348 (--$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@ts.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800D5174 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x18008A5C0 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800D5D5C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

void __fastcall tson::output_archive::saveValue(void ***this, __int64 a2, __int64 a3)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  LOBYTE(a3) = 18;
  LOBYTE(a2) = (_DWORD)a2 == 0;
  if ( (unsigned __int8)tson::output_archive::write_type(this, a2, a3) )
    tson::write_buffer::push_back(this[18], &v4, 4uLL);
}
