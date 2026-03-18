/*
 * XREFs of IsValidMouseSensitivity @ 0x140141330
 * Callers:
 *     TryUpdatePTPConfigFromRegistry @ 0x1401462A4 (TryUpdatePTPConfigFromRegistry.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B4FC0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidMouseSensitivity(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = a1;
  W32GetUserSessionState(a1, a2);
  return (unsigned int)(v2 - 1) <= 0x13;
}
