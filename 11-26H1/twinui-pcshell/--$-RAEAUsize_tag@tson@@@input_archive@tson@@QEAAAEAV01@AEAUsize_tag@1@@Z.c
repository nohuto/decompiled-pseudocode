/*
 * XREFs of ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x18020A8D4
 * Callers:
 *     ??$load_nothrow@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@0@@Z @ 0x180283EA8 (--$load_nothrow@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180283F4C (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x180284038 (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 *     ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1805C5C5C (--$load_nothrow@HV-$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@HV-$allocator@H@.c)
 *     ??$load_nothrow@KV?$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1805FFD1C (--$load_nothrow@KV-$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@KV-$allocator@K@.c)
 * Callees:
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180330CD4 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::size_tag &>(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  tson::read_buffer *v6; // rcx
  unsigned __int16 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v4 = a1 + 32;
    v5 = *(_QWORD *)(a1 + 136);
    if ( v5 )
      v4 = v4 + 4 * v5 - 4;
    else
      *(_BYTE *)v4 = 1;
    if ( *(_DWORD *)(v4 + 4) != 1 && *(int *)(a1 + 8) >= 0 )
      *(_DWORD *)(a1 + 8) = -2147023267;
    v6 = *(tson::read_buffer **)a1;
    v8 = 0;
    tson::read_buffer::consume_n(v6, &v8, 2uLL);
    *a2 = v8;
  }
  return a1;
}
