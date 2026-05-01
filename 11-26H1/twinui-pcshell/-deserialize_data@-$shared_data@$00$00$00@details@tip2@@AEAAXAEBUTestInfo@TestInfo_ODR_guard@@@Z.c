/*
 * XREFs of ?deserialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x1803BB9D8
 * Callers:
 *     ?begin_update@?$shared_data@$00$00$00@details@tip2@@AEAA_NXZ @ 0x1803BB548 (-begin_update@-$shared_data@$00$00$00@details@tip2@@AEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1803BB678 (-complete_helper@-$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?end_update@?$shared_data@$00$00$00@details@tip2@@AEAAXXZ @ 0x1803BBB6C (-end_update@-$shared_data@$00$00$00@details@tip2@@AEAAXXZ.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z @ 0x180177284 (--0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z.c)
 *     ??0read_buffer@tson@@QEAA@PEBD@Z @ 0x1801D3248 (--0read_buffer@tson@@QEAA@PEBD@Z.c)
 *     ?finish@input_archive@tson@@QEAAJXZ @ 0x180212220 (-finish@input_archive@tson@@QEAAJXZ.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180284DE8 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_poli_ea_180284DE8.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$?RV?$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAUansistring_skip_tag@tson@@@1@@Z @ 0x180325710 (--$-RV-$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA.c)
 *     ??$?RV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@1@@Z @ 0x180325794 (--$-RV-$nvp@AEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<1,1,1>::deserialize_data(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  _BYTE *v5; // rcx
  char v6; // [rsp+20h] [rbp-E0h] BYREF
  const char *v7; // [rsp+28h] [rbp-D8h] BYREF
  char v8; // [rsp+30h] [rbp-D0h]
  char *v9; // [rsp+38h] [rbp-C8h]
  const char *v10; // [rsp+40h] [rbp-C0h] BYREF
  char v11; // [rsp+48h] [rbp-B8h]
  _QWORD *v12; // [rsp+50h] [rbp-B0h]
  const char *v13; // [rsp+58h] [rbp-A8h] BYREF
  char v14; // [rsp+60h] [rbp-A0h]
  _QWORD *v15; // [rsp+68h] [rbp-98h]
  _BYTE v16[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v17[18]; // [rsp+90h] [rbp-70h] BYREF

  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
    goto LABEL_13;
  tson::read_buffer::read_buffer((tson::read_buffer *)v16, *(const char **)(a2 + 24));
  v4 = a1 + 1;
  tson::input_archive::input_archive((tson::input_archive *)v17, (struct tson::read_buffer *)v16, *((_BYTE *)a1 + 33));
  if ( (*((_DWORD *)a1 + 5) & 0x40000) != 0 )
  {
    v8 = 4;
    v7 = "name";
    if ( a1[3] )
    {
      v6 = 0;
      v9 = &v6;
      tson::input_archive::operator()<tson::nvp<tson::ansistring_skip_tag &>>((tson::input_archive *)v17, (__int64)&v7);
    }
    else
    {
      v9 = (char *)(a1 + 1);
      tson::input_archive::operator()<tson::nvp<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>> &>>(
        (__int64)v17,
        (__int64)&v7);
      if ( *v4 )
        a1[3] = *v4;
    }
  }
  v7 = "flags";
  v8 = 5;
  v9 = (char *)(a1 + 15);
  v10 = "errors";
  v11 = 6;
  v12 = a1 + 9;
  v13 = "log";
  v14 = 3;
  v15 = a1 + 12;
  tson::input_archive::operator()<tson::nvp<tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip2::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(
    (tson *)v17,
    (__int64)&v13,
    (__int64)&v10,
    (__int64)&v7);
  v5 = *(_BYTE **)(v17[0] + 8LL);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(v17[0] + 16LL) )
    goto LABEL_10;
  if ( *v5 == 8 )
    tson::input_archive::consume_expected_marker(v17, 8, -2147023267);
  else
LABEL_10:
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a1 + 16LL))(*a1, v17);
  if ( (int)tson::input_archive::finish((tson::input_archive *)v17) >= 0 )
    *((_DWORD *)a1 + 46) = *(_DWORD *)(a2 + 16);
  else
LABEL_13:
    *((_DWORD *)a1 + 16) |= 0x80000u;
}
