/*
 * XREFs of ??1CResampleLayer@@UEAA@XZ @ 0x18009AA2C
 * Callers:
 *     ??_GCResampleLayer@@UEAAPEAXI@Z @ 0x18009A9F0 (--_GCResampleLayer@@UEAAPEAXI@Z.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@MM@Z @ 0x1800F9400 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CResampleLayer::~CResampleLayer(CResampleLayer *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 16);
  CExternalLayer::~CExternalLayer(this);
}
