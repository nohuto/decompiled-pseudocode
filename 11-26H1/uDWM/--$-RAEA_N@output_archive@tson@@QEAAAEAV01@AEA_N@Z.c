/*
 * XREFs of ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800D19FC
 * Callers:
 *     ??$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@0@@Z @ 0x1800D2348 (--$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@ts.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800D5174 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18005D65C (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800D5D5C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<bool &>(__int64 a1, char *a2, __int64 a3)
{
  char v3; // si
  __int64 v5; // rbx

  v3 = *a2;
  LOBYTE(a3) = 10;
  LOBYTE(a2) = *a2 == 0;
  if ( (unsigned __int8)tson::output_archive::write_type(a1, a2, a3) )
  {
    v5 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v5 + 2072) < *(_QWORD *)(v5 + 2080)
      || tson::write_buffer::reserve(*(tson::write_buffer **)(a1 + 144), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v5 + 2072))++ = v3;
    }
  }
  return a1;
}
