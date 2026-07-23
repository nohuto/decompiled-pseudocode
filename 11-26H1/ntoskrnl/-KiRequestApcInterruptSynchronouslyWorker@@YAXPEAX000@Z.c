/*
 * XREFs of ?KiRequestApcInterruptSynchronouslyWorker@@YAXPEAX000@Z @ 0x1405F9610
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1403129C0 (KiRequestSoftwareInterrupt.c)
 */

void __fastcall KiRequestApcInterruptSynchronouslyWorker(void *a1, void *a2, void *a3, void *a4)
{
  KiRequestSoftwareInterrupt(0LL, 1);
}
