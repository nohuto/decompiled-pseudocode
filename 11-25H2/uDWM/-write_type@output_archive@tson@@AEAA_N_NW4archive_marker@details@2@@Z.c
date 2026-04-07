/*
 * XREFs of ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800D8CC8
 * Callers:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x1800D43A4 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800D4404 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800D4464 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800D452C (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800D4A78 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800D4AD4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAUansistring_tag@tson@@@tson@@V?$nvp@AEAI@2@V?$nvp@AEAUstring_tag@tson@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@0@Z @ 0x1800D4B2C (--$process@V-$nvp@AEAUansistring_tag@tson@@@tson@@V-$nvp@AEAI@2@V-$nvp@AEAUstring_tag@tson@@@2@V.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1800D4F28 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800D80D4 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800D8118 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x180097AD0 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x1800D8B94 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 */

char __fastcall tson::output_archive::write_type(tson::write_buffer **a1, char a2, char a3)
{
  char v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  if ( !tson::output_archive::write_name((tson::output_archive *)a1, a2) )
    return 0;
  tson::write_buffer::push_back<unsigned char>(a1[18], &v5);
  return 1;
}
