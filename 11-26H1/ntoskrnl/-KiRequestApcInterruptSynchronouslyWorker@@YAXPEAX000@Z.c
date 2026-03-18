/*
 * XREFs of ?KiRequestApcInterruptSynchronouslyWorker@@YAXPEAX000@Z @ 0x1405F6C50
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1402C7D20 (KiRequestSoftwareInterrupt.c)
 */

void __fastcall KiRequestApcInterruptSynchronouslyWorker(void *a1, void *a2, void *a3, void *a4)
{
  KiRequestSoftwareInterrupt(0LL, 1);
}
