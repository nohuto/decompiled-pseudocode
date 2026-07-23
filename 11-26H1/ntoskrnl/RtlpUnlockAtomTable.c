/*
 * XREFs of RtlpUnlockAtomTable @ 0x1409FCE80
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14045AA90 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14049E82C (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x1408098A0 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409B8CD0 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1409FCC40 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1409FCD10 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140B5BAA4 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
