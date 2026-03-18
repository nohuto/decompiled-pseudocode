/*
 * XREFs of EtwTimLogProhibitFsctlSystemCalls @ 0x140B1C598
 * Callers:
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x140B1C5EC (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitFsctlSystemCalls(int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // r8

  result = *(unsigned int *)(a2 + 2008);
  if ( (result & 4) != 0 )
  {
    v4 = MITIGATION_AUDIT_PROHIBIT_FSCTL_SYSTEM_CALLS;
    if ( a1 != 1 )
      v4 = MITIGATION_ENFORCE_PROHIBIT_FSCTL_SYSTEM_CALLS;
    result = EtwpTimLogMitigationForProcess(3, a1, (_DWORD)v4, a2, 0);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2008), 0xFFFFFFFB);
  }
  return result;
}
