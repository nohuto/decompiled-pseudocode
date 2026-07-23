/*
 * XREFs of PsIsThreadImpersonating @ 0x140ADDE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsThreadImpersonating(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1440) & 8) != 0;
}
