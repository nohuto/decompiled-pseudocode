/*
 * XREFs of ZwDeleteFile @ 0x14069CCA0
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x140632C20 (DifZwDeleteFileWrapper.c)
 *     KsepDeletePatchSdb @ 0x140733E38 (KsepDeletePatchSdb.c)
 *     NtEnableLastKnownGood @ 0x14081AAE0 (NtEnableLastKnownGood.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C126E0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
