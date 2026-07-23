/*
 * XREFs of PnpReportTargetDeviceChangeAsyncWorker @ 0x140B418A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PnpSetCustomTargetEvent @ 0x1409AB088 (PnpSetCustomTargetEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpReportTargetDeviceChangeAsyncWorker(PVOID P)
{
  PnpSetCustomTargetEvent(
    *((_QWORD **)P + 4),
    0LL,
    0LL,
    *((_QWORD *)P + 5),
    *((_QWORD *)P + 6),
    *((unsigned __int16 **)P + 7));
  ObfDereferenceObjectWithTag(*((PVOID *)P + 4), 0x4E706E50u);
  ExFreePoolWithTag(P, 0x38706E50u);
}
