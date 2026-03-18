/*
 * XREFs of ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802A7A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180034610 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x180104DB8 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CConversionSwapChain::Present(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4, int a5)
{
  char v9; // si
  CConversionSwapChain *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx

  if ( (a3 & 2) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v10 = (CConversionSwapChain *)(a1 - 24);
    v9 = 0;
    *((_DWORD *)v10 + 135) = 0;
    CConversionSwapChain::ConvertSingleDesktopPlane(v10);
  }
  v11 = CLegacySwapChain::Present(a1, a2, a3, a4, a5);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x11Bu, 0LL);
  if ( !v9 )
    **(_DWORD **)(a1 + 776) = 0;
  return v12;
}
