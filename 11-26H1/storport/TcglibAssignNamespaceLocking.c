/*
 * XREFs of TcglibAssignNamespaceLocking @ 0x1401308D4
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x140092A9C (RaidAssignTcgNamespaceLockingObject.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     TcglibEalLogInfo @ 0x14008D804 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpAssignNamespaceLocking @ 0x1401329F0 (TcglibpAssignNamespaceLocking.c)
 *     TcglibpAuthenticateSession @ 0x14013634C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibAssignNamespaceLocking(int **a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 *v10; // r10
  __int64 *v11; // r9
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF

  v13 = 0LL;
  if ( a3 && a5 )
  {
    v9 = TcglibpCheckContext(a1, a2);
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x21u,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
          v9);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x22u,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v11 = &v13;
      if ( v10 )
        v11 = v10;
      v9 = TcglibpAuthenticateSession(a1, v8, 0x900010001LL, v11);
      if ( v9 < 0 || (v9 = TcglibpAssignNamespaceLocking(a1, a2, a3, a5), v9 < 0) )
        v9 = TcglibpCheckError(a1, a2, (unsigned int)v9);
      else
        TcglibEalLogInfo(*a1, "TcglibAssignNamespaceLocking success", a3, *a5, 0LL);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x20u,
        (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
