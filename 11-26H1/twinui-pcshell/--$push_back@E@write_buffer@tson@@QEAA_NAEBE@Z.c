/*
 * XREFs of ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF2B8
 * Callers:
 *     ?saveValue@output_archive@tson@@QEAAXE@Z @ 0x1800DED60 (-saveValue@output_archive@tson@@QEAAXE@Z.c)
 *     ??$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_tag@1@@Z @ 0x1800DEE20 (--$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_.c)
 *     ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DEF3C (--$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uans.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180280978 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802B8924 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     memcpy_s_3 @ 0x1802D97A0 (memcpy_s_3.c)
 */

char __fastcall tson::write_buffer::push_back<unsigned char>(__int64 a1, char *a2)
{
  unsigned __int64 v4; // rcx
  char *v5; // r8
  char *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  rsize_t v9; // rbp
  char *v10; // rsi
  const void *v11; // r8
  rsize_t v12; // rbx

  v4 = *(_QWORD *)(a1 + 2080);
  v5 = *(char **)(a1 + 2072);
  if ( (unsigned __int64)v5 >= v4 )
  {
    v7 = v4 - *(_QWORD *)(a1 + 2064);
    v8 = 1LL;
    if ( v7 > 1 )
      v8 = v7;
    v9 = 2 * v8;
    v6 = (char *)CoTaskMemAlloc(2 * v8);
    v10 = v6;
    if ( !v6 )
    {
      *(_BYTE *)(a1 + 8) = 1;
      return (char)v6;
    }
    v11 = *(const void **)(a1 + 2064);
    v12 = *(_QWORD *)(a1 + 2072) - (_QWORD)v11;
    memcpy_s_3(v6, v9, v11, v12);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      a1,
      v10);
    v5 = &v10[v12];
    *(_QWORD *)(a1 + 2064) = v10;
    *(_QWORD *)(a1 + 2072) = &v10[v12];
    *(_QWORD *)(a1 + 2080) = &v10[v9];
  }
  LOBYTE(v6) = 1;
  *v5 = *a2;
  ++*(_QWORD *)(a1 + 2072);
  return (char)v6;
}
