/*
 * XREFs of ?GetMany@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x1800DB0AC
 * Callers:
 *     ?GetMany@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x1800DAEE0 (-GetMany@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResiz.c)
 *     ?GetMany@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x1800DAF80 (-GetMany@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vect_ea_1800DAF80.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180030428 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::GetMany(
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
  __int64 *v11; // rbx
  __int64 *v12; // rbx
  unsigned int v13; // ebp

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
    v11 = *(__int64 **)a3;
    winrt::Windows::Foundation::IUnknown::operator=(*(__int64 **)a3, (__int64 *)(v4 + 8LL * a2));
    v12 = v11 + 1;
    v13 = v8 - 1;
    if ( v8 != 1 )
    {
      do
      {
        winrt::Windows::Foundation::IUnknown::operator=(v12++, ++v10);
        --v13;
      }
      while ( v13 );
    }
  }
  return v8;
}
