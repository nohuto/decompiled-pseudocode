/*
 * XREFs of MmStoreGetPhysicalAddress @ 0x1405321B8
 * Callers:
 *     SmHpBufferProtectEx @ 0x14024E610 (SmHpBufferProtectEx.c)
 *     SmHpChunkUnprotect @ 0x14024EF10 (SmHpChunkUnprotect.c)
 *     SmGetPhysicalAddress @ 0x1404FEF68 (SmGetPhysicalAddress.c)
 *     MmStoreLogDecompressionFailure @ 0x14070FC70 (MmStoreLogDecompressionFailure.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 */

__int64 __fastcall MmStoreGetPhysicalAddress(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v3 = 0LL;
  v1 = 0LL;
  if ( (int)MiGetVirtualAddressState((__int64)&v3, a1, 0) >= 0 )
    return v4;
  return v1;
}
