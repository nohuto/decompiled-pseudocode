/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180099B34
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180099A60 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     memcpy_s @ 0x180099A90 (memcpy_s.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180099C0C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180222F74 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  DWORD LastError; // esi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r8
  char *v7; // rax
  char *v8; // rdi
  rsize_t v9; // r14
  void *v10; // rdx
  wil::details *v11; // rcx

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this >= a2 )
    return 1;
  LastError = GetLastError();
  v5 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  v7 = (char *)wil::details::ProcessHeapAlloc(0, v5, v6);
  v8 = v7;
  if ( v7 )
  {
    v9 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v7, v5, *(const void *const *)this, v9);
    v11 = (wil::details *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v8;
    if ( v11 )
      wil::details::FreeProcessHeap(v11, v10);
    *(_QWORD *)this = v8;
    *((_QWORD *)this + 1) = &v8[v9];
    *((_QWORD *)this + 2) = &v8[v5];
    SetLastError(LastError);
    return 1;
  }
  SetLastError(LastError);
  return 0;
}
