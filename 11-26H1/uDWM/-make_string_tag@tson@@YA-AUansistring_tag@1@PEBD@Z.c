/*
 * XREFs of ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x1800D4D5C
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180089E70 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1800D245C (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800D5174 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800D552C (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::make_string_tag(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = a2;
  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *(_BYTE *)(a2 + v2) );
  }
  else
  {
    v2 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 17) = 0;
  *(_WORD *)(a1 + 21) = 0;
  *(_BYTE *)(a1 + 23) = 0;
  return a1;
}
