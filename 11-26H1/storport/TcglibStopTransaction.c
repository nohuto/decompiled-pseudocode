/*
 * XREFs of TcglibStopTransaction @ 0x140132028
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

__int64 __fastcall TcglibStopTransaction(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int v7; // r9d

  result = 3221225987LL;
  if ( a3 != -1073741309 )
  {
    result = TcglibpCheckContext(a1, a2);
    if ( (int)result >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
      {
        return 2147483665LL;
      }
      else
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), 0, 1) == 1 )
        {
          result = TcglibpTransaction(a1, v6, 0LL, v7 >> 31);
          if ( (int)result < 0 )
            result = TcglibpCheckError(a1, a2, (unsigned int)result);
        }
        else
        {
          result = 3221225701LL;
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  return result;
}
