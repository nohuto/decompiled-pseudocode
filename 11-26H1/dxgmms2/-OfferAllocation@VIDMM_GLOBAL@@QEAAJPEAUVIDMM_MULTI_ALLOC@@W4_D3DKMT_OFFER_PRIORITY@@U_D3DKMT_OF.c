/*
 * XREFs of ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x140113C7C
 * Callers:
 *     VidMmOfferAllocation @ 0x14003DA50 (VidMmOfferAllocation.c)
 * Callees:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x140113CB0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 */

int __fastcall VIDMM_GLOBAL::OfferAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_MULTI_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  if ( dword_14008A5D8 == -1 )
  {
    if ( *((_DWORD *)this + 10) < 0x5022u )
      return 0;
  }
  else if ( !dword_14008A5D8 )
  {
    return 0;
  }
  return VIDMM_GLOBAL::OfferOneAllocation(this, a2, a3, a4);
}
