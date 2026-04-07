/*
 * XREFs of ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800D054C
 * Callers:
 *     ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x1800E6D20 (-RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x18008AC9C (-GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x180096F34 (-Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ.c)
 *     ?CreateIndirectSwapchainRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800A9EF0 (-CreateIndirectSwapchainRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCIndirectSwapchainRenderTarge.c)
 *     ?SyncCreate@CIndirectSwapchainRenderTargetProxy@@QEAAJPEAXU_LUID@@PEBVCVisualProxy@@@Z @ 0x1800B91E4 (-SyncCreate@CIndirectSwapchainRenderTargetProxy@@QEAAJPEAXU_LUID@@PEBVCVisualProxy@@@Z.c)
 *     ?GetCanvasClientTransformRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800CFF94 (-GetCanvasClientTransformRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ.c)
 *     ?SetSwapchainTarget@CTopLevelWindow@@AEAAJPEAVCIndirectSwapchainRenderTargetProxy@@_N@Z @ 0x1800D0728 (-SetSwapchainTarget@CTopLevelWindow@@AEAAJPEAVCIndirectSwapchainRenderTargetProxy@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(
        CTopLevelWindow *this,
        void *a2,
        bool a3,
        struct _LUID a4)
{
  struct CIndirectSwapchainRenderTargetProxy *v8; // rbx
  int v9; // esi
  unsigned int v10; // eax
  struct CVisualProxy *CanvasRootVisualProxy; // rax
  const struct CVisualProxy *v12; // r14
  int v13; // eax
  int v14; // eax
  CIndirectSwapchainRenderTargetProxy *v16; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  v16 = 0LL;
  if ( *((_QWORD *)this + 95) )
  {
    v9 = -2147024891;
    v10 = 5907;
    goto LABEL_15;
  }
  if ( a3 )
    CanvasRootVisualProxy = CTopLevelWindow::GetCanvasRootVisualProxy(this);
  else
    CanvasRootVisualProxy = CTopLevelWindow::GetCanvasClientTransformRootVisualProxy(this);
  v12 = CanvasRootVisualProxy;
  if ( !CanvasRootVisualProxy )
  {
    v9 = -2147467261;
    v10 = 5924;
    goto LABEL_15;
  }
  v9 = CCompositor::CreateIndirectSwapchainRenderTargetProxy(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v16);
  v8 = v16;
  if ( v9 < 0 )
  {
    v10 = 5930;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10, 0LL);
    if ( a2 )
      CloseHandle(a2);
    goto LABEL_17;
  }
  v13 = CIndirectSwapchainRenderTargetProxy::SyncCreate(v16, a2, a4, v12);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x1735u, 0LL);
  }
  else
  {
    v14 = CTopLevelWindow::SetSwapchainTarget(this, v8, a3);
    v9 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x173Au, 0LL);
  }
LABEL_17:
  if ( v8 && v9 < 0 )
    CIndirectSwapchainRenderTargetProxy::Unregister(v8);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v16);
  return (unsigned int)v9;
}
