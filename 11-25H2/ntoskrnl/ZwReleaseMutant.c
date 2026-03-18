/*
 * XREFs of ZwReleaseMutant @ 0x14069B540
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReleaseMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
