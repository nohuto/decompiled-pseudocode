/*
 * XREFs of ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800D5904
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800D211C (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 *     ??$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@0@@Z @ 0x1800D2348 (--$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@ts.c)
 *     ??$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x1800D23EC (--$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@Utest_flag@.c)
 *     ??$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x1800D2508 (--$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@VSto.c)
 *     ?serialize@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800D57D0 (-serialize@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udw.c)
 * Callees:
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x1800D5C28 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 */

void __fastcall tson::output_archive::startNode(tson::output_archive *this)
{
  unsigned __int64 v2; // rax

  tson::output_archive::write_name(this, 0);
  v2 = *((_QWORD *)this + 16);
  if ( v2 >= 0x19 )
  {
    *((_BYTE *)this + 24) = 1;
  }
  else
  {
    *((_DWORD *)this + v2 + 7) = 0;
    ++*((_QWORD *)this + 16);
  }
}
