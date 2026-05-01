/*
 * XREFs of ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x180146064
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1802804C8 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ??$process@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@output_archive@tson@@AEAAXAEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x1802808D8 (--$process@AEAV-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@output_archive@tson@@AEAAXAEAV-$.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180280978 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180280E08 (--$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@Utest_flag@.c)
 *     ?serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVoutput_archive@tson@@@Z @ 0x1803BDE58 (-serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::details::stack<enum tson::output_archive::node_type>::top(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 )
    return a1 + 4 * v1;
  *(_BYTE *)a1 = 1;
  return a1 + 4;
}
