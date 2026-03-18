/*
 * XREFs of RtlpUnlockAtomTable @ 0x140A41790
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140461AD0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1404A519C (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x140803E00 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409E0A60 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x140A41220 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140A412F0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140B58C84 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3);
}
