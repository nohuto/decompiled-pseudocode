/*
 * XREFs of ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028B494
 * Callers:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028B08C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18028B230 (-evaluate_and_report@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028CC38 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z @ 0x1800DEB00 (--$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DF53C (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DFC38 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x180156504 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x18018365C (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?finish@write_buffer@tson@@QEAAJXZ @ 0x1801977F8 (-finish@write_buffer@tson@@QEAAJXZ.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x18028BF34 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1803338DC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip2::details::shared_data<1,0,0>::serialize_data(
        __int64 *a1,
        struct tson::write_buffer *a2,
        unsigned int a3)
{
  _BYTE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int v10; // eax
  struct tson::output_archive *v11; // rbx
  struct tson::output_archive *v12; // rsi
  struct wil::StoredFailureInfo *v13; // r8
  unsigned __int64 v14; // rdx
  int v15; // eax
  struct tson::output_archive *v16; // rbx
  struct tson::output_archive *v17; // rsi
  struct tip2::test_flag *v18; // r8
  __int64 v19; // rcx
  __m128i v21; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C0h]
  char v23; // [rsp+50h] [rbp-B0h]
  __m128i v24; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+68h] [rbp-98h] BYREF
  char v26; // [rsp+78h] [rbp-88h]
  __int16 v27; // [rsp+7Ah] [rbp-86h]
  _BYTE v28[112]; // [rsp+88h] [rbp-78h] BYREF
  int v29; // [rsp+F8h] [rbp-8h]
  tson::write_buffer *v30; // [rsp+100h] [rbp+0h]

  if ( !a3 )
    return 0LL;
  v6 = (char *)a1 + 33;
  tson::output_archive::output_archive((tson::output_archive *)((char *)&v25 + 8), a2, *((_BYTE *)a1 + 33));
  if ( (a3 & 4) != 0 && *v6 )
  {
    v21.m128i_i64[0] = (__int64)"version";
    v21.m128i_i8[8] = 7;
    *(_QWORD *)&v22 = v6;
    tson::output_archive::operator()<tson::nvp<unsigned char &>>(
      (tson::output_archive *)((char *)&v25 + 8),
      (__int64)&v21);
  }
  if ( (a3 & 1) != 0 )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x40000) == 0 )
    {
LABEL_15:
      *((_QWORD *)&v25 + 1) = "log";
      v26 = 3;
      tson::output_archive::startNode((tson::output_archive *)((char *)&v25 + 8));
      tson::save_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
        (char *)&v25 + 8,
        a1 + 12);
      tson::output_archive::finishNode((tson::output_archive *)((char *)&v25 + 8));
      *((_QWORD *)&v25 + 1) = "errors";
      v26 = 6;
      tson::output_archive::startNode((tson::output_archive *)((char *)&v25 + 8));
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v28) = 2;
      if ( v9 > 0xFFFF )
      {
        v10 = v29;
        if ( v29 >= 0 )
          v10 = -2147483637;
        v29 = v10;
      }
      v27 = v9;
      v11 = (struct tson::output_archive *)a1[9];
      v12 = (struct tson::output_archive *)((char *)v11 + 168 * a1[11]);
      while ( v11 != v12 )
      {
        tson::output_archive::startNode((tson::output_archive *)((char *)&v25 + 8));
        tson::save_nothrow((tson *)((char *)&v25 + 8), v11, v13);
        tson::output_archive::finishNode((tson::output_archive *)((char *)&v25 + 8));
        v11 = (struct tson::output_archive *)((char *)v11 + 168);
      }
      tson::output_archive::finishNode((tson::output_archive *)((char *)&v25 + 8));
      *((_QWORD *)&v25 + 1) = "flags";
      v26 = 5;
      tson::output_archive::startNode((tson::output_archive *)((char *)&v25 + 8));
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v28) = 2;
      if ( v14 > 0xFFFF )
      {
        v15 = v29;
        if ( v29 >= 0 )
          v15 = -2147483637;
        v29 = v15;
      }
      v27 = v14;
      v16 = (struct tson::output_archive *)a1[15];
      v17 = (struct tson::output_archive *)((char *)v16 + 104 * a1[17]);
      while ( v16 != v17 )
      {
        tson::output_archive::startNode((tson::output_archive *)((char *)&v25 + 8));
        tson::save_nothrow((tson *)((char *)&v25 + 8), v16, v18);
        tson::output_archive::finishNode((tson::output_archive *)((char *)&v25 + 8));
        v16 = (struct tson::output_archive *)((char *)v16 + 104);
      }
      tson::output_archive::finishNode((tson::output_archive *)((char *)&v25 + 8));
      goto LABEL_30;
    }
    v7 = a1[1];
    if ( v7 )
    {
      v21.m128i_i64[0] = a1[1];
    }
    else
    {
      v7 = a1[3];
      v21.m128i_i64[0] = v7;
      if ( !v7 )
      {
        v21 = 0uLL;
LABEL_14:
        LOBYTE(v22) = 0;
        *(_DWORD *)((char *)&v22 + 1) = 0;
        *(_WORD *)((char *)&v22 + 5) = 0;
        BYTE7(v22) = 0;
        *((_QWORD *)&v22 + 1) = "name";
        v23 = 4;
        v24 = v21;
        v25 = v22;
        v26 = 4;
        tson::output_archive::process<tson::ansistring_tag &>((__int64)&v25 + 8, &v24);
        goto LABEL_15;
      }
    }
    v8 = -1LL;
    do
      ++v8;
    while ( *(_BYTE *)(v7 + v8) );
    v21.m128i_i64[1] = v8;
    goto LABEL_14;
  }
LABEL_30:
  v19 = *a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v19, (char *)&v25 + 8, a3, 0LL, 0LL) )
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16396;
      a1[21] = 0LL;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v19 + 8LL))(v19, (char *)&v25 + 8, a3);
  }
  if ( v29 >= 0 && !v28[0] && (int)tson::write_buffer::finish(v30) >= 0 )
    return *((_QWORD *)a2 + 258);
  *((_DWORD *)a1 + 16) |= 0x100000u;
  return 0LL;
}
