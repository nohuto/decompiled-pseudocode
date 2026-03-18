/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x140724310
 * Callers:
 *     DifZwAlpcAcceptConnectPortWrapper @ 0x14069A0A0 (DifZwAlpcAcceptConnectPortWrapper.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407E48A4 (SshpAlpcProcessAlpcMessage.c)
 *     PopUmpoProcessMessage @ 0x140AAA1C8 (PopUmpoProcessMessage.c)
 *     SepRmLsaConnectRequest @ 0x140AF0D9C (SepRmLsaConnectRequest.c)
 *     PopMonitorProcessLoop @ 0x140B24F78 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
