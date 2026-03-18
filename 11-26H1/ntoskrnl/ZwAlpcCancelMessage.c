/*
 * XREFs of ZwAlpcCancelMessage @ 0x140724330
 * Callers:
 *     DifZwAlpcCancelMessageWrapper @ 0x14069A290 (DifZwAlpcCancelMessageWrapper.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407E48A4 (SshpAlpcProcessAlpcMessage.c)
 *     PopUmpoProcessMessage @ 0x140AAA1C8 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCancelMessage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
