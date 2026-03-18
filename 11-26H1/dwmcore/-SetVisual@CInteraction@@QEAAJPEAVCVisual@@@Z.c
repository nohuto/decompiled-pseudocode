/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E4C70
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E4D30 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC (McTemplateU0xx_EventWriteTransfer.c)
 *     ?Create@?$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z @ 0x18013EDCC (-Create@-$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z.c)
 *     ?ResolveResource@?$CWeakReference@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x1801CEA98 (-ResolveResource@-$CWeakReference@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::SetVisual(CInteraction *this, struct CVisual *a2)
{
  __int64 *v2; // rsi
  __int64 v6; // r14
  struct CVisual *v7; // rbx
  struct CVisual *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)((char *)this + 120);
  if ( a2 )
  {
    v6 = *v2;
    v7 = 0LL;
    v8 = 0LL;
    if ( v6 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v8);
      CWeakReference<CVisual>::ResolveResource(v6, &v8);
      v7 = v8;
    }
    if ( a2 != v7 )
    {
      ReleaseInterface<ID2D1Geometry>(v2);
      CWeakReference<CBaseExpression>::Create(a2, v2);
    }
    if ( v7 )
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 15);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xx_EventWriteTransfer(this, &INTERACTION_VISUAL_UPDATE, this, a2);
  return 0LL;
}
