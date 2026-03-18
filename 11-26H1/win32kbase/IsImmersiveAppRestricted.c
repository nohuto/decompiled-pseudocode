/*
 * XREFs of IsImmersiveAppRestricted @ 0x140121AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppRestricted(__int64 a1)
{
  return (*(_BYTE *)(a1 + 808) & 0x30) == 16;
}
