/*
 * XREFs of ??1test_state@tip2@@QEAA@XZ @ 0x180097BFC
 * Callers:
 *     ??1?$shared_data@$0A@$0A@$0A@@details@tip2@@QEAA@XZ @ 0x1800D564C (--1-$shared_data@$0A@$0A@$0A@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18008ABFC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x180097CF0 (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800D57AC (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall tip2::test_state::~test_state(tip2::test_state *this)
{
  unsigned int v2; // edx
  unsigned __int64 *v3; // rsi
  unsigned __int64 i; // rbx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  void *v9; // rbx
  HANDLE v10; // rax

  tip2::vector_nothrow<tip2::test_flag>::clear((char *)this + 112);
  v3 = (unsigned __int64 *)((char *)this + 104);
  if ( *((_QWORD *)this + 11) )
  {
    for ( i = 0LL; i < *v3; ++i )
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)(*((_QWORD *)this + 11) + 8 * i));
    v5 = (void *)*((_QWORD *)this + 11);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *v3 = 0LL;
  if ( *((_QWORD *)this + 8) )
  {
    v7 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      v8 = 0LL;
      do
      {
        wil::StoredFailureInfo::`scalar deleting destructor'((wil::StoredFailureInfo *)(v8 + *((_QWORD *)this + 8)), v2);
        ++v7;
        v8 += 168LL;
      }
      while ( v7 < *((_QWORD *)this + 10) );
    }
    v9 = (void *)*((_QWORD *)this + 8);
    v10 = GetProcessHeap();
    HeapFree(v10, 0, v9);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this);
}
