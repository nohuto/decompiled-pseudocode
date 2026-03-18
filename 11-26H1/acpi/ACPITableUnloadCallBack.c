/*
 * XREFs of ACPITableUnloadCallBack @ 0x140069AE0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x14004A10C (AMLIRestartContext.c)
 *     ACPIBuildIssueInvalidateRelations @ 0x140057CF0 (ACPIBuildIssueInvalidateRelations.c)
 */

__int64 __fastcall ACPITableUnloadCallBack(__int64 a1, _QWORD *a2)
{
  ACPIBuildIssueInvalidateRelations(a1, RootDeviceExtension);
  return AMLIRestartContext(a2);
}
