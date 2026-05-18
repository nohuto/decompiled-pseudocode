/*
 * XREFs of sub_18000D974 @ 0x18000D974
 * Callers:
 *     sub_180010CF0 @ 0x180010CF0 (sub_180010CF0.c)
 * Callees:
 *     <none>
 */

FARPROC __fastcall sub_18000D974(HMODULE a1)
{
  return GetProcAddress(a1, "RaiseFailFastException");
}
