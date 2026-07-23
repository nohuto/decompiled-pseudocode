/*
 * XREFs of PspCriticalProcessDeathInfoCollectApc @ 0x140800760
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PspCriticalProcessDeathUserModulesCollect @ 0x14080091C (PspCriticalProcessDeathUserModulesCollect.c)
 */

LONG __fastcall PspCriticalProcessDeathInfoCollectApc(__int64 a1)
{
  PspCriticalProcessDeathUserModulesCollect(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 112) + 28LL);
  return KeSetEvent((PRKEVENT)(a1 + 88), 0, 0);
}
