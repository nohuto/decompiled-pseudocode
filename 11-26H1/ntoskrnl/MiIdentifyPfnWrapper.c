/*
 * XREFs of MiIdentifyPfnWrapper @ 0x1402F0D20
 * Callers:
 *     MiQueryLeafPte @ 0x1403DA3A0 (MiQueryLeafPte.c)
 *     MiLogAllocateWsleEvent @ 0x140515DFC (MiLogAllocateWsleEvent.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MmIdentifyPhysicalMemory @ 0x140868394 (MmIdentifyPhysicalMemory.c)
 *     MiScrubProcessLargePage @ 0x14087DEB8 (MiScrubProcessLargePage.c)
 *     MmQueryPfnList @ 0x140A53870 (MmQueryPfnList.c)
 *     MmRelocatePfnList @ 0x140B6D1F4 (MmRelocatePfnList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIdentifyPfn @ 0x1402F0EF0 (MiIdentifyPfn.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 result; // rax

  v6 = (unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = (a1 + 0x220000000000LL) / 48;
  if ( v7 > qword_140E2D7A0 && (v7 < qword_140E347B0 || v7 >= qword_140E347B0 + 2048) )
  {
LABEL_20:
    *a3 = 0LL;
    a3[2] = 0LL;
    a3[2] |= 2uLL;
    result = 0LL;
    a3[1] = v7;
    return result;
  }
  v8 = 48 * v7 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6);
  }
  if ( (*(_QWORD *)(v8 + 40) & 0x40000000000000LL) == 0 && !(unsigned int)MiIsDecayPfn((a1 + 0x220000000000LL) / 48) )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    goto LABEL_20;
  }
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  if ( CurrentIrql == 17 )
    goto LABEL_20;
  v11 = MiIdentifyPfn((a1 + 0x220000000000LL) / 48, a2, a3);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v11;
}
