/*
 * XREFs of PsQueryProcessAttributes @ 0x1409DD970
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
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
