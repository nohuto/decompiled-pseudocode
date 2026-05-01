/*
 * XREFs of ?_RenderBackground@CGlyphButtonElement@@AEAAXXZ @ 0x1804D01F0
 * Callers:
 *     ?Repaint@CGlyphButtonElement@@UEAAXXZ @ 0x1804CFFB0 (-Repaint@CGlyphButtonElement@@UEAAXXZ.c)
 *     ?_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z @ 0x1804D0128 (-_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z.c)
 *     ?v_SetRenderMode@CGlyphButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x1804D04F0 (-v_SetRenderMode@CGlyphButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGlyphButtonElement::_RenderBackground(CGlyphButtonElement *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 49) )
  {
    v6 = 0LL;
    v2 = *((_QWORD *)this + 48);
    v3 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    if ( v3(v2, &GUID_b09cbbc9_d9b8_46fe_b3d5_2cd3bb04dda8, &v6) >= 0 )
    {
      if ( (*((_BYTE *)this + 364) & 1) != 0 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 49) + 32LL))(
          *((_QWORD *)this + 49),
          v4,
          0LL,
          0LL);
        v5 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
               &v7,
               (__int64)this);
        (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(__int64, _QWORD *, __int64), _QWORD *))(**((_QWORD **)this + 49) + 80LL))(
          *((_QWORD *)this + 49),
          LambdaCustomPaintProc__lambda_6388d5cf85f46d09280dec8197538f8a__ID2D1DeviceContext_,
          v5);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 49) + 32LL))(
          *((_QWORD *)this + 49),
          v4,
          0LL,
          0LL);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  }
}
