/*
 * XREFs of ?GetPresentStatistics@CRemoteAppRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180255C90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1802A3830 (-GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::GetPresentStatistics(
        CRemoteAppRenderTarget *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  CCompSwapChain *v2; // rcx
  unsigned int v3; // ebx

  if ( *(_DWORD *)(*((_QWORD *)this - 18) + 6256LL) == 7 && (v2 = (CCompSwapChain *)*((_QWORD *)this + 1)) != 0LL )
  {
    return (unsigned int)CCompSwapChain::GetPresentStatistics(v2, a2);
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x10Fu, 0LL);
  }
  return v3;
}
