/*
 * XREFs of ?ndisIsSystemBooting@@YAEXZ @ 0x14016A450
 * Callers:
 *     ?ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140076200 (-ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool ndisIsSystemBooting(void)
{
  return !ndisBootFinishedTime.QuadPart || MEMORY[0xFFFFF78000000014] - ndisBootFinishedTime.QuadPart < 600000000;
}
