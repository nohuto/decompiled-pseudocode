/*
 * XREFs of rimUserMemAllocNodeFree @ 0x14014BB80
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall rimUserMemAllocNodeFree(struct _RTL_AVL_TABLE *Table, char *Buffer, __int64 a3, __int64 a4)
{
  GreDeleteFastMutex(Buffer, (__int64)Buffer, a3, a4);
}
