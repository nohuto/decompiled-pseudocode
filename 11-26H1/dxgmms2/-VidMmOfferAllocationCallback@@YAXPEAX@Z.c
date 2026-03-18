/*
 * XREFs of ?VidMmOfferAllocationCallback@@YAXPEAX@Z @ 0x1400319F0
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchSubmitDeviceCommand @ 0x140030D50 (VidSchSubmitDeviceCommand.c)
 *     VidSchCancelDeviceCommand @ 0x14003AFC8 (VidSchCancelDeviceCommand.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x140113CB0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 */

void __fastcall VidMmOfferAllocationCallback(_QWORD *a1)
{
  __int64 v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[12] + 12LL), 0xFFFFFFFF) == 1 )
  {
    v2 = a1[12];
    if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v2 + 8), 2, 1) == 1 && (byte_14008A201 & 1) != 0 )
      McTemplateK0x_EtwWriteTransfer(v2, &EventCompleteOfferAllocation, 1LL, a1);
  }
}
