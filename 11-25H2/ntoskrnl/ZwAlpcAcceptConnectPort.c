/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x14069C060
 * Callers:
 *     DifZwAlpcAcceptConnectPortWrapper @ 0x14062FA80 (DifZwAlpcAcceptConnectPortWrapper.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14075844C (SshpAlpcProcessAlpcMessage.c)
 *     PopUmpoProcessMessage @ 0x140A1899C (PopUmpoProcessMessage.c)
 *     SepRmLsaConnectRequest @ 0x140A4F304 (SepRmLsaConnectRequest.c)
 *     PopMonitorProcessLoop @ 0x140A7C7B8 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
