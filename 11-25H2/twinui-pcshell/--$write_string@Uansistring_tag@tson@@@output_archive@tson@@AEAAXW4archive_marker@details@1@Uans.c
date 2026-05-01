/*
 * XREFs of ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DE9B8
 * Callers:
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x18028BF34 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF0E4 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

char __fastcall tson::output_archive::write_string<tson::ansistring_tag>(__int64 a1, char a2, const void **a3)
{
  char result; // al
  rsize_t v6; // rdi
  const void *v7; // rsi
  unsigned __int64 v8; // rdx
  char v9; // cl
  char *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // [rsp+38h] [rbp+10h] BYREF
  char v14; // [rsp+40h] [rbp+18h] BYREF

  v13 = a2;
  result = tson::output_archive::write_type(a1, *a3 == 0LL, 23);
  if ( result )
  {
    v6 = (rsize_t)a3[1];
    v7 = *a3;
    v8 = v6 + 1;
    if ( v6 + 1 > 0x7F )
    {
      if ( v8 > 0x7FFF && *(int *)(a1 + 136) >= 0 )
        *(_DWORD *)(a1 + 136) = -2147483637;
      v12 = *(_QWORD *)(a1 + 144);
      v14 = v6 + 1;
      v13 = (unsigned __int16)(v8 | 0x8000) >> 8;
      tson::write_buffer::push_back<unsigned char>(v12, &v13);
      v10 = &v14;
    }
    else
    {
      v9 = v7 != 0LL ? v8 : 0;
      v10 = &v13;
      v13 = v9;
    }
    tson::write_buffer::push_back<unsigned char>(*(_QWORD *)(a1 + 144), v10);
    v11 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v11 + 2080) - *(_QWORD *)(v11 + 2072) >= v6
      || (result = tson::write_buffer::reserve((tson::write_buffer *)v11, v6)) != 0 )
    {
      result = memcpy_s_3(*(void *const *)(v11 + 2072), *(_QWORD *)(v11 + 2080) - *(_QWORD *)(v11 + 2072), v7, v6);
      *(_QWORD *)(v11 + 2072) += v6;
    }
  }
  return result;
}
