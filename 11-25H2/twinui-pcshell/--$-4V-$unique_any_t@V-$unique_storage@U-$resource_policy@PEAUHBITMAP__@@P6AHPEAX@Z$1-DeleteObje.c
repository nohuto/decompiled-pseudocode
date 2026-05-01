/*
 * XREFs of ??$?4V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@$0A@@?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805BA74C
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805C7B00 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x1805C7F24 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 * Callees:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805BFBA8 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@.c)
 *     ?_Destroy@?$_Variant_base@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@QEAAXXZ @ 0x1805C86B0 (-_Destroy@-$_Variant_base@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6.c)
 */

__int64 __fastcall std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::operator=<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,0>(
        __int64 a1,
        _QWORD *a2)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( *(_BYTE *)(a1 + 8) )
    {
      std::_Variant_base<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>::_Destroy();
      *(_BYTE *)(a1 + 8) = -1;
      *(_QWORD *)a1 = *a2;
      *a2 = 0LL;
      *(_BYTE *)(a1 + 8) = 0;
    }
    else
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::operator=();
    }
  }
  else
  {
    *(_QWORD *)a1 = *a2;
    *a2 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 1;
  }
  return a1;
}
