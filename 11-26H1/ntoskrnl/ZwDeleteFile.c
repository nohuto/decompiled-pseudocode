/*
 * XREFs of ZwDeleteFile @ 0x140724F50
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x1406A3F00 (DifZwDeleteFileWrapper.c)
 *     KsepDeletePatchSdb @ 0x1407BE428 (KsepDeletePatchSdb.c)
 *     NtEnableLastKnownGood @ 0x1408A6BD0 (NtEnableLastKnownGood.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CC4AA8 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, v1);
}
