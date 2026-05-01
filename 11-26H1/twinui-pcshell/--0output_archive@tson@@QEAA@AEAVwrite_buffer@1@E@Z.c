/*
 * XREFs of ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x180178434
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1802804C8 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1803BDC04 (-serialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18069B244 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800E003C (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802B8924 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcpy_s_3 @ 0x1802D97A0 (memcpy_s_3.c)
 */

tson::output_archive *__fastcall tson::output_archive::output_archive(
        tson::output_archive *this,
        struct tson::write_buffer *a2,
        char a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  rsize_t v13; // r15
  char *v14; // rax
  char *v15; // r14
  const void *v16; // r8
  rsize_t v17; // rbx

  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 0;
  *((_WORD *)this + 5) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  memset_0((char *)this + 28, 0, 0x64uLL);
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = a2;
  if ( *((_QWORD *)a2 + 259) < *((_QWORD *)a2 + 260) || tson::write_buffer::reserve(a2, 1uLL) )
    *(_BYTE *)(*((_QWORD *)a2 + 259))++ = 0x80;
  v6 = *((_QWORD *)this + 18);
  v7 = *(_QWORD *)(v6 + 2080);
  v8 = *(char **)(v6 + 2072);
  if ( (unsigned __int64)v8 < v7 )
    goto LABEL_4;
  v11 = v7 - *(_QWORD *)(v6 + 2064);
  v12 = 1LL;
  if ( v11 > 1 )
    v12 = v11;
  v13 = 2 * v12;
  v14 = (char *)CoTaskMemAlloc(2 * v12);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(const void **)(v6 + 2064);
    v17 = *(_QWORD *)(v6 + 2072) - (_QWORD)v16;
    memcpy_s_3(v14, v13, v16, v17);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      v6,
      v15);
    v8 = &v15[v17];
    *(_QWORD *)(v6 + 2064) = v15;
    *(_QWORD *)(v6 + 2072) = &v15[v17];
    *(_QWORD *)(v6 + 2080) = &v15[v13];
LABEL_4:
    *v8 = a3;
    ++*(_QWORD *)(v6 + 2072);
    goto LABEL_5;
  }
  *(_BYTE *)(v6 + 8) = 1;
LABEL_5:
  v9 = *((_QWORD *)this + 16);
  if ( v9 >= 0x19 )
  {
    *((_BYTE *)this + 24) = 1;
  }
  else
  {
    *((_DWORD *)this + v9 + 7) = 1;
    ++*((_QWORD *)this + 16);
  }
  return this;
}
