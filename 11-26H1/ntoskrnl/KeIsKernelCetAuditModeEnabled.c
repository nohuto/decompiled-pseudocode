/*
 * XREFs of KeIsKernelCetAuditModeEnabled @ 0x1404FB774
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetAuditModeEnabled()
{
  return (_BYTE)KiKernelCetAuditModeEnabled != 0;
}
