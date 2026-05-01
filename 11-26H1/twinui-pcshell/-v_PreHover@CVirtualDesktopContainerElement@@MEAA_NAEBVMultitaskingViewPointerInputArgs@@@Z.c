/*
 * XREFs of ?v_PreHover@CVirtualDesktopContainerElement@@MEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DE9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804C3A44 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     ?AllUpViewHoverSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ @ 0x1804DCF64 (-AllUpViewHoverSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVirtualDesktopContainerElement::v_PreHover(
        CVirtualDesktopContainerElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 v3; // rsi
  unsigned __int8 (__fastcall *v4)(__int64, __int64); // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 100) > 1uLL )
  {
    v3 = *((_QWORD *)this + 17);
    if ( v3 )
    {
      v4 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 224LL);
      v5 = CMultitaskingViewElementBase::_MapArgumentsToChild((__int64)this, (__int64)v8, (__int64 *)a2);
      if ( v4(v3, v5) )
      {
        *((_BYTE *)this + 824) = 1;
        MultitaskingViewTelemetry::AllUpViewHoverSelectVirtualDesktop(v6);
      }
    }
  }
  return 1;
}
