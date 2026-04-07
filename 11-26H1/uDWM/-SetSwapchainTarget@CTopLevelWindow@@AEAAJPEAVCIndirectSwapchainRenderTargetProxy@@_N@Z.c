/*
 * XREFs of ?SetSwapchainTarget@CTopLevelWindow@@AEAAJPEAVCIndirectSwapchainRenderTargetProxy@@_N@Z @ 0x1800CBC2C
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800CBA4C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18005670C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::SetSwapchainTarget(
        CTopLevelWindow *this,
        struct CIndirectSwapchainRenderTargetProxy *a2,
        char a3)
{
  CIndirectSwapchainRenderTargetProxy **v3; // r9
  int v4; // eax
  unsigned int v5; // ebx

  *((_BYTE *)this + 728) = a3;
  *((_QWORD *)this + 92) = a2;
  CBaseObject::AddRef(a2);
  v4 = CTopLevelWindow::SendBoundsToSwapchainTarget(v3);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x168Fu, 0LL);
  return v5;
}
