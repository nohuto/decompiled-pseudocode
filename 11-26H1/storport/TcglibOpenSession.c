/*
 * XREFs of TcglibOpenSession @ 0x140131260
 * Callers:
 *     RaidActivateTcgLocking @ 0x14009277C (RaidActivateTcgLocking.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x140092A9C (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x140092DF8 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1400938A8 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x140093DD8 (RaidEraseTcgLockingObject.c)
 *     RaidFillTcgAuthKey @ 0x140094074 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x140094918 (RaidGetTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x140094A9C (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgLockingObjects @ 0x140094CAC (RaidGetTcgLockingObjects.c)
 *     RaidRevertTcgConfiguration @ 0x140095CD8 (RaidRevertTcgConfiguration.c)
 *     RaidSetTcgLockingObject @ 0x140096028 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1400962C0 (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1400964C0 (RaidSetTcgLockingObjectMetadata.c)
 *     RaidSetTcgSpAuthorityKey @ 0x140096730 (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     TcglibpOpenSessionWithRetry @ 0x140136870 (TcglibpOpenSessionWithRetry.c)
 */

__int64 __fastcall TcglibOpenSession(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) == 1 )
    return 2147483665LL;
  result = TcglibpOpenSessionWithRetry(a1, a3, (a2 != 1) + 0x20500000001LL);
  if ( (int)result < 0 )
    _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
  return result;
}
