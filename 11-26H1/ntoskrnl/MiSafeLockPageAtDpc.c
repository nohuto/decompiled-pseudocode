/*
 * XREFs of MiSafeLockPageAtDpc @ 0x14035A998
 * Callers:
 *     MiLegitimatePageForDriversToMap @ 0x1402D2A30 (MiLegitimatePageForDriversToMap.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiJoinHugeContext @ 0x140358884 (MiJoinHugeContext.c)
 *     MiWalkFreeZeroListHead @ 0x140359F50 (MiWalkFreeZeroListHead.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14035A1D0 (MiGetUltraHugeAlreadyActive.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403D1950 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403D2B10 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiCoalesceFreeLargePages @ 0x1403D3124 (MiCoalesceFreeLargePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x1404875D8 (MiInitializeNewUltraHugeContext.c)
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall MiSafeLockPageAtDpc(ULONG_PTR a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  if ( a1 > qword_140E2D920 && !MiIsDecayPfn(a1) )
    return 17;
  v1 = 48 * a1;
  if ( (*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) & 0x40000000000000LL) == 0 )
    return 17;
  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 - 0x220000000000LL + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v1 - 0x220000000000LL + 24) < 0 );
  }
  return 2;
}
