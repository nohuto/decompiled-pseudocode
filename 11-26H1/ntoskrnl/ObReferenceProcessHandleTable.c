/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1409BB940
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052DB88 (IoRevokeHandlesForProcess.c)
 *     PsSetProcessHandleTracingInformation @ 0x14077DFB0 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x14077E4F4 (EtwpObjectHandleRundown.c)
 *     ObpCloseHandle @ 0x140929C00 (ObpCloseHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObQueryObjectAuditingByHandle @ 0x1409BA6D0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1409BAAF0 (ObSetHandleAttributes.c)
 *     ObFindHandleForObject @ 0x1409BB240 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1409BB2E4 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1409BB650 (ObCompleteObjectDuplication.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409BBA80 (IopQueryProcessIdsUsingFile.c)
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1409BDC4C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140B4F59C (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  unsigned __int64 v3; // rtt
  unsigned __int64 Count; // rdi

  v2 = a1 + 61;
  _m_prefetchw(&a1[61]);
  v3 = a1[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[61], v3 + 2, v3)
    && !ExfAcquireRundownProtection(a1 + 61) )
  {
    return 0LL;
  }
  Count = a1[96].Count;
  if ( !Count )
    ExReleaseRundownProtection_0(v2);
  return Count;
}
