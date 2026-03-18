/*
 * XREFs of HUBHSM_GettingRootHub20PortsInfo @ 0x140009380
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x140027990 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBHSM_GettingRootHub20PortsInfo(__int64 a1)
{
  HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
