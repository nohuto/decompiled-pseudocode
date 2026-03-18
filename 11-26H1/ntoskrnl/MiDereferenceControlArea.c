/*
 * XREFs of MiDereferenceControlArea @ 0x1404EF3F0
 * Callers:
 *     MiDeleteVadEventAwe @ 0x140878FD0 (MiDeleteVadEventAwe.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiMapViewInSystemSpace @ 0x1409B7280 (MiMapViewInSystemSpace.c)
 *     AlpcpCreateView @ 0x1409C2150 (AlpcpCreateView.c)
 *     MiPrepareDataViewSubsections @ 0x1409C4B70 (MiPrepareDataViewSubsections.c)
 *     MiDataVadErrorCleanup @ 0x1409C670C (MiDataVadErrorCleanup.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409C9790 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x1409CC82C (MiMapImageInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 *     MiAllocateImageVad @ 0x1409CD948 (MiAllocateImageVad.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x140A97650 (NtGetNlsSectionPtr.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v3) = v2;
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v3);
}
