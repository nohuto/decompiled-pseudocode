/*
 * XREFs of ZwFlushKey @ 0x140729E00
 * Callers:
 *     VfClearVerifierSettings @ 0x140643E50 (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x1406AA410 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x1406CF26C (ExpRecordShutdownTime.c)
 *     CmpInterlockedFunction @ 0x1408515A0 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     BcdFlushStore @ 0x140B56C7C (BcdFlushStore.c)
 *     PopFlushVolumes @ 0x140C0C930 (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
