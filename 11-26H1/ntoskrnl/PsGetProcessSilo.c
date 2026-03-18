/*
 * XREFs of PsGetProcessSilo @ 0x14043D780
 * Callers:
 *     PsIsProcessInAppSilo @ 0x1407EE6E0 (PsIsProcessInAppSilo.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 * Callees:
 *     PspGetJobSilo @ 0x14043D870 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 672));
}
