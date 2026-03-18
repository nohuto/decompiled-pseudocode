/*
 * XREFs of IsValidMouseSensitivity @ 0x14017AED0
 * Callers:
 *     TryUpdatePTPConfigFromRegistry @ 0x14017C970 (TryUpdatePTPConfigFromRegistry.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401BA808 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidMouseSensitivity(int a1, int a2, int a3)
{
  W32GetUserSessionState(a1, a2, a3);
  return (unsigned int)(a1 - 1) <= 0x13;
}
