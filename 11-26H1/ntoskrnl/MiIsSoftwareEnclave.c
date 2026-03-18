/*
 * XREFs of MiIsSoftwareEnclave @ 0x1404A00C8
 * Callers:
 *     MiInitializeQueryVadInfo @ 0x14091FE40 (MiInitializeQueryVadInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x880000) == 0x880000 && (*(_DWORD *)(a1 + 72) & 1) == 0;
}
