/*
 * XREFs of rimUserMemAllocNodeFree @ 0x14010C7A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall rimUserMemAllocNodeFree(struct _RTL_GENERIC_TABLE *Table, char *Buffer)
{
  GreDeleteFastMutex(Buffer);
}
