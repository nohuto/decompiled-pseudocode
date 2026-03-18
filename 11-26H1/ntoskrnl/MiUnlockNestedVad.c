/*
 * XREFs of MiUnlockNestedVad @ 0x140A9F610
 * Callers:
 *     MiLockAddressSpaceToo @ 0x140315064 (MiLockAddressSpaceToo.c)
 *     MiPerformVadSplitting @ 0x140315B44 (MiPerformVadSplitting.c)
 *     MiFreeVadRange @ 0x1403BC958 (MiFreeVadRange.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14041D518 (MiUnlockAndDereferenceNestedVad.c)
 *     MiUpControlAreaRefs @ 0x1404DE558 (MiUpControlAreaRefs.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockNestedVad(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  KeAbPostRelease(v1);
}
