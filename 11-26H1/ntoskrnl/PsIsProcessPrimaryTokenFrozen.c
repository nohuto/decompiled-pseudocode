/*
 * XREFs of PsIsProcessPrimaryTokenFrozen @ 0x1407F5E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessPrimaryTokenFrozen(__int64 a1)
{
  return (*(_DWORD *)(a1 + 496) & 0x8000) != 0;
}
