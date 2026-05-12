/*
 * XREFs of RaidFillTcgAuthKey @ 0x140094074
 * Callers:
 *     RaidActivateTcgLocking @ 0x14009277C (RaidActivateTcgLocking.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x140092A9C (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x140092DF8 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1400938A8 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x140093DD8 (RaidEraseTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x140094A9C (RaidGetTcgLockingObjectMetadata.c)
 *     RaidRevertTcgConfiguration @ 0x140095CD8 (RaidRevertTcgConfiguration.c)
 *     RaidSetTcgLockingObject @ 0x140096028 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1400962C0 (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1400964C0 (RaidSetTcgLockingObjectMetadata.c)
 *     RaidSetTcgSpAuthorityKey @ 0x140096730 (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     TcglibCloseSession @ 0x140130A70 (TcglibCloseSession.c)
 *     TcglibGetMsid @ 0x1401311AC (TcglibGetMsid.c)
 *     TcglibOpenSession @ 0x140131260 (TcglibOpenSession.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaidFillTcgAuthKey(
        __int64 a1,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int *a5,
        char *pszDest)
{
  int Msid; // ebx
  _OWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]

  Msid = 0;
  v10 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( a3 && a4 )
  {
    *a5 = a3;
    memmove(a5 + 1, a4, a3);
  }
  else if ( a2 )
  {
    Msid = TcglibOpenSession(a1, 1LL, v9);
    if ( Msid >= 0 )
    {
      Msid = TcglibGetMsid(a1, v9, a5);
      if ( Msid < 0 )
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibGetMsid");
      TcglibCloseSession(a1, v9);
    }
    else
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
    }
  }
  return (unsigned int)Msid;
}
