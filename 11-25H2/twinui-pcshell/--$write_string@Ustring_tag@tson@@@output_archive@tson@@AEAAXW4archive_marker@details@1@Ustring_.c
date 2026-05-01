/*
 * XREFs of ??$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_tag@1@@Z @ 0x1800DEC24
 * Callers:
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800DF504 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x180689120 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF0E4 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

char __fastcall tson::output_archive::write_string<tson::string_tag>(__int64 a1, char a2, const void **a3)
{
  char result; // al
  const void *v6; // rax
  const void *v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  char v10; // cl
  char *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  char v14; // [rsp+38h] [rbp+10h] BYREF
  char v15; // [rsp+40h] [rbp+18h] BYREF

  v14 = a2;
  result = tson::output_archive::write_type(a1, *a3 == 0LL, 24);
  if ( result )
  {
    v6 = a3[1];
    v7 = *a3;
    v8 = (unsigned __int64)v6 + 1;
    v9 = 2LL * (_QWORD)v6;
    if ( (unsigned __int64)v6 + 1 > 0x7F )
    {
      if ( v8 > 0x7FFF && *(int *)(a1 + 136) >= 0 )
        *(_DWORD *)(a1 + 136) = -2147483637;
      v13 = *(_QWORD *)(a1 + 144);
      v15 = (_BYTE)v6 + 1;
      v14 = (unsigned __int16)(v8 | 0x8000) >> 8;
      tson::write_buffer::push_back<unsigned char>(v13, &v14);
      v11 = &v15;
    }
    else
    {
      v10 = v7 != 0LL ? v8 : 0;
      v11 = &v14;
      v14 = v10;
    }
    tson::write_buffer::push_back<unsigned char>(*(_QWORD *)(a1 + 144), v11);
    v12 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v12 + 2080) - *(_QWORD *)(v12 + 2072) >= v9
      || (result = tson::write_buffer::reserve((tson::write_buffer *)v12, v9)) != 0 )
    {
      result = memcpy_s_3(*(void *const *)(v12 + 2072), *(_QWORD *)(v12 + 2080) - *(_QWORD *)(v12 + 2072), v7, v9);
      *(_QWORD *)(v12 + 2072) += v9;
    }
  }
  return result;
}
