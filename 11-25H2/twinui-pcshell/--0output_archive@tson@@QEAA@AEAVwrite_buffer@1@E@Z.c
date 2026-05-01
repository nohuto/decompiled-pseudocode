/*
 * XREFs of ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x18018365C
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18028B494 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180674510 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

tson::output_archive *__fastcall tson::output_archive::output_archive(
        tson::output_archive *this,
        struct tson::write_buffer *a2,
        char a3)
{
  __int64 v6; // rdi
  char *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  rsize_t v13; // rbp
  char *v14; // rax
  char *v15; // r14
  const void *v16; // r8
  rsize_t v17; // r15
  void *v18; // r12
  DWORD LastError; // ebx

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
  v7 = *(char **)(v6 + 2072);
  v8 = *(_QWORD *)(v6 + 2080);
  if ( (unsigned __int64)v7 < v8 )
    goto LABEL_4;
  v11 = v8 - *(_QWORD *)(v6 + 2064);
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
    v18 = *(void **)v6;
    if ( *(_QWORD *)v6 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v18);
      SetLastError(LastError);
    }
    *(_QWORD *)v6 = v15;
    v7 = &v15[v17];
    *(_QWORD *)(v6 + 2072) = &v15[v17];
    *(_QWORD *)(v6 + 2080) = &v15[v13];
    *(_QWORD *)(v6 + 2064) = v15;
LABEL_4:
    *v7 = a3;
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
