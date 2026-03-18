/*
 * XREFs of HMChangeOwnerProcessWorker @ 0x1400CE880
 * Callers:
 *     HMChangeOwnerProcess @ 0x1400CE860 (HMChangeOwnerProcess.c)
 * Callees:
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1400CFF28 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcessWorker(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rax

  v4 = HMPheFromObjectWorker(a1, a2, a3);
  return HMChangeOwnerPheProcessWorker(v4, a2);
}
