/*
 * XREFs of ZwFlushKey @ 0x14069CF80
 * Callers:
 *     VfClearVerifierSettings @ 0x140603DE0 (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x140634220 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x14064772C (ExpRecordShutdownTime.c)
 *     CmpInterlockedFunction @ 0x1407BB58C (CmpInterlockedFunction.c)
 *     BcdFlushStore @ 0x1408020A4 (BcdFlushStore.c)
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x140B57F10 (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
