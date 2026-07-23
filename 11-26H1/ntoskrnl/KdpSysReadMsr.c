/*
 * XREFs of KdpSysReadMsr @ 0x1405E6D0C
 * Callers:
 *     KdSystemDebugControl @ 0x14077FDF0 (KdSystemDebugControl.c)
 *     KdpReadMachineSpecificRegister @ 0x140C1A544 (KdpReadMachineSpecificRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
