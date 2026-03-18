/*
 * XREFs of ?IsComputeScribbleSupported@CScribbleSwapChain@@UEBA_NXZ @ 0x1801D0970
 * Callers:
 *     ?IsComputeScribbleSupported@CDDisplaySwapChain@@UEBA_NXZ @ 0x1801D0800 (-IsComputeScribbleSupported@CDDisplaySwapChain@@UEBA_NXZ.c)
 *     ?IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ @ 0x1801D08A0 (-IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 */

char __fastcall CScribbleSwapChain::IsComputeScribbleSupported(CScribbleSwapChain *this)
{
  if ( !CCommonRegistryData::EnableFrontBufferRenderChecks || *((_DWORD *)this + 4) )
    return 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      12LL);
  return 0;
}
