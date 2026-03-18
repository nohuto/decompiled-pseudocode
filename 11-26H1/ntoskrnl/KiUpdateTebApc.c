/*
 * XREFs of KiUpdateTebApc @ 0x1402C3B00
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x1402C3B18 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 */

__int64 KiUpdateTebApc()
{
  return KiUpdateTebSchedulingPropertiesCurrentThread();
}
