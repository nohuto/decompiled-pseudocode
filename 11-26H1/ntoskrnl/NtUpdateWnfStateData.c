/*
 * XREFs of NtUpdateWnfStateData @ 0x14094A860
 * Callers:
 *     DifNtUpdateWnfStateDataWrapper @ 0x140690B50 (DifNtUpdateWnfStateDataWrapper.c)
 *     SepSecureBootCheckForUpdates @ 0x140CDE0A4 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 */

__int64 __fastcall NtUpdateWnfStateData(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  return ExpNtUpdateWnfStateData(a1, a5, a6, a7, 1);
}
