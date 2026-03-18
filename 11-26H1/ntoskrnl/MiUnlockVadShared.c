/*
 * XREFs of MiUnlockVadShared @ 0x14027EC50
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     NtAreMappedFilesTheSame @ 0x140961230 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1409706E8 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiReferenceCfgVad @ 0x140AF0820 (MiReferenceCfgVad.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a2 + 40;
  *(_DWORD *)(a1 + 1448) &= ~0x4000u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 40));
  KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
