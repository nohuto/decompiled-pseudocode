/*
 * XREFs of ?RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804B89F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804B1020 (-RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall CMultitaskingViewFrameElement::RemoveAllDescendants(CMultitaskingViewFrameElement *this)
{
  CMultitaskingViewElementBase::RemoveAllDescendants(this);
  if ( *((_QWORD *)this + 71) )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 71);
}
