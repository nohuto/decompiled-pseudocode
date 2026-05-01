/*
 * XREFs of ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x18028C368
 * Callers:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180289A9C (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18028AC84 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028B08C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 * Callees:
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x1801854A8 (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 *     ??0read_buffer@tson@@QEAA@PEBD@Z @ 0x1801DD9BC (--0read_buffer@tson@@QEAA@PEBD@Z.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18028C588 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_poli_ea_18028C588.c)
 *     ?deserialize@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEAVinput_archive@tson@@@Z @ 0x18028C624 (-deserialize@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEAVinput_archive@tson@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$?RV?$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAUansistring_skip_tag@tson@@@1@@Z @ 0x180328E58 (--$-RV-$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA.c)
 *     ??$?RV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@1@@Z @ 0x180328EDC (--$-RV-$nvp@AEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFr.c)
 */

void __fastcall tip2::details::shared_data<1,0,0>::deserialize_data(__int64 a1, __int64 a2)
{
  char v4; // bl
  unsigned __int8 *v5; // rax
  int v6; // eax
  unsigned __int8 *v7; // rax
  int v8; // r8d
  int v9; // eax
  bool v10; // zf
  _BYTE *v11; // rax
  unsigned __int8 *v12; // rax
  int v13; // eax
  char v14; // [rsp+20h] [rbp-E0h] BYREF
  const char *v15; // [rsp+28h] [rbp-D8h] BYREF
  char v16; // [rsp+30h] [rbp-D0h]
  char *v17; // [rsp+38h] [rbp-C8h]
  const char *v18; // [rsp+40h] [rbp-C0h]
  char v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  const char *v21; // [rsp+58h] [rbp-A8h]
  char v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  _BYTE v24[32]; // [rsp+70h] [rbp-90h] BYREF
  tson::read_buffer *v25; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  __int16 v28; // [rsp+A8h] [rbp-58h]
  char v29; // [rsp+B0h] [rbp-50h]
  _DWORD v30[25]; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned __int64 v31; // [rsp+118h] [rbp+18h]

  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
    goto LABEL_32;
  tson::read_buffer::read_buffer((tson::read_buffer *)v24, *(const char **)(a2 + 24));
  v4 = *(_BYTE *)(a1 + 33);
  v26 = 0;
  v27 = 0LL;
  v28 = 0;
  v25 = (tson::read_buffer *)v24;
  v29 = 0;
  memset_0(v30, 0, sizeof(v30));
  v31 = 0LL;
  v5 = tson::read_buffer::advance(v25);
  if ( v5 && *v5 != 0x80 )
  {
    v6 = v26;
    if ( v26 >= 0 )
      v6 = -2147024119;
    v26 = v6;
  }
  v7 = tson::read_buffer::advance(v25);
  if ( v7 && v4 != *v7 )
  {
    v9 = v26;
    if ( v26 >= 0 )
      v9 = v8;
    v26 = v9;
  }
  if ( v31 >= 0x19 )
    v29 = 1;
  else
    v30[v31++] = 0;
  if ( (*(_DWORD *)(a1 + 20) & 0x40000) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 24) == 0LL;
    v15 = "name";
    v16 = 4;
    if ( v10 )
    {
      v17 = (char *)(a1 + 8);
      tson::input_archive::operator()<tson::nvp<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>> &>>(
        &v25,
        &v15);
      if ( *(_QWORD *)(a1 + 8) )
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v14 = 0;
      v17 = &v14;
      tson::input_archive::operator()<tson::nvp<tson::ansistring_skip_tag &>>((tson::input_archive *)&v25);
    }
  }
  v16 = 5;
  v15 = "flags";
  v19 = 6;
  v17 = (char *)(a1 + 120);
  v22 = 3;
  v18 = "errors";
  v20 = a1 + 72;
  v21 = "log";
  v23 = a1 + 96;
  tson::input_archive::operator()<tson::nvp<tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip2::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>((tson *)&v25);
  v11 = (_BYTE *)*((_QWORD *)v25 + 1);
  if ( (unsigned __int64)v11 >= *((_QWORD *)v25 + 2) || *v11 != 8 )
  {
    tip2::details::shared_data<1,0,0>::deserialize(a1, &v25);
LABEL_27:
    v13 = v26;
    goto LABEL_28;
  }
  v12 = tson::read_buffer::advance(v25);
  if ( !v12 || *v12 == 8 )
    goto LABEL_27;
  if ( v26 < 0 )
    goto LABEL_32;
  v13 = -2147023267;
  v26 = -2147023267;
LABEL_28:
  if ( v13 >= 0 && !v29 && !*((_BYTE *)v25 + 24) )
  {
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 16);
    return;
  }
LABEL_32:
  *(_DWORD *)(a1 + 64) |= 0x80000u;
}
