/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1401B4810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

_BOOL8 DxgkVidMmAllowFailOnOfferReclaimErrors(void)
{
  struct DXGPROCESS *Current; // rax

  Current = DXGPROCESS::GetCurrent();
  return !Current || (*((_DWORD *)Current + 102) & 4) == 0;
}
