/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180034D84
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800355E0 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180031A48 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180031AC0 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180034998 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x1800349BC (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x180035EFC (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800361B8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rdi
  const unsigned __int16 *v9; // rdx
  __int64 v10; // rdi
  const char *v11; // rdx
  __int64 v12; // rdi
  const char *v13; // rdx
  __int64 v14; // rdi
  const char *v15; // rdx
  __int64 v16; // rdi
  const char *v17; // rdx
  __int64 v18; // rdi
  const char *v19; // rdx
  __int64 v20; // rdi
  const char *v21; // rdx
  unsigned __int64 v22; // rdi
  _QWORD *v23; // rsi
  _DWORD *v24; // rax
  HANDLE ProcessHeap; // rax
  int *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // rdx
  const char *v30; // rbx
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  unsigned __int16 *v37; // rax
  char *v38; // rax
  unsigned __int16 *v39; // rax
  char *v40; // rax

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
  v5 = wil::details::ResultStringSize(*((wil::details **)a2 + 16), (const char *)a2);
  v6 = wil::details::ResultStringSize(*(wil::details **)(v4 + 120), (const unsigned __int16 *)v4) + v5;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 12), v7) + v6;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 3), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 14), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 11), v13) + v12;
  v16 = wil::details::ResultStringSize(*((wil::details **)a2 + 9), v15) + v14;
  v18 = wil::details::ResultStringSize(*((wil::details **)a2 + 7), v17) + v16;
  v20 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v19) + v18;
  v22 = wil::details::ResultStringSize(*((wil::details **)a2 + 5), v21) + v20;
  v23 = (_QWORD *)((char *)this + 152);
  v24 = (_DWORD *)*((_QWORD *)this + 19);
  if ( !v24 || *v24 != 1 || *((_QWORD *)this + 20) < v22 )
  {
    wil::details::shared_buffer::reset((wil::StoredFailureInfo *)((char *)this + 152));
    if ( v22 )
    {
      ProcessHeap = GetProcessHeap();
      v26 = (int *)HeapAlloc(ProcessHeap, 0, v22 + 4);
      if ( v26 )
      {
        *v26 = 0;
        wil::details::shared_buffer::assign((wil::StoredFailureInfo *)((char *)this + 152), v26, v22);
      }
    }
    else
    {
      wil::details::shared_buffer::reset((wil::StoredFailureInfo *)((char *)this + 152));
    }
  }
  v27 = *v23 + 4LL;
  v28 = v27 & -(__int64)(*v23 != 0LL);
  v29 = v28 + *((_QWORD *)this + 20);
  v30 = (const char *)(v29 & -(__int64)(v28 != 0));
  if ( v28 )
  {
    v31 = wil::details::WriteResultString<unsigned short const *>(
            (unsigned __int16 *)(v27 & -(__int64)(*v23 != 0LL)),
            (const unsigned __int16 *)(v29 & -(__int64)((v27 & -(__int64)(*v23 != 0LL)) != 0)),
            *((wil::details **)a2 + 3),
            (unsigned __int16 **)this + 3);
    v32 = wil::details::WriteResultString<char const *>(v31, v30, *((wil::details **)a2 + 5), (char **)this + 5);
    v33 = wil::details::WriteResultString<char const *>(v32, v30, *((wil::details **)a2 + 6), (char **)this + 6);
    v34 = wil::details::WriteResultString<char const *>(v33, v30, *((wil::details **)a2 + 7), (char **)this + 7);
    v35 = wil::details::WriteResultString<char const *>(v34, v30, *((wil::details **)a2 + 9), (char **)this + 9);
    v36 = wil::details::WriteResultString<char const *>(v35, v30, *((wil::details **)a2 + 16), (char **)this + 16);
    v37 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v36,
                                v30,
                                *((wil::details **)a2 + 14),
                                (char **)this + 14);
    v38 = wil::details::WriteResultString<unsigned short const *>(
            v37,
            (const unsigned __int16 *)v30,
            *((wil::details **)a2 + 15),
            (unsigned __int16 **)this + 15);
    v39 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v38,
                                v30,
                                *((wil::details **)a2 + 11),
                                (char **)this + 11);
    v40 = wil::details::WriteResultString<unsigned short const *>(
            v39,
            (const unsigned __int16 *)v30,
            *((wil::details **)a2 + 12),
            (unsigned __int16 **)this + 12);
    memset_0(v40, 0, v30 - v40);
  }
}
