/*
 * XREFs of HvlpRequestProxyInterruptDoorbellGhcbNormal @ 0x1402F2D60
 * Callers:
 *     HvlpProxySyntheticClusterIpi @ 0x140251228 (HvlpProxySyntheticClusterIpi.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlpAffinityToVirtualAffinity @ 0x140252BA0 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlSevVmgExit @ 0x140727DC0 (HvlSevVmgExit.c)
 */

__int64 __fastcall HvlpRequestProxyInterruptDoorbellGhcbNormal(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *Ghcb; // rdi
  __int64 v4; // rbx

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
  *((_BYTE *)Ghcb + 5) = 1;
  *((_QWORD *)Ghcb + 1) = HvlpAffinityToVirtualAffinity(*(_QWORD *)(v1 + 8));
  do
  {
    *((_QWORD *)Ghcb + 510) = 11LL;
    HvlSevVmgExit();
    v4 = *((_QWORD *)Ghcb + 510);
  }
  while ( (_WORD)v4 == 120 );
  Ghcb[1023] = -1;
  *((_QWORD *)Ghcb + 510) = 0LL;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_WORD)v4 )
    return HvlpHvToNtStatus((unsigned __int16)v4);
  else
    return 0LL;
}
