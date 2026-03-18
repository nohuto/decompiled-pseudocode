/*
 * XREFs of PATHOBJ_vEnumStart @ 0x140164910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PATHOBJ_vEnumStart(PATHOBJ *ppo)
{
  ppo->fl &= ~8u;
  *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = *(_QWORD *)(*(_QWORD *)&ppo[1] + 32LL);
}
