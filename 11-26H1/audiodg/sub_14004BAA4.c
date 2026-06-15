/*
 * XREFs of sub_14004BAA4 @ 0x14004BAA4
 * Callers:
 *     sub_14004F5F0 @ 0x14004F5F0 (sub_14004F5F0.c)
 * Callees:
 *     <none>
 */

FARPROC __fastcall sub_14004BAA4(HMODULE a1)
{
  return GetProcAddress(a1, "RaiseFailFastException");
}
