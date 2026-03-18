/*
 * XREFs of RtlSetAllBits @ 0x1403F4780
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z @ 0x1403F40E8 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403F46B0 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiChangePagingFileMaximum @ 0x1406F88B0 (MiChangePagingFileMaximum.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407829AC (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x1407AFE84 (PnprMmAddRange.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x14086B0C0 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImage @ 0x1408735EC (MiPrepareToHotPatchImage.c)
 *     MiCaptureImageExceptionValues @ 0x140AA95F8 (MiCaptureImageExceptionValues.c)
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     HalpPowerInitDiscard @ 0x140CAE400 (HalpPowerInitDiscard.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB0C78 (HalpDmaInitializeMasterAdapter.c)
 *     VfInitBootDriversLoaded @ 0x140CDE91C (VfInitBootDriversLoaded.c)
 *     MiCreateBootSlabEntries @ 0x140CFE048 (MiCreateBootSlabEntries.c)
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
