/*
 * XREFs of ?GetMany@?$vector_view_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@Uhstring@winrt@@@2@@Z @ 0x18061AFF8
 * Callers:
 *     ?GetMany@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x18061AE30 (-GetMany@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstrin.c)
 *     ?GetMany@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVectorView@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x18061AED0 (-GetMany@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allo_ea_18061AED0.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  __int64 *v10; // rsi
  struct winrt::impl::hstring_header **v11; // rbx
  unsigned int v12; // r8d
  struct winrt::impl::hstring_header **v13; // rbx
  unsigned int v14; // ebp

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v4 = *(_QWORD *)v3;
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 56LL;
  v6 = (*(_QWORD *)v5 - v4) >> 3;
  if ( a2 >= (unsigned int)v6 )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 8);
  v9 = v6 - a2;
  if ( v8 >= v9 )
    v8 = v9;
  v10 = (__int64 *)(v4 + 8LL * a2);
  if ( v8 )
  {
    v11 = *(struct winrt::impl::hstring_header ***)a3;
    winrt::hstring::operator=(*(struct winrt::impl::hstring_header ***)a3, (__int64 *)(v4 + 8LL * a2), a3);
    v13 = v11 + 1;
    v14 = v8 - 1;
    if ( v8 != 1 )
    {
      do
      {
        winrt::hstring::operator=(v13++, ++v10, v12);
        --v14;
      }
      while ( v14 );
    }
  }
  return v8;
}
