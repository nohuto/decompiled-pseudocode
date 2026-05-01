/*
 * XREFs of ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DD6C4
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1803338DC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C50 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opt.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE278 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

__int64 __fastcall tson::output_archive::operator()<bool &>(__int64 a1, char *a2)
{
  __int64 v2; // rax
  char v3; // r13
  _DWORD *v5; // rsi
  __int64 v6; // rbx
  tson::write_buffer *v7; // rbx
  char *v8; // rcx
  char *v10; // rbx
  tson::write_buffer **v11; // rsi
  tson::write_buffer *v12; // rbp
  tson::write_buffer **v13; // r14
  char *v14; // r15
  tson::write_buffer *v15; // rbp
  char v16; // al
  tson::write_buffer *v17; // rbp
  rsize_t v18; // rbx
  const void *v19; // r14
  tson::write_buffer *v20; // rbx
  tson::write_buffer *v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  rsize_t v25; // rbp
  char *v26; // rax
  char *v27; // r14
  const void *v28; // r8
  rsize_t v29; // r15
  void *v30; // r12
  DWORD LastError; // ebx
  __int64 v32; // rbx

  v2 = *(_QWORD *)(a1 + 128);
  v3 = *a2;
  if ( v2 )
  {
    v5 = (_DWORD *)(a1 + 24 + 4 * v2);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    v5 = (_DWORD *)(a1 + 28);
  }
  if ( *v5 == 2 )
  {
    *v5 = 3;
    v32 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v32 + 2072) < *(_QWORD *)(v32 + 2080)
      || tson::write_buffer::reserve(*(tson::write_buffer **)(a1 + 144), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v32 + 2072))++ = 3;
    }
    tson::write_buffer::push_back(*(tson::write_buffer **)(a1 + 144), (const void *)(a1 + 10), 2uLL);
    *(_WORD *)(a1 + 10) = 0;
  }
  else if ( !*v5 )
  {
    *v5 = 1;
    v6 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v6 + 2072) < *(_QWORD *)(v6 + 2080)
      || tson::write_buffer::reserve(*(tson::write_buffer **)(a1 + 144), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v6 + 2072))++ = 1;
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( *v5 == 3 )
  {
    v11 = (tson::write_buffer **)(a1 + 144);
  }
  else
  {
    if ( !v3 )
    {
      v7 = *(tson::write_buffer **)(a1 + 144);
      *(_QWORD *)a1 = 0LL;
      if ( *((_QWORD *)v7 + 259) < *((_QWORD *)v7 + 260) || tson::write_buffer::reserve(v7, 1uLL) )
        *(_BYTE *)(*((_QWORD *)v7 + 259))++ = 6;
      return a1;
    }
    v10 = (char *)(a1 + 8);
    if ( !*(_QWORD *)a1 )
    {
      *v10 = 1;
      *(_QWORD *)a1 = "-";
    }
    v11 = (tson::write_buffer **)(a1 + 144);
    v12 = *(tson::write_buffer **)(a1 + 144);
    *(_QWORD *)(a1 + 16) = *((_QWORD *)v12 + 259) - *((_QWORD *)v12 + 258);
    if ( *((_QWORD *)v12 + 259) < *((_QWORD *)v12 + 260)
      || (v13 = (tson::write_buffer **)(a1 + 144), v14 = (char *)(a1 + 8), tson::write_buffer::reserve(v12, 1uLL)) )
    {
      v13 = (tson::write_buffer **)(a1 + 144);
      v14 = (char *)(a1 + 8);
      *(_BYTE *)(*((_QWORD *)v12 + 259))++ = 5;
    }
    v15 = *v11;
    if ( *((_QWORD *)*v11 + 259) < *((_QWORD *)*v11 + 260) || tson::write_buffer::reserve(*v11, 1uLL) )
    {
      v16 = *v10;
      v11 = v13;
      v10 = v14;
      *(_BYTE *)(*((_QWORD *)v15 + 259))++ = v16;
    }
    v17 = *v11;
    v18 = (unsigned __int8)*v10;
    v19 = *(const void **)a1;
    if ( *((_QWORD *)*v11 + 260) - *((_QWORD *)*v11 + 259) >= v18 || tson::write_buffer::reserve(*v11, v18) )
    {
      memcpy_s_3(*((void *const *)v17 + 259), *((_QWORD *)v17 + 260) - *((_QWORD *)v17 + 259), v19, v18);
      *((_QWORD *)v17 + 259) += v18;
    }
    *(_QWORD *)a1 = 0LL;
  }
  v20 = *v11;
  if ( *((_QWORD *)*v11 + 259) < *((_QWORD *)*v11 + 260) || tson::write_buffer::reserve(*v11, 1uLL) )
    *(_BYTE *)(*((_QWORD *)v20 + 259))++ = 10;
  v21 = *v11;
  v8 = (char *)*((_QWORD *)v21 + 259);
  v22 = *((_QWORD *)v21 + 260);
  if ( (unsigned __int64)v8 >= v22 )
  {
    v23 = v22 - *((_QWORD *)v21 + 258);
    v24 = 1LL;
    if ( v23 > 1 )
      v24 = v23;
    v25 = 2 * v24;
    v26 = (char *)CoTaskMemAlloc(2 * v24);
    v27 = v26;
    if ( !v26 )
    {
      *((_BYTE *)v21 + 8) = 1;
      return a1;
    }
    v28 = (const void *)*((_QWORD *)v21 + 258);
    v29 = *((_QWORD *)v21 + 259) - (_QWORD)v28;
    memcpy_s_3(v26, v25, v28, v29);
    v30 = *(void **)v21;
    if ( *(_QWORD *)v21 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v30);
      SetLastError(LastError);
    }
    *(_QWORD *)v21 = v27;
    v8 = &v27[v29];
    *((_QWORD *)v21 + 259) = &v27[v29];
    *((_QWORD *)v21 + 260) = &v27[v25];
    *((_QWORD *)v21 + 258) = v27;
  }
  *v8 = v3;
  ++*((_QWORD *)v21 + 259);
  return a1;
}
