/*
 * XREFs of ?GetMany@?$vector_view_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@URect@Foundation@Windows@winrt@@@2@@Z @ 0x180479FF4
 * Callers:
 *     ?GetMany@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAURect@Foundation@Windows@3@PEAI@Z @ 0x180479E80 (-GetMany@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Win.c)
 *     ?GetMany@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAURect@Foundation@Windows@3@PEAI@Z @ 0x180479EE0 (-GetMany@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@F_ea_180479EE0.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEBURect@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAURect@Foundation@Windows@winrt@@PEBU1234@_KPEAU1234@@Z @ 0x1800BB94C (--$_Copy_memmove_n@PEBURect@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAURect@Foundation@Windo.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect,winrt::impl::collection_version>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // ecx

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v4 = *(_QWORD *)v3;
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 56LL;
  v6 = (*(_QWORD *)v5 - v4) >> 4;
  if ( a2 >= (unsigned int)v6 )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 8);
  v9 = v6 - a2;
  if ( v8 >= v9 )
    v8 = v9;
  if ( v8 )
    std::_Copy_memmove_n<winrt::Windows::Foundation::Rect const *,winrt::Windows::Foundation::Rect *>(
      (void *)(v4 + 16LL * a2),
      v8,
      *(void **)a3);
  return v8;
}
