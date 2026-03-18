/*
 * XREFs of XilCoreCommonBuffer_ReleaseBuffers @ 0x140033370
 * Callers:
 *     TR_Disable_Internal @ 0x14003D720 (TR_Disable_Internal.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x14004BDD4 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     TR_SetClientAddressesForOffload @ 0x14004BECC (TR_SetClientAddressesForOffload.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x140057340 (XilCoreDeviceSlot_FreeResources.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x140033410 (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 */

void __fastcall XilCoreCommonBuffer_ReleaseBuffers(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx

  *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v4[1] != a2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    v5[1] = a2;
    if ( *((_DWORD *)v4 + 20) == 2 )
      ExFreePoolWithTag(v4, 0x49434858u);
    else
      XilCoreCommonBuffer_ReleaseBufferInternal(a1, v4);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
}
