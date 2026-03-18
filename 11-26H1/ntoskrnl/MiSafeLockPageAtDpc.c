/*
 * XREFs of MiSafeLockPageAtDpc @ 0x140358BF8
 * Callers:
 *     MiLegitimatePageForDriversToMap @ 0x1402F09B0 (MiLegitimatePageForDriversToMap.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402F0BC0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiJoinHugeContext @ 0x140356AE4 (MiJoinHugeContext.c)
 *     MiWalkFreeZeroListHead @ 0x1403581B0 (MiWalkFreeZeroListHead.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140358430 (MiGetUltraHugeAlreadyActive.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403C7A60 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403C8C60 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiCoalesceFreeLargePages @ 0x1403C9274 (MiCoalesceFreeLargePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x14048DA98 (MiInitializeNewUltraHugeContext.c)
 *     MiDereferenceHugeContext @ 0x1404F6860 (MiDereferenceHugeContext.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 */

char __fastcall MiSafeLockPageAtDpc(ULONG_PTR a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  if ( a1 > qword_140E2D7A0 && !MiIsDecayPfn(a1) )
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
