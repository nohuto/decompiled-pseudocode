/*
 * XREFs of TcglibEraseBand @ 0x140130ED0
 * Callers:
 *     RaidDeassignTcgLockingObject @ 0x1400938A8 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x140093DD8 (RaidEraseTcgLockingObject.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     TcglibEalLogInfo @ 0x14008D804 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpEraseBand @ 0x140132B48 (TcglibpEraseBand.c)
 */

__int64 __fastcall TcglibEraseBand(int **a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // eax

  v7 = TcglibpCheckContext(a1, a2);
  if ( v7 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Au,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v8 = TcglibpEraseBand(a1, v6, a3);
      v7 = v8;
      if ( v8 >= 0 )
        TcglibEalLogInfo(*a1, "TcglibEraseBand success", a3, 0, 0LL);
      else
        v7 = TcglibpCheckError(a1, a2, (unsigned int)v8);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x29u,
      (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
