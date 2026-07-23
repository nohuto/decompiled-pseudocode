/*
 * XREFs of MiExceptionForMappedVa @ 0x1406FBB6C
 * Callers:
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 */

__int64 __fastcall MiExceptionForMappedVa(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  KIRQL v5; // al
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v7; // r8

  v4 = 0;
  v5 = MiLockVadTree(4u, a2, a3);
  Flink = stru_140E34D88.Header.WaitListHead.Flink;
  if ( stru_140E34D88.Header.WaitListHead.Flink )
  {
    do
    {
      v7 = (unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL;
      if ( a1 >= (struct _LIST_ENTRY *)((char *)Flink[2].Flink + v7) )
      {
        Flink = Flink->Blink;
      }
      else
      {
        if ( (unsigned __int64)a1 >= v7 )
          break;
        Flink = Flink->Flink;
      }
    }
    while ( Flink );
    if ( Flink && ((__int64)Flink[3].Blink & 2) != 0 )
      v4 = 1;
  }
  MiUnlockVadTree(4, v5);
  return v4;
}
