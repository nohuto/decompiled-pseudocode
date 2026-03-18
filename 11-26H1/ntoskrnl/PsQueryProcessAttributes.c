/*
 * XREFs of PsQueryProcessAttributes @ 0x1409675B0
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 */

LONG_PTR __fastcall PsQueryProcessAttributes(__int64 a1, _BYTE *a2, _BYTE *a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v7; // rax
  __int64 v8; // rdi
  LONG_PTR result; // rax
  LONG_PTR v10; // rtt

  v7 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, (__int64)a3, a4);
  v8 = v7;
  if ( a2 )
    *a2 = SeSecurityAttributePresent(v7, (const UNICODE_STRING *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(v8, (const UNICODE_STRING *)&PspPackagedAppClaim);
  _m_prefetchw((const void *)(a1 + 584));
  result = *(_QWORD *)(a1 + 584);
  do
  {
    if ( (v8 ^ (unsigned __int64)result) >= 0xF )
      return ObfDereferenceObjectWithTag((PVOID)v8, 0x746C6644u);
    v10 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 584), result + 1, result);
  }
  while ( v10 != result );
  if ( ObpTraceFlags )
    return ObpPushStackInfo(v8 - 48, -1, 0x746C6644u);
  return result;
}
