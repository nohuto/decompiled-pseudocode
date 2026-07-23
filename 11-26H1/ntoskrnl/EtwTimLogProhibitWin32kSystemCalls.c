/*
 * XREFs of EtwTimLogProhibitWin32kSystemCalls @ 0x1409FCFC0
 * Callers:
 *     PsConvertToGuiThread @ 0x1409FC500 (PsConvertToGuiThread.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x140B1E7FC (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitWin32kSystemCalls(int a1, __int64 a2)
{
  __int64 *v3; // r8
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 1872) & 0x2000) != 0 )
  {
    v3 = MITIGATION_AUDIT_PROHIBIT_WIN32K_SYSTEM_CALLS;
    if ( a1 != 1 )
      v3 = MITIGATION_ENFORCE_PROHIBIT_WIN32K_SYSTEM_CALLS;
    result = EtwpTimLogMitigationForProcess(2, a1, (_DWORD)v3, a2, 0);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1872), 0xFFFFDFFF);
  }
  return result;
}
