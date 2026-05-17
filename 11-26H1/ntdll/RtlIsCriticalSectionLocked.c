/*
 * XREFs of RtlIsCriticalSectionLocked @ 0x1801162D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlIsCriticalSectionLocked(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) & 1) == 0;
}
