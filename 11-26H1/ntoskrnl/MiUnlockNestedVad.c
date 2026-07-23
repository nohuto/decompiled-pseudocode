/*
 * XREFs of MiUnlockNestedVad @ 0x140A9F940
 * Callers:
 *     MiLockAddressSpaceToo @ 0x140317094 (MiLockAddressSpaceToo.c)
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x140414D68 (MiUnlockAndDereferenceNestedVad.c)
 *     MiUpControlAreaRefs @ 0x1404D7C38 (MiUpControlAreaRefs.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockNestedVad(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  KeAbPostRelease(v1);
}
