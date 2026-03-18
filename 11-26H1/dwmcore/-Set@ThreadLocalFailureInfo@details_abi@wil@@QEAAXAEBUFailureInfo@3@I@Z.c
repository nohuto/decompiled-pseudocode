/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180223F08
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1802240AC (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180099A90 (memcpy_s.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180099C0C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180222790 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180223EB8 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x180223EDC (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  char **v3; // r13
  char **v4; // r14
  char **v5; // rdi
  __int64 v8; // rbp
  const char *v9; // rdx
  __int64 v10; // rbp
  const char *v11; // rdx
  SIZE_T v12; // rbp
  SIZE_T *v13; // rbx
  LPVOID v14; // r14
  void *v15; // rbx
  HANDLE ProcessHeap; // rax
  char *v17; // rcx
  const char *v18; // rsi
  char *v19; // rax
  char *v20; // rax
  const unsigned __int16 *v21; // rdx
  wil::details *v22; // rcx
  char *v23; // rbx
  rsize_t v24; // rax
  const void *v25; // rcx
  rsize_t v26; // r14

  *((_DWORD *)this + 1) = a3;
  v3 = (char **)((char *)this + 16);
  v4 = (char **)((char *)this + 32);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v5 = (char **)((char *)this + 56);
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 32);
  *((_BYTE *)this + 26) = *(_BYTE *)a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 17);
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 18);
  *((_QWORD *)this + 7) = 0LL;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 3), (const unsigned __int16 *)a2);
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 7), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 16), v11) + v10;
  v13 = (SIZE_T *)((char *)this + 72);
  if ( !*((_QWORD *)this + 8) || *v13 < v12 )
  {
    v14 = wil::details::ProcessHeapAlloc(8u, v12);
    if ( v14 )
    {
      v15 = (void *)*((_QWORD *)this + 8);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v15);
      *((_QWORD *)this + 8) = v14;
      v13 = (SIZE_T *)((char *)this + 72);
      *((_QWORD *)this + 9) = v12;
    }
    v4 = (char **)((char *)this + 32);
  }
  v17 = (char *)*((_QWORD *)this + 8);
  if ( v17 )
  {
    v18 = &v17[*v13];
    v19 = wil::details::WriteResultString<char const *>(v17, v18, *((wil::details **)a2 + 7), v3);
    v20 = wil::details::WriteResultString<char const *>(v19, v18, *((wil::details **)a2 + 16), v4);
    v22 = (wil::details *)*((_QWORD *)a2 + 3);
    v23 = v20;
    if ( v20 != v18
      && v22
      && *(_WORD *)v22
      && (v24 = wil::details::ResultStringSize(v22, v21), v26 = v24, v18 - v23 >= v24) )
    {
      memcpy_s(v23, v18 - v23, v25, v24);
      if ( v5 )
        *v5 = v23;
      v23 += v26;
    }
    else if ( v5 )
    {
      *v5 = 0LL;
    }
    memset_0(v23, 0, v18 - v23);
  }
}
