/*
 * XREFs of MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1404AE6C4
 * Callers:
 *     MiRelocateImageAgain @ 0x14087B470 (MiRelocateImageAgain.c)
 *     MiRelocateFinish @ 0x1409CB614 (MiRelocateFinish.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC817C (MiFreeRetpolineImportInfo.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140B3540C (MiCaptureSecureImageBaseAddress.c)
 *     MiCaptureRetpolineImportInfo @ 0x140B3C58C (MiCaptureRetpolineImportInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
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
