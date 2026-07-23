/*
 * XREFs of PspCriticalProcessDeathIsFrameInModule @ 0x1408008F4
 * Callers:
 *     PspCriticalProcessDeathUserModulesCollect @ 0x14080091C (PspCriticalProcessDeathUserModulesCollect.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspCriticalProcessDeathIsFrameInModule(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  v3 = v2 + *(unsigned int *)(a1 + 64);
  return v3 >= v2 && v2 <= a2 && a2 < v3;
}
