/*
 * XREFs of ZwLoadKey @ 0x14072A1C0
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x1406ACF30 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x1409A1544 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
