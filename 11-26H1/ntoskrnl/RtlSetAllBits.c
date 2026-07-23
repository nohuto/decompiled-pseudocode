/*
 * XREFs of RtlSetAllBits @ 0x1403EE130
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z @ 0x1403EDA98 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403EE060 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiChangePagingFileMaximum @ 0x1406FD580 (MiChangePagingFileMaximum.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x1407B2EE4 (PnprMmAddRange.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x1408714A0 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImage @ 0x14087994C (MiPrepareToHotPatchImage.c)
 *     MiCaptureImageExceptionValues @ 0x140AA5A00 (MiCaptureImageExceptionValues.c)
 *     MiReserveDriverPtes @ 0x140B0C074 (MiReserveDriverPtes.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     HalpPowerInitDiscard @ 0x140CB4440 (HalpPowerInitDiscard.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB6CB8 (HalpDmaInitializeMasterAdapter.c)
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 *     MiCreateBootSlabEntries @ 0x140D043F0 (MiCreateBootSlabEntries.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r8
  unsigned __int64 v2; // rdx

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
