/*
 * XREFs of ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18069B244
 * Callers:
 *     ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x18069A634 (-end_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x18069A814 (-evaluate_and_report@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z.c)
 *     ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18069B3E4 (-start@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DE9C0 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DEDD8 (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x180178434 (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x18017EF94 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?finish@output_archive@tson@@QEAAJXZ @ 0x1801904FC (-finish@output_archive@tson@@QEAAJXZ.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180280828 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip2::details::shared_data<0,0,1>::serialize_data(
        _QWORD *a1,
        struct tson::write_buffer *a2,
        unsigned int a3)
{
  __int64 v6; // rdx
  __int64 string_tag; // rax
  const char *v9; // [rsp+20h] [rbp-E0h] BYREF
  char v10; // [rsp+28h] [rbp-D8h]
  _QWORD *v11; // [rsp+30h] [rbp-D0h]
  const char *v12; // [rsp+38h] [rbp-C8h] BYREF
  char v13; // [rsp+40h] [rbp-C0h]
  __int128 v14; // [rsp+48h] [rbp-B8h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  const char *v16; // [rsp+60h] [rbp-A0h] BYREF
  char v17; // [rsp+68h] [rbp-98h]
  _QWORD *v18; // [rsp+70h] [rbp-90h]
  tson::write_buffer *v19[20]; // [rsp+80h] [rbp-80h] BYREF

  if ( a3 )
  {
    memset_0(v19, 0, 0x98uLL);
    tson::output_archive::output_archive((tson::output_archive *)v19, a2, *((_BYTE *)a1 + 33));
    if ( (a3 & 4) != 0 && *((_BYTE *)a1 + 33) )
    {
      v9 = "version";
      v10 = 7;
      v11 = (_QWORD *)((char *)a1 + 33);
      tson::output_archive::operator()<tson::nvp<unsigned char &>>((tson::output_archive *)v19, (__int64)&v9);
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (*((_DWORD *)a1 + 5) & 0x40000) != 0 )
      {
        v6 = a1[1];
        if ( !v6 )
          v6 = a1[3];
        string_tag = tson::make_string_tag((__int64)&v16, v6);
        v12 = "name";
        v13 = 4;
        v14 = *(_OWORD *)string_tag;
        v15 = *(_QWORD *)(string_tag + 16);
        tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>((__int64)v19, (__int64 *)&v12);
      }
      v9 = "flags";
      v10 = 5;
      v11 = a1 + 15;
      v12 = "errors";
      v13 = 6;
      *(_QWORD *)&v14 = a1 + 9;
      v16 = "log";
      v17 = 3;
      v18 = a1 + 12;
      tson::output_archive::operator()<tson::nvp<tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip2::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(
        (tson *)v19,
        (__int64)&v16,
        (__int64 *)&v12,
        (__int64 *)&v9);
    }
    (*(void (__fastcall **)(_QWORD, tson::write_buffer **, _QWORD))(*(_QWORD *)*a1 + 8LL))(*a1, v19, a3);
    if ( (int)tson::output_archive::finish(v19) >= 0 )
      return *((_QWORD *)a2 + 258);
    *((_DWORD *)a1 + 16) |= 0x100000u;
  }
  return 0LL;
}
