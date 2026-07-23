/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x14034C170
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x14034B9A0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HalAllocateCommonBufferExV2 @ 0x14034C0E0 (HalAllocateCommonBufferExV2.c)
 *     HalpDmaAllocateContiguousMemory @ 0x14050EE40 (HalpDmaAllocateContiguousMemory.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14057EBCC (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpDmaControllerInitializeController @ 0x14058F088 (HalpDmaControllerInitializeController.c)
 *     HalpAllocateCR3Root @ 0x1405966E4 (HalpAllocateCR3Root.c)
 *     IommuHvInitializeSvmLibrary @ 0x14059FD9C (IommuHvInitializeSvmLibrary.c)
 *     HvlpAllocateOverlayPages @ 0x1405C22B8 (HvlpAllocateOverlayPages.c)
 *     DifMmAllocateContiguousNodeMemoryWrapper @ 0x1406694D0 (DifMmAllocateContiguousNodeMemoryWrapper.c)
 *     ViAllocateContiguousMemory @ 0x140C2BDB4 (ViAllocateContiguousMemory.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CBA6A0 (HalpMiscInitializeAmdSfs.c)
 *     IopInitializeInMemoryDumpData @ 0x140CC04C0 (IopInitializeInMemoryDumpData.c)
 * Callees:
 *     MiConvertContiguousMemoryParameters @ 0x14034C228 (MiConvertContiguousMemoryParameters.c)
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousNodeMemory(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r11d
  __int128 v8; // [rsp+50h] [rbp-38h] BYREF
  __int128 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+90h] [rbp+8h] BYREF

  v10 = a1;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)MiConvertContiguousMemoryParameters(a1, a2, a3, a4, a5, a6, (__int64)&v8) < 0 )
    return 0LL;
  else
    return MiAllocateContiguousMemory(
             (unsigned int)&v10,
             v8,
             DWORD2(v8),
             v9,
             DWORD2(v9),
             v6,
             (__int64)&MiSystemPartition,
             1416523587,
             0);
}
