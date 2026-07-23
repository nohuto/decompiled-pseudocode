/*
 * XREFs of ZwDeleteFile @ 0x140729B20
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x1406A7AE0 (DifZwDeleteFileWrapper.c)
 *     KsepDeletePatchSdb @ 0x1407C1488 (KsepDeletePatchSdb.c)
 *     NtEnableLastKnownGood @ 0x1408AD040 (NtEnableLastKnownGood.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CCAB88 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
