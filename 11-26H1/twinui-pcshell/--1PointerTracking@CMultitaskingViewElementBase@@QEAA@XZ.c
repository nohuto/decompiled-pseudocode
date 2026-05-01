/*
 * XREFs of ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B55A8
 * Callers:
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B5380 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ?DragLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C1A80 (-DragLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C1B20 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?Drop@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C1D00 (-Drop@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingVie.c)
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C29E0 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C3AB0 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _CMultitaskingViewElementBase::DragOver_::_1_::dtor$0 @ 0x1806F14A8 (_CMultitaskingViewElementBase--DragOver_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::PointerLeave_::_1_::dtor$0 @ 0x1806F1514 (_CMultitaskingViewElementBase--PointerLeave_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$0 @ 0x1806F1580 (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$0.c)
 *     _CMultitaskingViewElementBase::_PointerMove_::_1_::dtor$1 @ 0x1806F1592 (_CMultitaskingViewElementBase--_PointerMove_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CMultitaskingViewElementBase::PointerTracking::~PointerTracking(
        CMultitaskingViewElementBase::PointerTracking *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
}
