/*
 * XREFs of HvlpAffinityToVirtualAffinity @ 0x140252BA0
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140251330 (HvlSendSyntheticClusterIpi.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140252764 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpRequestProxyInterruptDoorbellGhcbNormal @ 0x1402F2D60 (HvlpRequestProxyInterruptDoorbellGhcbNormal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvlpAffinityToVirtualAffinity(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _BYTE *i; // r8
  unsigned __int64 v4; // rcx

  v1 = 0LL;
  if ( HvlpVirtualProcessorsIdentityMapped )
    return a1;
  for ( i = &unk_140FC71C3; ; i += 4 )
  {
    if ( (a1 & 1) != 0 )
      v1 |= 1LL << *(i - 2);
    v4 = a1 >> 1;
    if ( !v4 )
      break;
    if ( (v4 & 1) != 0 )
      v1 |= 1LL << *i;
    a1 = v4 >> 1;
    if ( !a1 )
      break;
  }
  return v1;
}
