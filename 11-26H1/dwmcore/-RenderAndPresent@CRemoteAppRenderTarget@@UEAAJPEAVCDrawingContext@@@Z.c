/*
 * XREFs of ?RenderAndPresent@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180249C30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180255D8C (-Present@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802560AC (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RenderAndPresent(CRemoteAppRenderTarget *this, struct CDrawingContext *a2)
{
  CRemoteAppRenderTarget *v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax

  v2 = (CRemoteAppRenderTarget *)((char *)this - 96);
  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this - 9) + 56LL))(*((_QWORD *)this - 9)) )
  {
    v5 = CRemoteAppRenderTarget::Render(v2, a2);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xEBu, 0LL);
    CRemoteAppRenderTarget::Present(v2);
  }
  return v4;
}
