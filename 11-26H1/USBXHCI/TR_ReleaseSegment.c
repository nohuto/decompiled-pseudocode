/*
 * XREFs of TR_ReleaseSegment @ 0x14004BE54
 * Callers:
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x14004BDD4 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     TR_SetClientAddressesForOffload @ 0x14004BECC (TR_SetClientAddressesForOffload.c)
 * Callees:
 *     <none>
 */

void __fastcall TR_ReleaseSegment(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD **)(a1 + 216);
  if ( *v4 != a1 + 208 )
    __fastfail(3u);
  *a2 = a1 + 208;
  a2[1] = v4;
  *v4 = a2;
  *(_QWORD *)(a1 + 216) = a2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
}
