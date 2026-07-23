/*
 * XREFs of HalpIommuFreeDomainId @ 0x140535968
 * Callers:
 *     HalpIommuDereferenceHardwareDomain @ 0x14058FD00 (HalpIommuDereferenceHardwareDomain.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140785058 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall HalpIommuFreeDomainId(__int64 a1, unsigned int a2)
{
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al

  if ( !HalpHvIommu )
  {
    v4 = (KSPIN_LOCK *)(a1 + 440);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 440));
    *(_BYTE *)(((unsigned __int64)a2 >> 3) + *(_QWORD *)(a1 + 456)) &= ~(1 << (a2 & 7));
    KeReleaseSpinLock(v4, v5);
  }
}
