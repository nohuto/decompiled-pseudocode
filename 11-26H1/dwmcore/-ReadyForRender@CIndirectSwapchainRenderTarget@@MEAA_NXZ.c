/*
 * XREFs of ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ @ 0x1801235A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180123710 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x180123744 (-IsEmpty@CTreeDirty@@QEBA_NXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180123DDC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18020B854 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

bool __fastcall CIndirectSwapchainRenderTarget::ReadyForRender(CIndirectSwapchainRenderTarget *this)
{
  int Buffer; // eax
  int v3; // edi

  if ( !COffScreenRenderTarget::ReadyForRender(this)
    || CTreeDirty::IsEmpty((CTreeDirty *)(*((_QWORD *)this + 14) + 112LL)) && !*((_DWORD *)this + 106) )
  {
    return 0;
  }
  Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(this);
  v3 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Buffer, 0xE4u, 0LL);
    if ( v3 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(this);
    return 0;
  }
  if ( !*((_BYTE *)this + 2448) )
    return 0;
  return *((_QWORD *)this + 308) != 0LL;
}
