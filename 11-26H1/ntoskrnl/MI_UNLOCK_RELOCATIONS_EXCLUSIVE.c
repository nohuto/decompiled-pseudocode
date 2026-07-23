/*
 * XREFs of MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A7D54
 * Callers:
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 *     MiRelocateFinish @ 0x14099C5F4 (MiRelocateFinish.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC9D6C (MiFreeRetpolineImportInfo.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140B3761C (MiCaptureSecureImageBaseAddress.c)
 *     MiCaptureRetpolineImportInfo @ 0x140B3E80C (MiCaptureRetpolineImportInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall MI_UNLOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = (volatile signed __int64 *)(a2 + 24);
  *(_QWORD *)(a2 + 8) = a1 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((unsigned __int64)v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
