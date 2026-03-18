/*
 * XREFs of HalpIommuGetDomainId @ 0x14058BF1C
 * Callers:
 *     HalpIommuAcquireNewDomain @ 0x14058BAE0 (HalpIommuAcquireNewDomain.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078268C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlFindClearBitsAndSet @ 0x1403586A0 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall HalpIommuGetDomainId(__int64 a1, ULONG *a2)
{
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // di
  ULONG ClearBitsAndSet; // eax
  unsigned int v8; // ebx

  if ( HalpHvIommu )
    return 3221225659LL;
  v5 = (KSPIN_LOCK *)(a1 + 440);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 440));
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 448), 1u, 0);
  *a2 = ClearBitsAndSet;
  v8 = -1073741670;
  if ( ClearBitsAndSet != -1 )
    v8 = 0;
  KeReleaseSpinLock(v5, v6);
  return v8;
}
