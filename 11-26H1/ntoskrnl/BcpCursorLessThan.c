/*
 * XREFs of BcpCursorLessThan @ 0x14071B3FC
 * Callers:
 *     BcpDisplayProgress @ 0x14071C224 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < *(_QWORD *)&gLoadedDiffHivesLock.Timer.Header.Lock;
}
