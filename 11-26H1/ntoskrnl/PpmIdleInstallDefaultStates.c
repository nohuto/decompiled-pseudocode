/*
 * XREFs of PpmIdleInstallDefaultStates @ 0x140604C10
 * Callers:
 *     <none>
 * Callees:
 *     PpmInstallNewIdleStates @ 0x140605810 (PpmInstallNewIdleStates.c)
 */

__int64 __fastcall PpmIdleInstallDefaultStates(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = a1 + 34880;
  return PpmInstallNewIdleStates();
}
