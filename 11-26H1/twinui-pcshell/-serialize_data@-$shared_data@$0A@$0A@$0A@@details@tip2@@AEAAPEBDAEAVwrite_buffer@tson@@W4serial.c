/*
 * XREFs of ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180280978
 * Callers:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028262C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180282C10 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1803BCCC4 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DEA88 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DEF3C (--$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uans.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DF2B8 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DF4B8 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800E003C (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x180146064 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 *     ?finish@write_buffer@tson@@QEAAJXZ @ 0x18019053C (-finish@write_buffer@tson@@QEAAJXZ.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x180280D54 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180333024 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip2::details::shared_data<0,0,0>::serialize_data(
        __int64 *a1,
        tson::write_buffer *a2,
        unsigned int a3)
{
  char v6; // r14
  tson::write_buffer *v7; // rdi
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // eax
  struct tson::output_archive *v14; // rdi
  struct tson::output_archive *v15; // r14
  struct wil::StoredFailureInfo *v16; // r8
  unsigned __int64 v17; // rdx
  int v18; // eax
  struct tson::output_archive *v19; // rdi
  struct tson::output_archive *v20; // r14
  struct tip2::test_flag *v21; // r8
  __int64 v22; // rcx
  char v24[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int128 v25; // [rsp+38h] [rbp-C8h]
  __int16 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+4Ah] [rbp-B6h]
  __int16 v28; // [rsp+4Eh] [rbp-B2h]
  unsigned __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h]
  const char *v31; // [rsp+70h] [rbp-90h] BYREF
  char v32; // [rsp+78h] [rbp-88h]
  __int16 v33; // [rsp+7Ah] [rbp-86h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  _BYTE v35[4]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v36[25]; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  tson::write_buffer *v39; // [rsp+100h] [rbp+0h]

  if ( !a3 )
    return 0LL;
  v6 = *((_BYTE *)a1 + 33);
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v34 = 0LL;
  v35[0] = 0;
  memset_0(v36, 0, sizeof(v36));
  v37 = 0LL;
  v38 = 0;
  v39 = a2;
  if ( *((_QWORD *)a2 + 259) < *((_QWORD *)a2 + 260) || tson::write_buffer::reserve(a2, 1uLL) )
    *(_BYTE *)(*((_QWORD *)a2 + 259))++ = 0x80;
  v7 = v39;
  if ( *((_QWORD *)v39 + 259) < *((_QWORD *)v39 + 260) || tson::write_buffer::reserve(v39, 1uLL) )
    *(_BYTE *)(*((_QWORD *)v7 + 259))++ = v6;
  if ( v37 >= 0x19 )
    v35[0] = 1;
  else
    v36[v37++] = 1;
  if ( (a3 & 4) != 0 )
  {
    v8 = *((_BYTE *)a1 + 33);
    if ( v8 )
    {
      v31 = "version";
      v32 = 7;
      v24[0] = v8;
      if ( tson::output_archive::write_type((__int64)&v31, 0, 12) )
        tson::write_buffer::push_back<unsigned char>((__int64)v39, v24);
    }
  }
  if ( (a3 & 1) != 0 )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x40000) == 0 )
    {
LABEL_25:
      v31 = "log";
      v32 = 3;
      tson::output_archive::startNode((tson::output_archive *)&v31);
      tson::save_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
        &v31,
        a1 + 12);
      tson::output_archive::finishNode((tson::output_archive *)&v31);
      v31 = "errors";
      v32 = 6;
      tson::output_archive::startNode((tson::output_archive *)&v31);
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v35) = 2;
      if ( v12 > 0xFFFF )
      {
        v13 = v38;
        if ( v38 >= 0 )
          v13 = -2147483637;
        v38 = v13;
      }
      v33 = v12;
      v14 = (struct tson::output_archive *)a1[9];
      v15 = (struct tson::output_archive *)((char *)v14 + 168 * a1[11]);
      while ( v14 != v15 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v31);
        tson::save_nothrow((tson *)&v31, v14, v16);
        tson::output_archive::finishNode((tson::output_archive *)&v31);
        v14 = (struct tson::output_archive *)((char *)v14 + 168);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v31);
      v31 = "flags";
      v32 = 5;
      tson::output_archive::startNode((tson::output_archive *)&v31);
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v35) = 2;
      if ( v17 > 0xFFFF )
      {
        v18 = v38;
        if ( v38 >= 0 )
          v18 = -2147483637;
        v38 = v18;
      }
      v33 = v17;
      v19 = (struct tson::output_archive *)a1[15];
      v20 = (struct tson::output_archive *)((char *)v19 + 104 * a1[17]);
      while ( v19 != v20 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v31);
        tson::save_nothrow((tson *)&v31, v19, v21);
        tson::output_archive::finishNode((tson::output_archive *)&v31);
        v19 = (struct tson::output_archive *)((char *)v19 + 104);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v31);
      goto LABEL_40;
    }
    v9 = a1[1];
    if ( v9 )
    {
      v10 = a1[1];
    }
    else
    {
      v9 = a1[3];
      v10 = v9;
      if ( !v9 )
      {
        v11 = 0LL;
LABEL_24:
        v25 = __PAIR128__(v11, v10);
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v31 = "name";
        v32 = 4;
        v29 = __PAIR128__(v11, v10);
        v30 = 0LL;
        tson::output_archive::write_string<tson::ansistring_tag>((__int64)&v31, v10, (const void **)&v29);
        goto LABEL_25;
      }
    }
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(v9 + v11) );
    goto LABEL_24;
  }
LABEL_40:
  v22 = *a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, const char **, _QWORD, _QWORD, _QWORD))tip2::details::g_test_interface_exception_guard)(
                             v22,
                             &v31,
                             a3,
                             0LL,
                             0LL) )
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16396;
      a1[21] = 0LL;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, const char **, _QWORD))(*(_QWORD *)v22 + 8LL))(v22, &v31, a3);
  }
  if ( v38 >= 0 && !v35[0] && (int)tson::write_buffer::finish(v39) >= 0 )
    return *((_QWORD *)a2 + 258);
  *((_DWORD *)a1 + 16) |= 0x100000u;
  return 0LL;
}
