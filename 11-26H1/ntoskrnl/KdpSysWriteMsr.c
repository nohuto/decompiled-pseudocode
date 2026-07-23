/*
 * XREFs of KdpSysWriteMsr @ 0x1405E6E04
 * Callers:
 *     KdSystemDebugControl @ 0x14077FDF0 (KdSystemDebugControl.c)
 *     KdpWriteMachineSpecificRegister @ 0x140C1B8B4 (KdpWriteMachineSpecificRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
