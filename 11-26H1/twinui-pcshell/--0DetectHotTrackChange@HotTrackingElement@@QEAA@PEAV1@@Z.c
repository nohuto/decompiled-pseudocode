/*
 * XREFs of ??0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z @ 0x1804B5340
 * Callers:
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x1804B5F30 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804B5F70 (-PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HotTrackingElement::DetectHotTrackChange *__fastcall HotTrackingElement::DetectHotTrackChange::DetectHotTrackChange(
        HotTrackingElement::DetectHotTrackChange *this,
        struct HotTrackingElement *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct HotTrackingElement *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_BYTE *)this + 8) = *(_DWORD *)(*(_QWORD *)this + 96LL) == 1;
  return this;
}
