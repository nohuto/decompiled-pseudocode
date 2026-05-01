/*
 * XREFs of ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x1801D0870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D0920 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::EvaluateHolographicContext(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        int *a4)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v9; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v11; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0;
  v11 = 0LL;
  if ( a3 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))QueryInterface)(
           a3,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v11) >= 0
      && HolographicPositioner::_IsViewContextHolographic((HolographicPositioner *)((char *)this - 120), a2, v11) )
    {
      *a4 = 1;
    }
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
