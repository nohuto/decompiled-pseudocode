/*
 * XREFs of ??1test_state@tip2@@QEAA@XZ @ 0x1800A317C
 * Callers:
 *     ??1?$shared_data@$0A@$0A@$00@details@tip2@@QEAA@XZ @ 0x1800A3030 (--1-$shared_data@$0A@$0A@$00@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A30A4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x1800A3420 (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 *     ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ @ 0x1800A34B8 (-clear@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ.c)
 */

void __fastcall tip2::test_state::~test_state(tip2::test_state *this)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 i; // rbx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax

  tip2::vector_nothrow<tip2::test_flag>::clear((char *)this + 112);
  v2 = (unsigned __int64 *)((char *)this + 104);
  if ( *((_QWORD *)this + 11) )
  {
    for ( i = 0LL; i < *v2; ++i )
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)(*((_QWORD *)this + 11) + 8 * i));
    v4 = (void *)*((_QWORD *)this + 11);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *v2 = 0LL;
  tip2::vector_nothrow<wil::StoredFailureInfo>::clear((char *)this + 64);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this);
}
