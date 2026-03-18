/*
 * XREFs of KiInitializePriorityState @ 0x1405F69C4
 * Callers:
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405EA5A0 (KiAssignSubNodeSharedReadyQueues.c)
 *     KiStartIdleThread @ 0x1405F6B40 (KiStartIdleThread.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x14037F0E0 (KiQueryEffectivePriorityThread.c)
 */

char __fastcall KiInitializePriorityState(_BYTE *a1, struct _KPRCB *a2, __int64 a3)
{
  char EffectivePriorityThread; // al
  char v6; // r9
  char result; // al

  EffectivePriorityThread = KiQueryEffectivePriorityThread(a3, a2);
  v6 = EffectivePriorityThread ^ *a1;
  result = EffectivePriorityThread & 0x7F;
  *a1 ^= v6 & 0x7F;
  *a1 = result | ((unsigned __int8)(*(_DWORD *)(a3 + 120) >> 1) << 7);
  return result;
}
