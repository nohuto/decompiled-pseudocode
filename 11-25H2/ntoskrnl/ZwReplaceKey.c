/*
 * XREFs of ZwReplaceKey @ 0x14069E1A0
 * Callers:
 *     DifZwReplaceKeyWrapper @ 0x14063B2E0 (DifZwReplaceKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NewFile);
}
