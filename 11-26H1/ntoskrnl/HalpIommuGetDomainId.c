/*
 * XREFs of HalpIommuGetDomainId @ 0x14058E69C
 * Callers:
 *     HalpIommuAcquireNewDomain @ 0x14058E260 (HalpIommuAcquireNewDomain.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
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
