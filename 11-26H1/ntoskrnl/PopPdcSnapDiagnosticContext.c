/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x140B51D08
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404EF560 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcSnapDiagnosticContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E675C0;
  if ( qword_140E675C0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
