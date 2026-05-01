/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180005A6C
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180004450 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x1800037A4 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z @ 0x180003828 (--$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800051A0 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memset_0 @ 0x18000FE42 (memset_0.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // esi
  _WORD *v5; // rax
  _WORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // dx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _WORD **v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  LPVOID v23; // r12
  void *v24; // rbx
  HANDLE ProcessHeap; // rax
  char *v26; // rcx
  char *v27; // rbx
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax

  v2 = *((_DWORD *)this + 4);
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v2 )
    {
      v5 = wil::details::ProcessHeapAlloc(8u, 0x190uLL);
      *((_QWORD *)this + 3) = v5;
      if ( v5 )
      {
        *((_DWORD *)this + 8) = 5;
        v6 = v5 + 200;
        while ( v5 != v6 )
        {
          *v5 = 80;
          v5 += 40;
        }
      }
    }
  }
  v7 = *((_QWORD *)this + 3);
  if ( !v7 )
    return;
  if ( !v2 || (v8 = *((_QWORD *)this + 3), v9 = v7 + 80LL * *((unsigned __int16 *)this + 16), v7 == v9) )
  {
LABEL_13:
    v10 = 1LL;
    v11 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
    *((_WORD *)this + 17) = v11;
    v12 = 80LL * v11;
    *(_DWORD *)(v12 + v7 + 4) = _InterlockedIncrement(*((volatile signed __int32 **)this + 1));
    *(_DWORD *)(v12 + v7 + 8) = *((_DWORD *)a2 + 2);
    *(_QWORD *)(v12 + v7 + 16) = 0LL;
    *(_WORD *)(v12 + v7 + 24) = *((_WORD *)a2 + 32);
    *(_BYTE *)(v12 + v7 + 26) = *(_BYTE *)a2;
    *(_QWORD *)(v12 + v7 + 32) = 0LL;
    *(_QWORD *)(v12 + v7 + 40) = *((_QWORD *)a2 + 17);
    *(_QWORD *)(v12 + v7 + 48) = *((_QWORD *)a2 + 18);
    v13 = -1LL;
    *(_QWORD *)(v12 + v7 + 56) = 0LL;
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
    v17 = *((_QWORD *)a2 + 16);
    if ( v17 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(v17 + v18) );
      v10 = v18 + 1;
    }
    v19 = (_WORD **)((char *)a2 + 24);
    v20 = *((_QWORD *)a2 + 3);
    if ( v20 )
    {
      do
        ++v13;
      while ( *(_WORD *)(v20 + 2 * v13) );
      v21 = 2 * v13 + 2;
    }
    else
    {
      v21 = 2LL;
    }
    v22 = v15 + v21 + v10;
    if ( *(_QWORD *)(v12 + v7 + 64) )
    {
      if ( *(_QWORD *)(v12 + v7 + 72) >= v22 )
      {
LABEL_31:
        v26 = *(char **)(v12 + v7 + 64);
        if ( v26 )
        {
          v27 = &v26[*(_QWORD *)(v12 + v7 + 72)];
          v28 = wil::details::WriteResultString<char const *>(v26, v27, *((_BYTE **)a2 + 7), (_QWORD *)(v12 + v7 + 16));
          v29 = wil::details::WriteResultString<char const *>(v28, v27, *((_BYTE **)a2 + 16), (_QWORD *)(v12 + v7 + 32));
          v30 = wil::details::WriteResultString<wchar_t const *>(v29, v27, *v19, (_QWORD *)(v12 + v7 + 56));
          memset_0(v30, 0, v27 - v30);
        }
        return;
      }
      v19 = (_WORD **)((char *)a2 + 24);
    }
    v23 = wil::details::ProcessHeapAlloc(8u, v15 + v21 + v10);
    if ( v23 )
    {
      v24 = *(void **)(v12 + v7 + 64);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v24);
      *(_QWORD *)(v12 + v7 + 64) = v23;
      *(_QWORD *)(v12 + v7 + 72) = v22;
    }
    goto LABEL_31;
  }
  while ( *(_DWORD *)(v8 + 4) <= *((_DWORD *)this + 4) || *(_DWORD *)(v8 + 8) != *((_DWORD *)a2 + 2) )
  {
    v8 += 80LL;
    if ( v8 == v9 )
      goto LABEL_13;
  }
}
