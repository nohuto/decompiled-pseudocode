/*
 * XREFs of ZwCreateMutant @ 0x14069C880
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140C4B4E0 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
