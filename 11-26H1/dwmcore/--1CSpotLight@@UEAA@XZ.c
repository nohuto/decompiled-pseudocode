/*
 * XREFs of ??1CSpotLight@@UEAA@XZ @ 0x1802461A0
 * Callers:
 *     ??_GCSpotLight@@UEAAPEAXI@Z @ 0x180246E70 (--_GCSpotLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801A9D00 (--1-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA@X.c)
 */

void __fastcall CSpotLight::~CSpotLight(CSpotLight *this)
{
  detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::~vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>((__int64 *)this + 42);
  CPositionedLight::~CPositionedLight(this);
}
