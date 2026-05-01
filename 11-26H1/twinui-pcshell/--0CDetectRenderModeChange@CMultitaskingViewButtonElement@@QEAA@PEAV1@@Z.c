/*
 * XREFs of ??0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z @ 0x1804CEE44
 * Callers:
 *     ?PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804CEEE0 (-PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerI.c)
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x1804CEF40 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 *     ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804CEF80 (-PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804CEFD0 (-PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 * Callees:
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1804CF028 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMultitaskingViewButtonElement::CDetectRenderModeChange *__fastcall CMultitaskingViewButtonElement::CDetectRenderModeChange::CDetectRenderModeChange(
        CMultitaskingViewButtonElement::CDetectRenderModeChange *this,
        struct CMultitaskingViewButtonElement *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CMultitaskingViewButtonElement *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_DWORD *)this + 2) = CMultitaskingViewButtonElement::_CalcButtonRenderMode(*(_QWORD *)this);
  return this;
}
