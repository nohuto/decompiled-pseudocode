/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180005710
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x1800038B8 (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800037A4 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z @ 0x180003828 (--$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_N_K@Z @ 0x1800062A4 (-create@shared_buffer@details@wil@@QEAA_N_K@Z.c)
 *     memset_0 @ 0x18000FE42 (memset_0.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdi
  void **v35; // r14
  volatile signed __int32 *v36; // rcx
  unsigned __int64 v37; // rdi
  void *v38; // rbx
  HANDLE ProcessHeap; // rax
  char *v40; // rcx
  char *v41; // rbx
  char *v42; // rax
  char *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char *v46; // rax
  char *v47; // rax
  char *v48; // rax
  char *v49; // rax
  char *v50; // rax
  char *v51; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
  v4 = *((_QWORD *)a2 + 3);
  v5 = 2LL;
  if ( v4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v4 + 2 * v7) );
    v6 = 2 * v7 + 2;
  }
  else
  {
    v6 = 2LL;
  }
  v8 = *((_QWORD *)a2 + 5);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *((_QWORD *)a2 + 6);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *((_QWORD *)a2 + 7);
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v14 + v16) );
    v15 = v16 + 1;
  }
  else
  {
    v15 = 1LL;
  }
  v17 = *((_QWORD *)a2 + 9);
  if ( v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v17 + v19) );
    v18 = v19 + 1;
  }
  else
  {
    v18 = 1LL;
  }
  v20 = *((_QWORD *)a2 + 16);
  if ( v20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v20 + v22) );
    v21 = v22 + 1;
  }
  else
  {
    v21 = 1LL;
  }
  v23 = *((_QWORD *)a2 + 14);
  if ( v23 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v23 + v25) );
    v24 = v25 + 1;
  }
  else
  {
    v24 = 1LL;
  }
  v26 = *((_QWORD *)a2 + 15);
  if ( v26 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v27 = 2 * v28 + 2;
  }
  else
  {
    v27 = 2LL;
  }
  v29 = *((_QWORD *)a2 + 11);
  if ( v29 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(v29 + v31) );
    v30 = v31 + 1;
  }
  else
  {
    v30 = 1LL;
  }
  v32 = *((_QWORD *)a2 + 12);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v5 = 2 * v33 + 2;
  }
  v34 = v15 + v18 + v21 + v24 + v27 + v5 + v30;
  v35 = (void **)((char *)this + 152);
  v36 = (volatile signed __int32 *)*((_QWORD *)this + 19);
  v37 = v6 + v9 + v12 + v34;
  if ( v36 )
  {
    if ( *v36 == 1 && *((_QWORD *)this + 20) >= v37 )
      goto LABEL_57;
    if ( _InterlockedExchangeAdd(v36, 0xFFFFFFFF) == 1 )
    {
      v38 = *v35;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v38);
    }
    *v35 = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  wil::details::shared_buffer::create((wil::StoredFailureInfo *)((char *)this + 152), v37);
LABEL_57:
  v40 = (char *)(((unsigned __int64)*v35 + 4) & -(__int64)(*v35 != 0LL));
  if ( v40 )
  {
    v41 = &v40[*((_QWORD *)this + 20)];
    v42 = wil::details::WriteResultString<wchar_t const *>(v40, v41, *((_WORD **)a2 + 3), (_QWORD *)this + 3);
    v43 = wil::details::WriteResultString<char const *>(v42, v41, *((_BYTE **)a2 + 5), (_QWORD *)this + 5);
    v44 = wil::details::WriteResultString<char const *>(v43, v41, *((_BYTE **)a2 + 6), (_QWORD *)this + 6);
    v45 = wil::details::WriteResultString<char const *>(v44, v41, *((_BYTE **)a2 + 7), (_QWORD *)this + 7);
    v46 = wil::details::WriteResultString<char const *>(v45, v41, *((_BYTE **)a2 + 9), (_QWORD *)this + 9);
    v47 = wil::details::WriteResultString<char const *>(v46, v41, *((_BYTE **)a2 + 16), (_QWORD *)this + 16);
    v48 = wil::details::WriteResultString<char const *>(v47, v41, *((_BYTE **)a2 + 14), (_QWORD *)this + 14);
    v49 = wil::details::WriteResultString<wchar_t const *>(v48, v41, *((_WORD **)a2 + 15), (_QWORD *)this + 15);
    v50 = wil::details::WriteResultString<char const *>(v49, v41, *((_BYTE **)a2 + 11), (_QWORD *)this + 11);
    v51 = wil::details::WriteResultString<wchar_t const *>(v50, v41, *((_WORD **)a2 + 12), (_QWORD *)this + 12);
    memset_0(v51, 0, v41 - v51);
  }
}
