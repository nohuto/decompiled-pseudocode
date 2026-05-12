/*
 * XREFs of RaidGetTcgLockingObject @ 0x140094918
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x140092A9C (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x140092DF8 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1400938A8 (RaidDeassignTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x140094A9C (RaidGetTcgLockingObjectMetadata.c)
 *     RaidSetTcgLockingObject @ 0x140096028 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1400962C0 (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1400964C0 (RaidSetTcgLockingObjectMetadata.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     TcglibCloseSession @ 0x140130A70 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x140131260 (TcglibOpenSession.c)
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpGetLockingObjectInfo @ 0x140132D48 (TcglibpGetLockingObjectInfo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidGetTcgLockingObject(int *a1, unsigned int a2, __int64 a3, char *a4)
{
  int v5; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ebx
  int v12; // eax
  _OWORD v13[3]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  v5 = *a1;
  memset(v13, 0, sizeof(v13));
  if ( v5 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v8 = *((_QWORD *)a1 + 449);
    if ( !v8 )
      return (unsigned int)-1073741637;
    v9 = *((_QWORD *)a1 + 450);
  }
  else
  {
    if ( v5 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v8 = *((_QWORD *)a1 + 765);
    if ( !v8 )
      return (unsigned int)-1073741637;
    v9 = *((_QWORD *)a1 + 766);
  }
  if ( v9 )
  {
    v10 = TcglibOpenSession(v8, 2LL, v13);
    if ( v10 < 0 )
    {
      RtlStringCbCopyA(a4, 0x20uLL, "TcglibOpenSession");
      return (unsigned int)v10;
    }
    if ( a3 )
    {
      v10 = TcglibpCheckContext(v8, v13);
      if ( !v10 )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)&v13[1] + 3, 1, 0) == 1 )
        {
          v10 = -2147483631;
          goto LABEL_23;
        }
        v12 = ((__int64 (__fastcall *)(__int64, _OWORD *, _QWORD, __int64))TcglibpGetLockingObjectInfo)(v8, v13, a2, a3);
        v10 = v12;
        if ( v12 < 0 )
          v10 = TcglibpCheckError(v8, v13, (unsigned int)v12);
        _InterlockedExchange((volatile __int32 *)&v13[1] + 3, 0);
      }
      if ( v10 >= 0 )
      {
        *(_QWORD *)(a3 + 48) *= *(unsigned int *)(v9 + 100);
        *(_QWORD *)(a3 + 56) *= *(unsigned int *)(v9 + 100);
        goto LABEL_25;
      }
    }
    else
    {
      v10 = -1073741811;
    }
LABEL_23:
    RtlStringCbCopyA(a4, 0x20uLL, "TcglibGetLockingObject");
LABEL_25:
    TcglibCloseSession(v8, v13);
    return (unsigned int)v10;
  }
  return (unsigned int)-1073741637;
}
