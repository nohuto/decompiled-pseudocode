/*
 * XREFs of ?InsertAt@?$vector_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@@winrt@@QEAAXIAEBUWindowId@UI@Windows@2@@Z @ 0x180665BFC
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIUstruct_Windows_UI_WindowId@23@@Z @ 0x180665BC0 (-InsertAt@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@wi.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x18025445C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338100 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

char *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId>::InsertAt(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v4; // rcx
  char *result; // rax
  __int64 *v6; // r9
  __int64 *v7; // rbx
  __int64 v8; // rdi
  const struct winrt::impl::slim_source_location *v9; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)(v4 + 8) - *(_QWORD *)v4) >> 3) )
  {
    v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v11);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v9);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  result = *(char **)v4;
  v6 = *(__int64 **)(v4 + 8);
  v7 = (__int64 *)(*(_QWORD *)v4 + 8LL * a2);
  if ( v6 == *(__int64 **)(v4 + 16) )
    return std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
             (__int64 *)v4,
             *(_QWORD *)v4 + 8LL * a2,
             a3);
  v8 = *a3;
  if ( v7 == v6 )
  {
    *v6 = v8;
    *(_QWORD *)(v4 + 8) += 8LL;
  }
  else
  {
    *v6 = *(v6 - 1);
    *(_QWORD *)(v4 + 8) += 8LL;
    result = (char *)memmove_0(v7 + 1, v7, (char *)v6 - (char *)v7 - 8);
    *v7 = v8;
  }
  return result;
}
