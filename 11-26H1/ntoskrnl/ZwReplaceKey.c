/*
 * XREFs of ZwReplaceKey @ 0x14072B040
 * Callers:
 *     DifZwReplaceKeyWrapper @ 0x1406BADD0 (DifZwReplaceKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NewFile);
}
