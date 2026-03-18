/*
 * XREFs of VmSetVpHostProcess @ 0x14078FB20
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x140766CCC (PsSetVmProcessorHostProcess.c)
 */

NTSTATUS __fastcall VmSetVpHostProcess(_QWORD *a1)
{
  return PsSetVmProcessorHostProcess(a1);
}
