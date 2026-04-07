/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180098274
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180056B5C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800722E8 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180056B8C (memcpy_s.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180080930 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180098240 (-MemoryFree@@YAXPEAX@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18009D0C0 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009D338 (--1last_error_context@wil@@QEAA@XZ.c)
 */

char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  char *v5; // rax
  char *v6; // rsi
  rsize_t v8; // r14
  void *v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v10);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    v5 = (char *)wil::details::ProcessHeapAlloc(0, v4);
    v6 = v5;
    if ( !v5 )
    {
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v10);
      return 0;
    }
    v8 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v5, v4, *(const void *const *)this, v8);
    v9 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v6;
    if ( v9 )
      MemoryFree(v9);
    *(_QWORD *)this = v6;
    *((_QWORD *)this + 1) = &v6[v8];
    *((_QWORD *)this + 2) = &v6[v4];
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v10);
  }
  return 1;
}
