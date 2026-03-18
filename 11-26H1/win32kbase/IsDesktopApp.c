/*
 * XREFs of IsDesktopApp @ 0x140156B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDesktopApp(__int64 a1)
{
  return (*(_BYTE *)(a1 + 808) & 0x30) == 0;
}
