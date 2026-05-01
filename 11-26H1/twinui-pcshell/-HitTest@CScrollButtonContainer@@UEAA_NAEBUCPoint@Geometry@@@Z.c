/*
 * XREFs of ?HitTest@CScrollButtonContainer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804C6680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1804C3900 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 */

bool __fastcall CScrollButtonContainer::HitTest(CScrollButtonContainer *this, const struct Geometry::CPoint *a2)
{
  bool v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = *CMultitaskingViewElementBase::_HitTestChildren(this, &v4, (__int64 *)a2) != 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v4);
  return v2;
}
