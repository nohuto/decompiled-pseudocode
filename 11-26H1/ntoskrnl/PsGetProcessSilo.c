/*
 * XREFs of PsGetProcessSilo @ 0x140430030
 * Callers:
 *     PsIsProcessInAppSilo @ 0x1407F4240 (PsIsProcessInAppSilo.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     PspGetJobSilo @ 0x140430120 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 672));
}
