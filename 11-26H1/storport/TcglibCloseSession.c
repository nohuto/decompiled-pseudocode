/*
 * XREFs of TcglibCloseSession @ 0x140130A70
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
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpAllocateRequestResources @ 0x140133C68 (TcglibpAllocateRequestResources.c)
 *     TcglibpCloseSession @ 0x140136434 (TcglibpCloseSession.c)
 */

__int64 __fastcall TcglibCloseSession(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int32 v5; // ebp
  int RequestResources; // eax
  int v7; // eax

  v4 = 0LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
  {
    LODWORD(v4) = -2147483631;
  }
  else
  {
    v5 = _InterlockedExchange((volatile __int32 *)a2, 3);
    if ( v5 == 2 )
    {
      if ( !*(_QWORD *)(a2 + 40)
        && !*(_QWORD *)(a2 + 48)
        && (RequestResources = TcglibpAllocateRequestResources(
                                 *(_QWORD *)a1,
                                 1,
                                 *(unsigned __int16 *)(a2 + 24),
                                 2048,
                                 a2 + 40,
                                 a2 + 48),
            v4 = (unsigned int)RequestResources,
            RequestResources < 0)
        || (v7 = TcglibpCloseSession(a1, a2, v4), v4 = (unsigned int)v7, v7 < 0) )
      {
        LODWORD(v4) = TcglibpCheckError(a1, a2, v4);
      }
    }
    _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    if ( ((v5 - 1) & 0xFFFFFFFC) != 0 || v5 == 3 )
    {
      LODWORD(v4) = -1073741811;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
    }
  }
  return (unsigned int)v4;
}
