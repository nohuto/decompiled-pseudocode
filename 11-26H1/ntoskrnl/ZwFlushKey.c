/*
 * XREFs of ZwFlushKey @ 0x140725230
 * Callers:
 *     VfClearVerifierSettings @ 0x140640270 (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x1406A6830 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x1406CB23C (ExpRecordShutdownTime.c)
 *     CmpInterlockedFunction @ 0x14084B290 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     BcdFlushStore @ 0x140B543DC (BcdFlushStore.c)
 *     PopFlushVolumes @ 0x140C06720 (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1);
}
