/*
 * XREFs of ?IndexOf@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA_NAEBUUserResizeVisual@Transitions@Udwm@2@AEAI@Z @ 0x1800DB5E0
 * Callers:
 *     ?IndexOf@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x1800DB540 (-IndexOf@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResiz.c)
 *     ?IndexOf@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x1800DB590 (-IndexOf@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vect_ea_1800DB590.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800423A0 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

bool __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::IndexOf(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rbx

  v3 = a1 + 8;
  v4 = a1 + 16;
  if ( !a1 )
    v3 = 48LL;
  if ( !a1 )
    v4 = 56LL;
  v7 = *(_QWORD **)v3;
  v8 = *(_QWORD **)v4;
  while ( v7 != v8 && !winrt::Windows::Foundation::operator==(a2, v7) )
    ++v7;
  v9 = ((__int64)v7 - *(_QWORD *)v3) >> 3;
  *a3 = v9;
  return (unsigned int)v9 < (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v3) >> 3);
}
