/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1409717D0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052B668 (IoRevokeHandlesForProcess.c)
 *     PsSetProcessHandleTracingInformation @ 0x14077B370 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x14077B8B4 (EtwpObjectHandleRundown.c)
 *     ObpCloseHandle @ 0x1408F9C70 (ObpCloseHandle.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     PspApplyMitigationOptions @ 0x140964120 (PspApplyMitigationOptions.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409705AC (IopQueryProcessIdsUsingFile.c)
 *     ObSetHandleAttributes @ 0x140970980 (ObSetHandleAttributes.c)
 *     ObFindHandleForObject @ 0x1409710D0 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x140971174 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1409714E0 (ObCompleteObjectDuplication.c)
 *     ObInitProcess @ 0x140971938 (ObInitProcess.c)
 *     ObQueryObjectAuditingByHandle @ 0x1409728D0 (ObQueryObjectAuditingByHandle.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140972A58 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObWaitForMultipleObjects @ 0x140A230B0 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
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
