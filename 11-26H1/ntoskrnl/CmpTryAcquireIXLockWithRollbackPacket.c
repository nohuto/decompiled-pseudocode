/*
 * XREFs of CmpTryAcquireIXLockWithRollbackPacket @ 0x1408B7648
 * Callers:
 *     CmpTryAcquireKcbIXLocks @ 0x1408B75D4 (CmpTryAcquireKcbIXLocks.c)
 * Callees:
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x14086419C (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireIXLockWithRollbackPacket(unsigned int *a1, char a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  bool v4; // al
  int v6; // eax

  v3 = 0;
  if ( a2 )
    v4 = *a1 == 0;
  else
    v4 = (*a1 & 0x80000000) == 0;
  if ( !v4 )
  {
    if ( a3 )
    {
      v6 = CmpSnapshotTxOwnerArrayToRollbackPacket(a1, a3);
      if ( v6 >= 0 )
        return (unsigned int)-1073741267;
      return (unsigned int)v6;
    }
    else
    {
      return (unsigned int)-1072103423;
    }
  }
  return v3;
}
