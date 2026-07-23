/*
 * XREFs of EtwTimLogProhibitDynamicCode @ 0x140ABDFA4
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x140ABDF28 (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x140B1E7FC (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitDynamicCode(int a1, __int64 a2)
{
  __int64 *v3; // r8
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 1872) & 0x800) != 0 )
  {
    v3 = MITIGATION_AUDIT_PROHIBIT_DYNAMIC_CODE;
    if ( a1 != 1 )
      v3 = MITIGATION_ENFORCE_PROHIBIT_DYNAMIC_CODE;
    result = EtwpTimLogMitigationForProcess(0, a1, (_DWORD)v3, a2, 1);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1872), 0xFFFFF7FF);
  }
  return result;
}
