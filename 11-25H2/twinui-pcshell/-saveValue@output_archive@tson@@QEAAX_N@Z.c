/*
 * XREFs of ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800DD26C
 * Callers:
 *     ??$process@V?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEA_N@2@V42@V42@V?$nvp@AEAJ@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x1805A2B48 (--$process@V-$nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C50 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opt.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE278 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

void __fastcall tson::output_archive::saveValue(tson::output_archive *this, char a2)
{
  __int64 v2; // rax
  char *v5; // rsi
  __int64 v6; // rbx
  tson::write_buffer *v7; // rbx
  tson::write_buffer *v8; // rbx
  __int64 v9; // rsi
  char *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  rsize_t v13; // rsi
  const void *v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rdi
  char *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  rsize_t v21; // rbp
  char *v22; // rax
  char *v23; // rsi
  const void *v24; // r8
  rsize_t v25; // r14
  void *v26; // r15
  DWORD v27; // ebx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  rsize_t v30; // rbp
  char *v31; // rax
  char *v32; // r14
  const void *v33; // r8
  rsize_t v34; // r15
  void *v35; // r12
  DWORD LastError; // ebx
  __int64 v37; // rbx

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    v5 = (char *)this + 4 * v2 + 24;
  }
  else
  {
    *((_BYTE *)this + 24) = 1;
    v5 = (char *)this + 28;
  }
  if ( *(_DWORD *)v5 == 2 )
  {
    *(_DWORD *)v5 = 3;
    v37 = *((_QWORD *)this + 18);
    if ( *(_QWORD *)(v37 + 2072) < *(_QWORD *)(v37 + 2080)
      || tson::write_buffer::reserve(*((tson::write_buffer **)this + 18), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v37 + 2072))++ = 3;
    }
    tson::write_buffer::push_back(*((tson::write_buffer **)this + 18), (char *)this + 10, 2uLL);
    *((_WORD *)this + 5) = 0;
  }
  else if ( !*(_DWORD *)v5 )
  {
    *(_DWORD *)v5 = 1;
    v6 = *((_QWORD *)this + 18);
    if ( *(_QWORD *)(v6 + 2072) < *(_QWORD *)(v6 + 2080)
      || tson::write_buffer::reserve(*((tson::write_buffer **)this + 18), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v6 + 2072))++ = 1;
    }
  }
  *((_QWORD *)this + 2) = 0LL;
  if ( *(_DWORD *)v5 == 3 )
    goto LABEL_20;
  if ( !a2 )
  {
    v7 = (tson::write_buffer *)*((_QWORD *)this + 18);
    *(_QWORD *)this = 0LL;
    if ( *((_QWORD *)v7 + 259) < *((_QWORD *)v7 + 260) || tson::write_buffer::reserve(v7, 1uLL) )
      *(_BYTE *)(*((_QWORD *)v7 + 259))++ = 6;
    return;
  }
  if ( !*(_QWORD *)this )
  {
    *((_BYTE *)this + 8) = 1;
    *(_QWORD *)this = "-";
  }
  v8 = (tson::write_buffer *)*((_QWORD *)this + 18);
  *((_QWORD *)this + 2) = *((_QWORD *)v8 + 259) - *((_QWORD *)v8 + 258);
  if ( *((_QWORD *)v8 + 259) < *((_QWORD *)v8 + 260) || tson::write_buffer::reserve(v8, 1uLL) )
    *(_BYTE *)(*((_QWORD *)v8 + 259))++ = 5;
  v9 = *((_QWORD *)this + 18);
  v10 = *(char **)(v9 + 2072);
  v11 = *(_QWORD *)(v9 + 2080);
  if ( (unsigned __int64)v10 < v11 )
    goto LABEL_16;
  v28 = v11 - *(_QWORD *)(v9 + 2064);
  v29 = 1LL;
  if ( v28 > 1 )
    v29 = v28;
  v30 = 2 * v29;
  v31 = (char *)CoTaskMemAlloc(2 * v29);
  v32 = v31;
  if ( v31 )
  {
    v33 = *(const void **)(v9 + 2064);
    v34 = *(_QWORD *)(v9 + 2072) - (_QWORD)v33;
    memcpy_s_3(v31, v30, v33, v34);
    v35 = *(void **)v9;
    if ( *(_QWORD *)v9 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v35);
      SetLastError(LastError);
    }
    *(_QWORD *)v9 = v32;
    v10 = &v32[v34];
    *(_QWORD *)(v9 + 2072) = &v32[v34];
    *(_QWORD *)(v9 + 2080) = &v32[v30];
    *(_QWORD *)(v9 + 2064) = v32;
LABEL_16:
    *v10 = *((_BYTE *)this + 8);
    ++*(_QWORD *)(v9 + 2072);
    goto LABEL_17;
  }
  *(_BYTE *)(v9 + 8) = 1;
LABEL_17:
  v12 = *((_QWORD *)this + 18);
  v13 = *((unsigned __int8 *)this + 8);
  v14 = *(const void **)this;
  if ( *(_QWORD *)(v12 + 2080) - *(_QWORD *)(v12 + 2072) >= v13
    || tson::write_buffer::reserve(*((tson::write_buffer **)this + 18), *((unsigned __int8 *)this + 8)) )
  {
    memcpy_s_3(*(void *const *)(v12 + 2072), *(_QWORD *)(v12 + 2080) - *(_QWORD *)(v12 + 2072), v14, v13);
    *(_QWORD *)(v12 + 2072) += v13;
  }
  *(_QWORD *)this = 0LL;
LABEL_20:
  v15 = *((_QWORD *)this + 18);
  if ( *(_QWORD *)(v15 + 2072) < *(_QWORD *)(v15 + 2080)
    || tson::write_buffer::reserve(*((tson::write_buffer **)this + 18), 1uLL) )
  {
    *(_BYTE *)(*(_QWORD *)(v15 + 2072))++ = 10;
  }
  v16 = *((_QWORD *)this + 18);
  v17 = *(char **)(v16 + 2072);
  v18 = *(_QWORD *)(v16 + 2080);
  if ( (unsigned __int64)v17 >= v18 )
  {
    v19 = v18 - *(_QWORD *)(v16 + 2064);
    v20 = 1LL;
    if ( v19 > 1 )
      v20 = v19;
    v21 = 2 * v20;
    v22 = (char *)CoTaskMemAlloc(2 * v20);
    v23 = v22;
    if ( !v22 )
    {
      *(_BYTE *)(v16 + 8) = 1;
      return;
    }
    v24 = *(const void **)(v16 + 2064);
    v25 = *(_QWORD *)(v16 + 2072) - (_QWORD)v24;
    memcpy_s_3(v22, v21, v24, v25);
    v26 = *(void **)v16;
    if ( *(_QWORD *)v16 )
    {
      v27 = GetLastError();
      CoTaskMemFree(v26);
      SetLastError(v27);
    }
    *(_QWORD *)v16 = v23;
    v17 = &v23[v25];
    *(_QWORD *)(v16 + 2072) = &v23[v25];
    *(_QWORD *)(v16 + 2080) = &v23[v21];
    *(_QWORD *)(v16 + 2064) = v23;
  }
  *v17 = a2;
  ++*(_QWORD *)(v16 + 2072);
}
