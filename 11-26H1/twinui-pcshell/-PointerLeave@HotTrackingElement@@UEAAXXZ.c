/*
 * XREFs of ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x1804B5F30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z @ 0x1804B5340 (--0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z.c)
 *     ??1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ @ 0x1804B5554 (--1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ.c)
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C29E0 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HotTrackingElement::PointerLeave(HotTrackingElement *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  HotTrackingElement::DetectHotTrackChange::DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v2, this);
  CMultitaskingViewElementBase::PointerLeave(this);
  HotTrackingElement::DetectHotTrackChange::~DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v2);
}
