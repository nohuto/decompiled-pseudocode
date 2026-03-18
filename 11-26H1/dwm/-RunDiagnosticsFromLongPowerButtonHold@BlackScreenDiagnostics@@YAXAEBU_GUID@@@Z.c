/*
 * XREFs of ?RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXAEBU_GUID@@@Z @ 0x14000EB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BlackScreenDiagnostics::RunDiagnosticsFromLongPowerButtonHold(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(1, 1, this);
}
