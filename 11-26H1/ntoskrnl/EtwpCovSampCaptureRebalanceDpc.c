/*
 * XREFs of EtwpCovSampCaptureRebalanceDpc @ 0x1406C8910
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

void __fastcall EtwpCovSampCaptureRebalanceDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  *((_DWORD *)DeferredContext + 267) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(DeferredContext + 1040), 0, 0);
}
