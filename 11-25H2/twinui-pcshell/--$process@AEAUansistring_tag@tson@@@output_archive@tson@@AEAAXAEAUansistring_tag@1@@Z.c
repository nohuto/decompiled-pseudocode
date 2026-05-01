/*
 * XREFs of ??$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z @ 0x1800DEB00
 * Callers:
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DEAD0 (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DFC38 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028B494 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028BB7C (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1803338DC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF0E4 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

char __fastcall tson::output_archive::process<tson::ansistring_tag &>(__int64 a1, __m128i *a2)
{
  const void *v3; // rsi
  char result; // al
  unsigned __int64 v5; // xmm0_8
  unsigned __int64 v6; // rdx
  char v7; // cl
  char *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __m128i v11; // [rsp+20h] [rbp-38h]
  char v12; // [rsp+68h] [rbp+10h] BYREF
  char v13; // [rsp+70h] [rbp+18h] BYREF

  v11 = *a2;
  v3 = (const void *)a2->m128i_i64[0];
  result = tson::output_archive::write_type(a1, a2->m128i_i64[0] == 0, 23);
  if ( result )
  {
    v5 = _mm_srli_si128(v11, 8).m128i_u64[0];
    v6 = v5 + 1;
    if ( v5 + 1 > 0x7F )
    {
      if ( v6 > 0x7FFF && *(int *)(a1 + 136) >= 0 )
        *(_DWORD *)(a1 + 136) = -2147483637;
      v10 = *(_QWORD *)(a1 + 144);
      v13 = v5 + 1;
      v12 = (unsigned __int16)(v6 | 0x8000) >> 8;
      tson::write_buffer::push_back<unsigned char>(v10, &v12);
      v8 = &v13;
    }
    else
    {
      v7 = v3 != 0LL ? v6 : 0;
      v8 = &v12;
      v12 = v7;
    }
    tson::write_buffer::push_back<unsigned char>(*(_QWORD *)(a1 + 144), v8);
    v9 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v9 + 2080) - *(_QWORD *)(v9 + 2072) >= v5
      || (result = tson::write_buffer::reserve((tson::write_buffer *)v9, v5)) != 0 )
    {
      result = memcpy_s_3(*(void *const *)(v9 + 2072), *(_QWORD *)(v9 + 2080) - *(_QWORD *)(v9 + 2072), v3, v5);
      *(_QWORD *)(v9 + 2072) += v5;
    }
  }
  return result;
}
