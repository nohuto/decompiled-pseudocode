/*
 * XREFs of CmpFreeSiloContextCallback @ 0x140A675E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A67634 (CmpStopSiloKeyLockTracker.c)
 */

_KAFFINITY_EX *__fastcall CmpFreeSiloContextCallback(struct _KTHREAD *a1)
{
  void *QuantumTarget; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  CmpStopSiloKeyLockTracker(a1);
  QuantumTarget = (void *)a1->QuantumTarget;
  if ( QuantumTarget )
    ObfDereferenceObject(QuantumTarget);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
}
