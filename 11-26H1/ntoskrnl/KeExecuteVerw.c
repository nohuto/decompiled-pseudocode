/*
 * XREFs of KeExecuteVerw @ 0x140741F00
 * Callers:
 *     PoIdle @ 0x1402F6ED0 (PoIdle.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 *     PpmIdleDefaultExecute @ 0x140604BB0 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:0B02Ah }
}
