/*
 * XREFs of ZwLoadKey2 @ 0x14072A1E0
 * Callers:
 *     DifZwLoadKey2Wrapper @ 0x1406ACA10 (DifZwLoadKey2Wrapper.c)
 *     BiLoadHive @ 0x1409A1544 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
