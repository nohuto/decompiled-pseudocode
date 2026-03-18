/*
 * XREFs of ?SwapChainIsNonSequential@@YA_NPEAVDXGSWAPCHAIN@@@Z @ 0x1403F1C30
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1400664A4 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SwapChainIsNonSequential(struct DXGSWAPCHAIN *a1)
{
  return *((_DWORD *)a1 + 58) != 0;
}
