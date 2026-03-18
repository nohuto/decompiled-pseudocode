/*
 * XREFs of ZwAlpcSetInformation @ 0x14069C320
 * Callers:
 *     DifZwAlpcSetInformationWrapper @ 0x1406309D0 (DifZwAlpcSetInformationWrapper.c)
 *     PopUmpoInitializeChannel @ 0x140C21334 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C215B0 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
