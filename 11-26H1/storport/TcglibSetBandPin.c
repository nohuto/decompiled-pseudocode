/*
 * XREFs of TcglibSetBandPin @ 0x140131AF8
 * Callers:
 *     RaidSetTcgLockingObjectAuthKey @ 0x1400962C0 (RaidSetTcgLockingObjectAuthKey.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     TcglibEalLogInfo @ 0x14008D804 (TcglibEalLogInfo.c)
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpSetPin @ 0x1401357F0 (TcglibpSetPin.c)
 *     TcglibpAuthenticateSession @ 0x14013634C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibSetBandPin(int **a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r9
  __int64 *v10; // r10
  __int64 v11; // r15
  __int64 *v12; // r9
  __int64 *v13; // r9
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF

  v15 = 0LL;
  v8 = TcglibpCheckContext(a1, a2);
  if ( v8 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x26u,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v11 = v9;
      v12 = &v15;
      if ( v10 )
        v12 = v10;
      v8 = TcglibpAuthenticateSession(a1, v7, v11 + 0x900030001LL, v12);
      if ( v8 < 0 )
        goto LABEL_17;
      v13 = &v15;
      if ( a5 )
        v13 = a5;
      v8 = TcglibpSetPin(a1, a2, v11 + 0xB00030001LL, v13);
      if ( v8 < 0 )
LABEL_17:
        v8 = TcglibpCheckError(a1, a2, (unsigned int)v8);
      else
        TcglibEalLogInfo(*a1, "TcglibSetBandPin success", v11, 0, 0LL);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x25u,
      (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
