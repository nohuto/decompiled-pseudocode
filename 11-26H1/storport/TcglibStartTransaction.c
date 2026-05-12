/*
 * XREFs of TcglibStartTransaction @ 0x140131F98
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x140092A9C (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x140092DF8 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1400938A8 (RaidDeassignTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x140094A9C (RaidGetTcgLockingObjectMetadata.c)
 *     RaidSetTcgLockingObject @ 0x140096028 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1400964C0 (RaidSetTcgLockingObjectMetadata.c)
 * Callees:
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpTransaction @ 0x140136A88 (TcglibpTransaction.c)
 */

__int64 __fastcall TcglibStartTransaction(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // eax

  v4 = TcglibpCheckContext(a1, a2);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), 1, 0) )
      {
        v4 = -1073741595;
      }
      else
      {
        v5 = TcglibpTransaction(a1, a2, 1LL, 0LL);
        v4 = v5;
        if ( v5 < 0 )
        {
          v4 = TcglibpCheckError(a1, a2, (unsigned int)v5);
          _InterlockedExchange((volatile __int32 *)(a2 + 32), 0);
        }
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v4;
}
