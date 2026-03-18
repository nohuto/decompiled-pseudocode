/*
 * XREFs of HUBHSM_GettingRootHubInfo @ 0x1400093E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetControllerInfo @ 0x140027558 (HUBUCX_GetControllerInfo.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1400283C4 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBHSM_GettingRootHubInfo(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_GetControllerInfo(v1);
  HUBUCX_GetRootHubInfoUsingUCXIoctl(v1);
  return 1000LL;
}
