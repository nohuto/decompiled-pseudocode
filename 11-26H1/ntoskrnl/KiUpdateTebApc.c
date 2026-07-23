/*
 * XREFs of KiUpdateTebApc @ 0x14030E7C0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14030E7D8 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 */

__int64 KiUpdateTebApc()
{
  return KiUpdateTebSchedulingPropertiesCurrentThread();
}
