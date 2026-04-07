/*
 * XREFs of ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x1800D1A78
 * Callers:
 *     ??$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x1800D23EC (--$save_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@Utest_flag@.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1800D245C (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ??$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x1800D2508 (--$save_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV-$vector_nothrow@VSto.c)
 * Callees:
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x1800D5C08 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::size_tag>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9

  *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top(a1 + 24, a2, a1, *a2) = 2;
  if ( v3 > 0xFFFF && *(int *)(v2 + 136) >= 0 )
    *(_DWORD *)(v2 + 136) = -2147483637;
  *(_WORD *)(v2 + 10) = v3;
  return v2;
}
