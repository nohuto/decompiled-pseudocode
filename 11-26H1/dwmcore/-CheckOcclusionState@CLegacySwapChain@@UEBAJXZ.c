/*
 * XREFs of ?CheckOcclusionState@CLegacySwapChain@@UEBAJXZ @ 0x180199D10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z @ 0x180199DA4 (-CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySwapChain::CheckOcclusionState(CLegacySwapChain *this)
{
  struct IDXGISwapChainDWM1 *v1; // rdx
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v1 = (struct IDXGISwapChainDWM1 *)*((_QWORD *)this + 33);
  if ( v1 )
  {
    v2 = CD3DDevice::CheckOcclusionState(*((CD3DDevice **)this + 5), v1);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362A28, 2u, v2, 0xD8u, 0LL);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362A28, 2u, -2003304307, 0xDCu, 0LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v3, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, v4);
  return v4;
}
