/*
 * XREFs of HvlpRequestProxyInterruptDoorbellGhcbEx @ 0x1402F2E4C
 * Callers:
 *     HvlpProxySyntheticClusterIpi @ 0x140251228 (HvlpProxySyntheticClusterIpi.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlSevVmgExit @ 0x140727DC0 (HvlSevVmgExit.c)
 */

__int64 __fastcall HvlpRequestProxyInterruptDoorbellGhcbEx(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *Ghcb; // rbp
  __int64 v4; // rdi
  __int64 v5; // rbx

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
  }
  Ghcb = KeGetCurrentPrcb()->Ghcb;
  Ghcb[1023] = 1;
  *((_QWORD *)Ghcb + 509) = 0LL;
  *(_OWORD *)Ghcb = 0LL;
  *((_QWORD *)Ghcb + 2) = 0LL;
  *((_BYTE *)Ghcb + 5) = 1;
  v4 = (((unsigned int)HvlpAffinityToHvProcessorSet(v1, Ghcb + 2, 64LL) + 7) << 14) & 0x3FE0000 | 0x15LL;
  do
  {
    *((_QWORD *)Ghcb + 510) = v4;
    HvlSevVmgExit();
    v5 = *((_QWORD *)Ghcb + 510);
  }
  while ( (_WORD)v5 == 120 );
  Ghcb[1023] = -1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_WORD)v5 )
    return HvlpHvToNtStatus((unsigned __int16)v5);
  else
    return 0LL;
}
