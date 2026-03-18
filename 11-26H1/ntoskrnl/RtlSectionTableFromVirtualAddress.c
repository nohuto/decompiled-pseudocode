/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x14040E4E0
 * Callers:
 *     KeQueryKvaShadowRegion @ 0x14040D384 (KeQueryKvaShadowRegion.c)
 *     RtlAddressInSectionTable @ 0x14040E484 (RtlAddressInSectionTable.c)
 *     KiLockExtendedServiceTable @ 0x1405405C8 (KiLockExtendedServiceTable.c)
 *     KiShadowKernelSectionByAddress @ 0x1405F725C (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405F72D4 (KiUnshadowKernelSectionByAddress.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1407BC484 (KiTpIsSupportedKernelTracepointLocation.c)
 *     EtwpIsValidImageAddress @ 0x140942A20 (EtwpIsValidImageAddress.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A879B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     KiVerifyXcpt15 @ 0x140C803F0 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlSectionTableFromVirtualAddress(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned int v6; // r10d
  unsigned int v7; // ecx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax

  v3 = 0;
  v4 = *(unsigned __int16 *)(a1 + 6);
  v5 = a1 + *(unsigned __int16 *)(a1 + 20) + 24LL;
  v6 = *(unsigned __int16 *)(a1 + 6);
  if ( a1 < 0x7FFFFFFF0000LL )
  {
    v9 = 40 * v4;
    v10 = 40 * v4 + v5;
    if ( v10 <= v5 )
    {
      if ( !v9 && v10 < 0x7FFFFFFF0000LL )
        goto LABEL_2;
    }
    else if ( v10 <= 0x7FFFFFFF0000LL )
    {
      goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    while ( v3 < v6 )
    {
      v7 = *(_DWORD *)(v5 + 12);
      if ( a3 >= v7 && a3 < *(_DWORD *)(v5 + 16) + v7 )
        return v5;
      v5 += 40LL;
      ++v3;
    }
  }
  return 0LL;
}
