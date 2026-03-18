/*
 * XREFs of ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14003B9B8
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14003B9E0 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 */

void __fastcall SetIndependentFlipStage(
        struct _D3DKMT_AUXILIARYPRESENTINFO **a1,
        enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE a2)
{
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax

  FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(a1[168]);
  if ( FlipManagerAuxiliaryPresentInfo )
    *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 9) = 0;
}
