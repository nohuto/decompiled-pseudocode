/*
 * XREFs of ??$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_tag@1@@Z @ 0x1800DEE20
 * Callers:
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800DE9F4 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x1806B04F0 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 * Callees:
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF2B8 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DF4B8 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800E003C (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     memcpy_s_3 @ 0x1802D97A0 (memcpy_s_3.c)
 */

char __fastcall tson::output_archive::write_string<tson::string_tag>(__int64 a1, __int64 a2, const void **a3)
{
  bool v3; // zf
  const void **v4; // rsi
  char result; // al
  const void *v7; // rax
  const void *v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  char v11; // cl
  char *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  char v15; // [rsp+38h] [rbp+10h] BYREF
  char v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = a2;
  v3 = *a3 == 0LL;
  v4 = a3;
  LOBYTE(a3) = 24;
  LOBYTE(a2) = v3;
  result = tson::output_archive::write_type(a1, a2, a3);
  if ( result )
  {
    v7 = v4[1];
    v8 = *v4;
    v9 = (unsigned __int64)v7 + 1;
    v10 = 2LL * (_QWORD)v7;
    if ( (unsigned __int64)v7 + 1 > 0x7F )
    {
      if ( v9 > 0x7FFF && *(int *)(a1 + 136) >= 0 )
        *(_DWORD *)(a1 + 136) = -2147483637;
      v14 = *(_QWORD *)(a1 + 144);
      v16 = (_BYTE)v7 + 1;
      v15 = (unsigned __int16)(v9 | 0x8000) >> 8;
      tson::write_buffer::push_back<unsigned char>(v14, &v15);
      v12 = &v16;
    }
    else
    {
      v11 = v8 != 0LL ? v9 : 0;
      v12 = &v15;
      v15 = v11;
    }
    tson::write_buffer::push_back<unsigned char>(*(_QWORD *)(a1 + 144), v12);
    v13 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v13 + 2080) - *(_QWORD *)(v13 + 2072) >= v10
      || (result = tson::write_buffer::reserve((tson::write_buffer *)v13, v10)) != 0 )
    {
      result = memcpy_s_3(*(void *const *)(v13 + 2072), *(_QWORD *)(v13 + 2080) - *(_QWORD *)(v13 + 2072), v8, v10);
      *(_QWORD *)(v13 + 2072) += v10;
    }
  }
  return result;
}
