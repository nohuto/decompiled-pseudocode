/*
 * XREFs of ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028BB7C
 * Callers:
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028A258 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18028B7E8 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z @ 0x1800DEB00 (--$process@AEAUansistring_tag@tson@@@output_archive@tson@@AEAAXAEAUansistring_tag@1@@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF0E4 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DFC38 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x180156504 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 *     ?finish@write_buffer@tson@@QEAAJXZ @ 0x1801977F8 (-finish@write_buffer@tson@@QEAAJXZ.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x18028BF34 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1803338DC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip2::details::shared_data<0,0,0>::serialize_data(
        __int64 *a1,
        tson::write_buffer *a2,
        unsigned int a3)
{
  char v6; // r14
  tson::write_buffer *v7; // rbx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int v12; // eax
  struct tson::output_archive *v13; // rbx
  struct tson::output_archive *v14; // r14
  struct wil::StoredFailureInfo *v15; // r8
  unsigned __int64 v16; // rdx
  int v17; // eax
  struct tson::output_archive *v18; // rbx
  struct tson::output_archive *v19; // r14
  struct tip2::test_flag *v20; // r8
  __int64 v21; // rcx
  char v23[8]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v24; // [rsp+38h] [rbp-C8h]
  char v25; // [rsp+48h] [rbp-B8h]
  int v26; // [rsp+49h] [rbp-B7h]
  __int16 v27; // [rsp+4Dh] [rbp-B3h]
  char v28; // [rsp+4Fh] [rbp-B1h]
  const char *v29; // [rsp+50h] [rbp-B0h]
  char v30; // [rsp+58h] [rbp-A8h]
  __m128i v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  const char *v33; // [rsp+80h] [rbp-80h] BYREF
  char v34; // [rsp+88h] [rbp-78h]
  __int16 v35; // [rsp+8Ah] [rbp-76h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  _BYTE v37[4]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v38[25]; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned __int64 v39; // [rsp+100h] [rbp+0h]
  int v40; // [rsp+108h] [rbp+8h]
  tson::write_buffer *v41; // [rsp+110h] [rbp+10h]

  if ( !a3 )
    return 0LL;
  v6 = *((_BYTE *)a1 + 33);
  v33 = 0LL;
  v34 = 0;
  v35 = 0;
  v36 = 0LL;
  v37[0] = 0;
  memset_0(v38, 0, sizeof(v38));
  v39 = 0LL;
  v40 = 0;
  v41 = a2;
  if ( *((_QWORD *)a2 + 259) < *((_QWORD *)a2 + 260) || tson::write_buffer::reserve(a2, 1uLL) )
    *(_BYTE *)(*((_QWORD *)a2 + 259))++ = 0x80;
  v7 = v41;
  if ( *((_QWORD *)v41 + 259) < *((_QWORD *)v41 + 260) || tson::write_buffer::reserve(v41, 1uLL) )
    *(_BYTE *)(*((_QWORD *)v7 + 259))++ = v6;
  if ( v39 >= 0x19 )
    v37[0] = 1;
  else
    v38[v39++] = 1;
  if ( (a3 & 4) != 0 )
  {
    v8 = *((_BYTE *)a1 + 33);
    if ( v8 )
    {
      v33 = "version";
      v34 = 7;
      v23[0] = v8;
      if ( tson::output_archive::write_type((__int64)&v33, 0, 12) )
        tson::write_buffer::push_back<unsigned char>((__int64)v41, v23);
    }
  }
  if ( (a3 & 1) != 0 )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x40000) == 0 )
    {
LABEL_25:
      v33 = "log";
      v34 = 3;
      tson::output_archive::startNode((tson::output_archive *)&v33);
      tson::save_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
        &v33,
        a1 + 12);
      tson::output_archive::finishNode((tson::output_archive *)&v33);
      v33 = "errors";
      v34 = 6;
      tson::output_archive::startNode((tson::output_archive *)&v33);
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v37) = 2;
      if ( v11 > 0xFFFF )
      {
        v12 = v40;
        if ( v40 >= 0 )
          v12 = -2147483637;
        v40 = v12;
      }
      v35 = v11;
      v13 = (struct tson::output_archive *)a1[9];
      v14 = (struct tson::output_archive *)((char *)v13 + 168 * a1[11]);
      while ( v13 != v14 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v33);
        tson::save_nothrow((tson *)&v33, v13, v15);
        tson::output_archive::finishNode((tson::output_archive *)&v33);
        v13 = (struct tson::output_archive *)((char *)v13 + 168);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v33);
      v33 = "flags";
      v34 = 5;
      tson::output_archive::startNode((tson::output_archive *)&v33);
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v37) = 2;
      if ( v16 > 0xFFFF )
      {
        v17 = v40;
        if ( v40 >= 0 )
          v17 = -2147483637;
        v40 = v17;
      }
      v35 = v16;
      v18 = (struct tson::output_archive *)a1[15];
      v19 = (struct tson::output_archive *)((char *)v18 + 104 * a1[17]);
      while ( v18 != v19 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v33);
        tson::save_nothrow((tson *)&v33, v18, v20);
        tson::output_archive::finishNode((tson::output_archive *)&v33);
        v18 = (struct tson::output_archive *)((char *)v18 + 104);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v33);
      goto LABEL_40;
    }
    v9 = a1[1];
    if ( v9 )
    {
      v24.m128i_i64[0] = a1[1];
    }
    else
    {
      v9 = a1[3];
      v24.m128i_i64[0] = v9;
      if ( !v9 )
      {
        v24 = 0uLL;
LABEL_24:
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = "name";
        v30 = 4;
        v31 = v24;
        v32 = 0LL;
        v33 = "name";
        v34 = 4;
        tson::output_archive::process<tson::ansistring_tag &>((__int64)&v33, &v31);
        goto LABEL_25;
      }
    }
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v9 + v10) );
    v24.m128i_i64[1] = v10;
    goto LABEL_24;
  }
LABEL_40:
  v21 = *a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v21, &v33, a3, 0LL, 0LL) )
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16396;
      a1[21] = 0LL;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, const char **, _QWORD))(*(_QWORD *)v21 + 8LL))(v21, &v33, a3);
  }
  if ( v40 >= 0 && !v37[0] && (int)tson::write_buffer::finish(v41) >= 0 )
    return *((_QWORD *)a2 + 258);
  *((_DWORD *)a1 + 16) |= 0x100000u;
  return 0LL;
}
