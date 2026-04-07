/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18005C5A4
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18005B01C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18005C2F4 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18005C480 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18004DFC8 (-MemoryFree@@YAXPEAX@Z.c)
 *     memcpy_s @ 0x18005C508 (memcpy_s.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18005C730 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180079770 (--1last_error_context@wil@@QEAA@XZ.c)
 */

char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  DWORD LastError; // ebp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  char *v7; // rax
  char *v8; // rdi
  rsize_t v10; // r14
  void *v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF
  DWORD v13; // [rsp+44h] [rbp+Ch]

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    v12 = 0;
    LastError = GetLastError();
    v13 = LastError;
    v5 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    v7 = (char *)wil::details::ProcessHeapAlloc(0, v5, v6);
    v8 = v7;
    if ( !v7 )
    {
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
      return 0;
    }
    v10 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v7, v5, *(const void *const *)this, v10);
    v11 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v8;
    if ( v11 )
      MemoryFree(v11);
    *(_QWORD *)this = v8;
    *((_QWORD *)this + 1) = &v8[v10];
    *((_QWORD *)this + 2) = &v8[v5];
    SetLastError(LastError);
  }
  return 1;
}
