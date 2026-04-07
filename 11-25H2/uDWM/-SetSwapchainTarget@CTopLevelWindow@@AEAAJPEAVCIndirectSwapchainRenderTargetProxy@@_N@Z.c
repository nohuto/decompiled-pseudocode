/*
 * XREFs of ?SetSwapchainTarget@CTopLevelWindow@@AEAAJPEAVCIndirectSwapchainRenderTargetProxy@@_N@Z @ 0x1800D0728
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800D054C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18000C4AC (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::SetSwapchainTarget(
        CTopLevelWindow *this,
        struct CIndirectSwapchainRenderTargetProxy *a2,
        char a3)
{
  CIndirectSwapchainRenderTargetProxy **v3; // r9
  int v4; // eax
  unsigned int v5; // ebx

  *((_BYTE *)this + 752) = a3;
  *((_QWORD *)this + 95) = a2;
  CMILRefCountBase::AddRef(a2);
  v4 = CTopLevelWindow::SendBoundsToSwapchainTarget(v3);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x176Bu, 0LL);
  return v5;
}
