/*
 * XREFs of ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804A41E4
 * Callers:
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804A3FB4 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ?DragLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804AFE60 (-DragLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804AFEF0 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?Drop@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B00D0 (-Drop@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingVie.c)
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804B0DA0 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B1E34 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _CMultitaskingViewElementBase::DragOver_::_1_::dtor$0 @ 0x1806C9566 (_CMultitaskingViewElementBase--DragOver_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::PointerLeave_::_1_::dtor$0 @ 0x1806C95D2 (_CMultitaskingViewElementBase--PointerLeave_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$0 @ 0x1806C963E (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$1 @ 0x1806C9650 (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CMultitaskingViewElementBase::PointerTracking::~PointerTracking(
        CMultitaskingViewElementBase::PointerTracking *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
}
