/*
 * XREFs of ?ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ @ 0x180254870
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180254208 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnBufferResize@COverlayContext@@QEAAXXZ @ 0x18023D35C (-OnBufferResize@COverlayContext@@QEAAXXZ.c)
 *     ?ResizeBuffers@CDDisplaySwapChain@@UEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@I@Z @ 0x180254830 (-ResizeBuffers@CDDisplaySwapChain@@UEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@I@Z.c)
 *     ?CalcSwapChainBufferSize@CMonitorTransform@@QEAA?AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlayCaps@@@Z @ 0x18028D8BC (-CalcSwapChainBufferSize@CMonitorTransform@@QEAA-AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlay.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ResizeSwapChainBuffers(CDDisplayRenderTarget *this)
{
  __int64 v1; // r9
  COverlayContext *v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct D2D_SIZE_U v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    v3 = (CDDisplayRenderTarget *)((char *)this + 72);
    v4 = (_QWORD *)CMonitorTransform::CalcSwapChainBufferSize(
                     (CDDisplayRenderTarget *)((char *)this + 29776),
                     &v10,
                     (CDDisplayRenderTarget *)((char *)this + 24),
                     *(const struct OverlayCaps **)(v1 + 64));
    v5 = *((_QWORD *)this + 7) + 24LL;
    *((_QWORD *)this - 5) = *v4;
    if ( *(_QWORD *)(v5 + 492) != *((_QWORD *)this - 5) )
    {
      v6 = CDDisplaySwapChain::ResizeBuffers(
             (CDDisplaySwapChain *)v5,
             (CDDisplayRenderTarget *)((char *)this - 32),
             (const struct D2D_SIZE_U *)this - 5,
             *((_DWORD *)this + 7996));
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDA,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\ddisplayrendertarget.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
      COverlayContext::OnBufferResize(v3);
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30064);
    }
  }
  return 0LL;
}
