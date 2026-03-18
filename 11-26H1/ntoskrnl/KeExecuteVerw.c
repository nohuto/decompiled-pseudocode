/*
 * XREFs of KeExecuteVerw @ 0x14073D300
 * Callers:
 *     PoIdle @ 0x1403E9FF0 (PoIdle.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F6610 (KiExecuteSmtIsolationThread.c)
 *     PpmIdleDefaultExecute @ 0x140602100 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:0B02Ah }
}
