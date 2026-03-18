/*
 * XREFs of MI_UNLOCK_RELOCATIONS_SHARED @ 0x1404815D4
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x140480C40 (MiUpdateImagePfnImportRelocations.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MI_UNLOCK_RELOCATIONS_SHARED(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = a2 + 24;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 24));
  KeAbPostRelease(v3);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
