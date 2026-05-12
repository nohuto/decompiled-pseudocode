/*
 * XREFs of TcglibActivateLockingSpEx @ 0x140130754
 * Callers:
 *     RaidActivateTcgLocking @ 0x14009277C (RaidActivateTcgLocking.c)
 * Callees:
 *     TcglibEalLogInfo @ 0x14008D804 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpGetTableColumnData @ 0x140134100 (TcglibpGetTableColumnData.c)
 *     TcglibpSetTableColumnData @ 0x1401342FC (TcglibpSetTableColumnData.c)
 *     TcglibpActivateLockingSp @ 0x1401345C4 (TcglibpActivateLockingSp.c)
 *     TcglibpAuthenticateSession @ 0x14013634C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibActivateLockingSpEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  _OWORD *v8; // r9
  int TableColumnData; // eax
  char v11[8]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v12[2]; // [rsp+48h] [rbp-70h] BYREF
  int v13; // [rsp+68h] [rbp-50h]

  if ( *(_DWORD *)(a1 + 32) == 512 && a3 <= 1 )
  {
    v6 = TcglibpCheckContext(a1, a2);
    if ( !v6 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
      {
        return (unsigned int)-2147483631;
      }
      else
      {
        v13 = 0;
        memset(v12, 0, sizeof(v12));
        if ( (v8
           || (TableColumnData = TcglibpGetTableColumnData(a1, v7, 33794, 3, (__int64)v12 + 4, 32, (__int64)v12),
               v8 = v12,
               TableColumnData >= 0))
          && (TableColumnData = TcglibpAuthenticateSession(a1, a2, 0x900000006LL, v8), TableColumnData >= 0)
          && (TableColumnData = TcglibpActivateLockingSp(a1, a2, a3), TableColumnData >= 0)
          || (v6 = TcglibpCheckError(a1, a2, (unsigned int)TableColumnData), v6 >= 0) )
        {
          v11[0] = 1;
          v6 = TcglibpSetTableColumnData(a1, a2, 196609, 8, (__int64)v11, 1, 8);
          if ( v6 >= 0 )
            TcglibEalLogInfo(*(int **)a1, "TcglibActivateLockingSpEx success", a3, 0, 0LL);
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
