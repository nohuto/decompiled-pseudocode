/*
 * XREFs of TcglibSetBandMetadata @ 0x1401319A4
 * Callers:
 *     RaidSetTcgLockingObjectMetadata @ 0x1400964C0 (RaidSetTcgLockingObjectMetadata.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpSetBandMetadata @ 0x1401333A8 (TcglibpSetBandMetadata.c)
 *     TcglibpAuthenticateSession @ 0x14013634C (TcglibpAuthenticateSession.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibSetBandMetadata(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  int v10; // ebx
  __int64 *v11; // r10
  __int64 *v12; // r9
  int v13; // r9d
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF

  v16 = 0LL;
  v8 = a3;
  v10 = TcglibpCheckContext(a1, a2);
  if ( v10 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Eu,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v12 = &v16;
      if ( v11 )
        v12 = v11;
      v10 = TcglibpAuthenticateSession(a1, v9, v8 + 0x900030001LL, v12);
      if ( v10 >= 0 )
      {
        v14 = TcglibpSetBandMetadata(a1, a2, v8, v13, a5, a6);
        v10 = v14;
        if ( v14 < 0 )
          v10 = TcglibpCheckError(a1, a2, (unsigned int)v14);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x2Du,
      (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
