/*
 * XREFs of HvlpProxySyntheticClusterIpi @ 0x14024F8C8
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x14024F9D0 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140251218 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     HvlpRequestProxyInterruptDoorbellGhcbNormal @ 0x1403E5E7C (HvlpRequestProxyInterruptDoorbellGhcbNormal.c)
 *     HvlpRequestProxyInterruptDoorbellGhcbEx @ 0x1403E5F68 (HvlpRequestProxyInterruptDoorbellGhcbEx.c)
 */

__int64 __fastcall HvlpProxySyntheticClusterIpi(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  unsigned __int16 i; // bx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r9d

  v2 = *(_QWORD *)(a1 + 8);
  v3 = a2;
  for ( i = 0; ; v2 = *(_QWORD *)(a1 + 8LL * i + 8) )
  {
    while ( v2 )
    {
      _BitScanForward64(&v6, v2);
      v2 &= ~(1LL << v6);
      v7 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock + 64 * i + (unsigned __int8)v6);
      if ( v7 == KeGetPcr()->Prcb.Number
        && _bittest64((const signed __int64 *)&KeFeatureBits2, 0x29u)
        && (unsigned int)RtlCountSetBitsAffinityEx(a1) == 1 )
      {
        __writemsr(0x83Fu, v3);
        return 0LL;
      }
      _interlockedbittestandset(
        (volatile signed __int32 *)(16 * ((unsigned int)v3 >> 5) + *(_QWORD *)(KeGetPrcb(v7) + 35880) + 512LL),
        v3 & 0x1F);
    }
    if ( ++i >= *(_WORD *)a1 )
      break;
  }
  if ( (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls() )
    return HvlpRequestProxyInterruptDoorbellGhcbEx(a1);
  else
    return HvlpRequestProxyInterruptDoorbellGhcbNormal(a1);
}
