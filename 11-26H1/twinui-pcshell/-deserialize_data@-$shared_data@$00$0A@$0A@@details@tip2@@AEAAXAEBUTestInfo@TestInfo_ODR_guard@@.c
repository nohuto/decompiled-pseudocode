/*
 * XREFs of ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x180283CC0
 * Callers:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180281974 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180281DD4 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18028C014 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?push_node@input_archive@tson@@AEAAXXZ @ 0x1801771FC (-push_node@input_archive@tson@@AEAAXXZ.c)
 *     ??0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z @ 0x180177284 (--0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z.c)
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x180177344 (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x1801774D0 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ??0read_buffer@tson@@QEAA@PEBD@Z @ 0x1801D3248 (--0read_buffer@tson@@QEAA@PEBD@Z.c)
 *     ??$load_nothrow@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@0@@Z @ 0x180283EA8 (--$load_nothrow@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180283F4C (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x180284038 (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 *     ?deserialize@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEAVinput_archive@tson@@@Z @ 0x1802840FC (-deserialize@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEAVinput_archive@tson@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$?RV?$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAUansistring_skip_tag@tson@@@1@@Z @ 0x180325710 (--$-RV-$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA.c)
 *     ??$?RV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@1@@Z @ 0x180325794 (--$-RV-$nvp@AEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFr.c)
 */

void __fastcall tip2::details::shared_data<1,0,0>::deserialize_data(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi
  bool v5; // zf
  _BYTE *v6; // rax
  unsigned __int8 *v7; // rax
  int v8; // eax
  char v9; // [rsp+20h] [rbp-99h] BYREF
  const char *v10; // [rsp+28h] [rbp-91h] BYREF
  char v11; // [rsp+30h] [rbp-89h]
  char *v12; // [rsp+38h] [rbp-81h]
  _BYTE v13[32]; // [rsp+40h] [rbp-79h] BYREF
  tson::read_buffer *v14; // [rsp+60h] [rbp-59h] BYREF
  int v15; // [rsp+68h] [rbp-51h]
  const char *v16; // [rsp+70h] [rbp-49h]
  char v17; // [rsp+78h] [rbp-41h]
  char v18; // [rsp+79h] [rbp-40h]
  char v19; // [rsp+80h] [rbp-39h]

  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
    goto LABEL_23;
  tson::read_buffer::read_buffer((tson::read_buffer *)v13, *(const char **)(a2 + 24));
  v4 = (_QWORD *)(a1 + 8);
  tson::input_archive::input_archive((tson::input_archive *)&v14, (struct tson::read_buffer *)v13, *(_BYTE *)(a1 + 33));
  if ( (*(_DWORD *)(a1 + 20) & 0x40000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24) == 0LL;
    v10 = "name";
    v11 = 4;
    if ( v5 )
    {
      v12 = (char *)(a1 + 8);
      tson::input_archive::operator()<tson::nvp<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>> &>>(
        &v14,
        &v10);
      if ( *v4 )
        *(_QWORD *)(a1 + 24) = *v4;
    }
    else
    {
      v9 = 0;
      v12 = &v9;
      tson::input_archive::operator()<tson::nvp<tson::ansistring_skip_tag &>>((tson::input_archive *)&v14);
    }
  }
  v11 = 3;
  v10 = "log";
  v12 = (char *)(a1 + 96);
  tson::load_nothrow<tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>((tson::input_archive *)&v14);
  v17 = 6;
  v16 = "errors";
  tson::input_archive::search((tson::input_archive *)&v14);
  if ( !v18 )
    tson::input_archive::push_node(&v14);
  tson::load_nothrow<wil::StoredFailureInfo>((tson *)&v14);
  tson::input_archive::finishNode((tson::input_archive *)&v14);
  v17 = 5;
  v16 = "flags";
  tson::input_archive::search((tson::input_archive *)&v14);
  if ( !v18 )
    tson::input_archive::push_node(&v14);
  tson::load_nothrow<tip2::test_flag>((tson *)&v14);
  tson::input_archive::finishNode((tson::input_archive *)&v14);
  v6 = (_BYTE *)*((_QWORD *)v14 + 1);
  if ( (unsigned __int64)v6 >= *((_QWORD *)v14 + 2) || *v6 != 8 )
  {
    tip2::details::shared_data<1,0,0>::deserialize(a1, &v14);
LABEL_18:
    v8 = v15;
    goto LABEL_19;
  }
  v7 = tson::read_buffer::advance(v14);
  if ( !v7 || *v7 == 8 )
    goto LABEL_18;
  if ( v15 < 0 )
    goto LABEL_23;
  v8 = -2147023267;
  v15 = -2147023267;
LABEL_19:
  if ( v8 >= 0 && !v19 && !*((_BYTE *)v14 + 24) )
  {
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 16);
    return;
  }
LABEL_23:
  *(_DWORD *)(a1 + 64) |= 0x80000u;
}
