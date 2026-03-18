/*
 * XREFs of ZwAlpcCreatePort @ 0x140724390
 * Callers:
 *     DifZwAlpcCreatePortWrapper @ 0x14069A9E0 (DifZwAlpcCreatePortWrapper.c)
 *     PopUmpoInitializeChannel @ 0x140CD5374 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CD55F0 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140CD768C (SshpAlpcInitialize.c)
 *     SeRmInitPhase1 @ 0x140D0B16C (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
