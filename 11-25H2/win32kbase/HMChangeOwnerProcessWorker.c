/*
 * XREFs of HMChangeOwnerProcessWorker @ 0x14003B380
 * Callers:
 *     HMChangeOwnerProcess @ 0x14003B360 (HMChangeOwnerProcess.c)
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x14003ACDC (HMChangeOwnerPheProcessWorker.c)
 *     _HMPheFromObjectWorker @ 0x14003B3B0 (_HMPheFromObjectWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcessWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = HMPheFromObjectWorker();
  return HMChangeOwnerPheProcessWorker(v3, a2);
}
