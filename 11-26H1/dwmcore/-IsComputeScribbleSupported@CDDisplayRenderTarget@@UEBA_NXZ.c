/*
 * XREFs of ?IsComputeScribbleSupported@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801D0790
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800ED670 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 */

bool __fastcall CDDisplayRenderTarget::IsComputeScribbleSupported(CDDisplayRenderTarget *this)
{
  __int64 v3; // r8

  if ( *((_QWORD *)this + 7) )
  {
    if ( !(unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 72) )
      return CDDisplaySwapChain::IsComputeScribbleSupported((CDDisplaySwapChain *)(*((_QWORD *)this + 7) + 256LL));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    {
      v3 = 1LL;
      goto LABEL_9;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
  {
    v3 = 10LL;
LABEL_9:
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      v3);
  }
  return 0;
}
