/*
 * XREFs of ZwAlpcSetInformation @ 0x1407245D0
 * Callers:
 *     DifZwAlpcSetInformationWrapper @ 0x14069BD10 (DifZwAlpcSetInformationWrapper.c)
 *     PopUmpoInitializeChannel @ 0x140CD5374 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CD55F0 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140CD768C (SshpAlpcInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
