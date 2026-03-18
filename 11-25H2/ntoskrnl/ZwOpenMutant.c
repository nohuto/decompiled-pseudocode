/*
 * XREFs of ZwOpenMutant @ 0x14069D720
 * Callers:
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
