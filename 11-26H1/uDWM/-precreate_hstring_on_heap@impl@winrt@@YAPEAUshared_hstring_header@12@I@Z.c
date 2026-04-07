/*
 * XREFs of ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800933EC
 * Callers:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800879BC (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800D0974 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 * Callees:
 *     WINRT_IMPL_HeapAlloc @ 0x18008F067 (WINRT_IMPL_HeapAlloc.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x18008F073 (WINRT_IMPL_GetProcessHeap.c)
 *     ??4atomic_ref_count@impl@winrt@@QEAAII@Z @ 0x180090A64 (--4atomic_ref_count@impl@winrt@@QEAAII@Z.c)
 *     _CxxThrowException_0 @ 0x1800E6C70 (_CxxThrowException_0.c)
 */

struct winrt::impl::shared_hstring_header *__fastcall winrt::impl::precreate_hstring_on_heap(winrt::impl *this)
{
  __int64 v1; // rbx
  SIZE_T v2; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v4; // rax
  struct winrt::impl::shared_hstring_header *v5; // r9
  struct winrt::impl::shared_hstring_header *result; // rax
  __int16 v7; // r10
  void **pExceptionObject; // [rsp+20h] [rbp-18h] BYREF
  const char *v9; // [rsp+28h] [rbp-10h]

  v1 = (unsigned int)this;
  v2 = 2LL * (unsigned int)this + 32;
  if ( v2 > 0xFFFFFFFF )
  {
    v9 = "length";
    pExceptionObject = &stdext::bad_alloc::`vftable';
    throw (std::invalid_argument *)&pExceptionObject;
  }
  ProcessHeap = WINRT_IMPL_GetProcessHeap();
  v4 = WINRT_IMPL_HeapAlloc(ProcessHeap, 0, v2);
  if ( !v4 )
  {
    v9 = "bad allocation";
    pExceptionObject = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)&pExceptionObject;
  }
  *v4 = 0;
  v4[1] = v1;
  *((_QWORD *)v4 + 2) = v4 + 7;
  winrt::impl::atomic_ref_count::operator=();
  result = v5;
  *((_WORD *)v5 + v1 + 14) = v7;
  return result;
}
