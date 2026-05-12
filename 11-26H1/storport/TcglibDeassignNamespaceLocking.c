/*
 * XREFs of TcglibDeassignNamespaceLocking @ 0x140130CEC
 * Callers:
 *     RaidDeassignTcgLockingObject @ 0x1400938A8 (RaidDeassignTcgLockingObject.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     TcglibEalLogInfo @ 0x14008D804 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpDeassignNamespaceLocking @ 0x140132AA4 (TcglibpDeassignNamespaceLocking.c)
 *     TcglibpAuthenticateSession @ 0x14013634C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibDeassignNamespaceLocking(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 *v9; // r10
  __int64 *v10; // r9
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF

  v12 = 0LL;
  v8 = TcglibpCheckContext(a1, a2);
  if ( v8 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x23u,
        (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
        v8);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x24u,
        (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
    return (unsigned int)-2147483631;
  }
  else
  {
    v10 = &v12;
    if ( v9 )
      v10 = v9;
    v8 = TcglibpAuthenticateSession(a1, v7, 0x900010001LL, v10);
    if ( v8 < 0 || (v8 = TcglibpDeassignNamespaceLocking(a1, a2, a4), v8 < 0) )
      v8 = TcglibpCheckError(a1, a2, (unsigned int)v8);
    else
      TcglibEalLogInfo(*a1, "TcglibDeassignNamespaceLocking success", a4, 0, 0LL);
    _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
  }
  return (unsigned int)v8;
}
