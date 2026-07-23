/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x14043B530
 * Callers:
 *     MiCreateUserPhysicalView @ 0x14087EEBC (MiCreateUserPhysicalView.c)
 *     MiMapViewInSystemSpace @ 0x140988260 (MiMapViewInSystemSpace.c)
 *     AlpcpCreateView @ 0x140993130 (AlpcpCreateView.c)
 *     MiPrepareDataViewSubsections @ 0x140995B50 (MiPrepareDataViewSubsections.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     NtGetNlsSectionPtr @ 0x140A9B7D0 (NtGetNlsSectionPtr.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiCheckPurgeAndUpMapCount(__int64 a1)
{
  int *v2; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v4; // esi
  int i; // ecx
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v8 = 0LL;
  v9 = 0LL;
  v2 = (int *)(a1 + 72);
  v10[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v4 = 0;
    if ( _interlockedbittestandset(v2, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v2, CurrentIrql);
    for ( i = *v2; (*v2 & 0xBFFFFFFF) != 0x80000000; i = *v2 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v2, 0x40000000u);
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  v6 = *(_DWORD *)(a1 + 56);
  if ( (v6 & 4) != 0 )
  {
    do
    {
      DWORD2(v8) = 2;
      *((_QWORD *)&v10[0] + 1) = v10;
      *(_QWORD *)&v10[0] = v10;
      *(_QWORD *)&v8 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = &v8;
      WORD4(v9) = 263;
      BYTE10(v9) = 6;
      HIDWORD(v9) = 0;
      if ( CurrentIrql == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v2 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v2 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      KeWaitForGate((__int64)&v9 + 8, 18LL);
      LOBYTE(v6) = ExAcquireSpinLockExclusive(v2);
      CurrentIrql = v6;
    }
    while ( (*(_DWORD *)(a1 + 56) & 4) != 0 );
  }
  *(__m128i *)(a1 + 40) = _mm_add_epi64(
                            _mm_load_si128((const __m128i *)&_xmm),
                            _mm_loadu_si128((const __m128i *)(a1 + 40)));
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v6) = PopHibernateInProgress, PopHibernateInProgress) )
      *v2 = 0;
    else
      LOBYTE(v6) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    LOBYTE(v6) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return v6;
}
