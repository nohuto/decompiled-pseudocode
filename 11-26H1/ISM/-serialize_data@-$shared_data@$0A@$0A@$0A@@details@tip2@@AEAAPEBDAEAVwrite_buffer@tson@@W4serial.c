/*
 * XREFs of ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800A496C
 * Callers:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1800A3720 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800A3A10 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800A4B28 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800A23F4 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800A2550 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800A25C8 (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x1800A2EA8 (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?finish@output_archive@tson@@QEAAJXZ @ 0x1800A3D54 (-finish@output_archive@tson@@QEAAJXZ.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x1800A3F58 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?serialize@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800A4908 (-serialize@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAVoutput_archive@tson@@W4serialize_op.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,0>::serialize_data(
        __int64 a1,
        struct tson::write_buffer *a2,
        unsigned int a3)
{
  _BYTE *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 string_tag; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // r8
  const char *v13; // [rsp+20h] [rbp-E0h] BYREF
  char v14; // [rsp+28h] [rbp-D8h]
  _BYTE *v15; // [rsp+30h] [rbp-D0h]
  __m128i v16; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  const char *v19; // [rsp+60h] [rbp-A0h] BYREF
  char v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h]
  _BYTE v22[160]; // [rsp+80h] [rbp-80h] BYREF

  if ( a3 )
  {
    v6 = (_BYTE *)(a1 + 33);
    tson::output_archive::output_archive((tson::output_archive *)v22, a2, *(_BYTE *)(a1 + 33));
    if ( (a3 & 4) != 0 && *v6 )
    {
      v14 = 7;
      v13 = "version";
      v15 = v6;
      tson::output_archive::operator()<tson::nvp<unsigned char &>>((__int64)v22, (__int64 *)&v13, v7);
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 20) & 0x40000) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 8);
        if ( !v8 )
          v8 = *(_QWORD *)(a1 + 24);
        string_tag = tson::make_string_tag((__int64)&v19, v8);
        v16.m128i_i8[8] = 4;
        v16.m128i_i64[0] = (__int64)"name";
        v10 = *(_QWORD *)(string_tag + 16);
        v17 = *(_OWORD *)string_tag;
        v18 = v10;
        tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>((tson::output_archive *)v22, &v16, v11);
      }
      v14 = 5;
      v13 = "flags";
      v16.m128i_i8[8] = 6;
      v15 = (_BYTE *)(a1 + 120);
      v20 = 3;
      v16.m128i_i64[0] = (__int64)"errors";
      *(_QWORD *)&v17 = a1 + 72;
      v19 = "log";
      v21 = a1 + 96;
      tson::output_archive::operator()<tson::nvp<tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip2::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(
        (tson::output_archive *)v22,
        (__int64)&v19);
    }
    tip2::details::shared_data<0,0,0>::serialize((__int64 *)a1, (__int64)v22, a3);
    if ( (int)tson::output_archive::finish((tson::output_archive *)v22) >= 0 )
      return *((_QWORD *)a2 + 258);
    *(_DWORD *)(a1 + 64) |= 0x100000u;
  }
  return 0LL;
}
