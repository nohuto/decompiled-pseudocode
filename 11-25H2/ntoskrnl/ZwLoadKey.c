/*
 * XREFs of ZwLoadKey @ 0x14069D340
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x140634BD0 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x140A28550 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
