/*
 * XREFs of ZwCreateMutant @ 0x140724B30
 * Callers:
 *     DifZwCreateMutantWrapper @ 0x1406A0320 (DifZwCreateMutantWrapper.c)
 *     BcdInitializeBcdSyncMutant @ 0x140890FBC (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
