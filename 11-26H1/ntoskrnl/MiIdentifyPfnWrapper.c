/*
 * XREFs of MiIdentifyPfnWrapper @ 0x1402D2DA0
 * Callers:
 *     MiQueryLeafPte @ 0x1403DD590 (MiQueryLeafPte.c)
 *     MiLogAllocateWsleEvent @ 0x14050F86C (MiLogAllocateWsleEvent.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MmIdentifyPhysicalMemory @ 0x14086E774 (MmIdentifyPhysicalMemory.c)
 *     MiScrubProcessLargePage @ 0x1408842B8 (MiScrubProcessLargePage.c)
 *     MmQueryPfnList @ 0x140A5CB60 (MmQueryPfnList.c)
 *     MmRelocatePfnList @ 0x140B705C4 (MmRelocatePfnList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v11; // ebp
  __int64 v12; // rbx
  __int64 result; // rax

  v5 = 0xFFFFDE0000000000uLL;
  v7 = (unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = (a1 + 0x220000000000LL) / 48;
  if ( v8 > qword_140E2D920 && (v8 < qword_140E34930 || v8 >= qword_140E34930 + 2048) )
  {
LABEL_20:
    *a3 = 0LL;
    a3[2] = 0LL;
    a3[2] |= 2uLL;
    result = 0LL;
    a3[1] = v8;
    return result;
  }
  v9 = 48 * v8 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
  }
  if ( (*(_QWORD *)(v9 + 40) & 0x40000000000000LL) == 0 && !(unsigned int)MiIsDecayPfn((a1 + 0x220000000000LL) / 48) )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    goto LABEL_20;
  }
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5, v7, a3) )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  if ( CurrentIrql == 17 )
    goto LABEL_20;
  v12 = MiIdentifyPfn((a1 + 0x220000000000LL) / 48, a2, a3);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v12;
}
