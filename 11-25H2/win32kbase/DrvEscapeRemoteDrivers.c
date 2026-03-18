/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1401586B0
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     UserIsDisconnectConnection @ 0x14006BBA0 (UserIsDisconnectConnection.c)
 *     DrvGetDisplayDriverNames @ 0x14011D910 (DrvGetDisplayDriverNames.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014711C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HDXDrvEscape @ 0x1401D1C00 (HDXDrvEscape.c)
 */

__int64 __fastcall DrvEscapeRemoteDrivers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  unsigned int v8; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 SessionState; // rax
  unsigned int v20; // r12d
  unsigned int *DisplayDriverNames; // rbx
  unsigned int i; // r14d
  unsigned __int16 *v23; // rax
  __int64 v24; // r8
  int v25; // edx
  int v26; // ecx
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+28h] [rbp-40h]
  __int64 v29; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0LL;
  v8 = 0;
  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 28493;
  if ( *(_DWORD *)(W32GetUserSessionState(v12, v11) + 68704) )
  {
    WdLogSingleEntry1(5LL, a4);
    result = 1LL;
    WdLogGlobalForLineNumber = 28498;
  }
  else if ( UserIsDisconnectConnection(v14, v13) || UserIsConsoleConnection(v17, v16) || !a3 )
  {
    return HDXDrvEscape(*(_QWORD *)(a1 + 40), a4, a5, a6);
  }
  else
  {
    SessionState = W32GetSessionState(v18);
    SEMOBJ<1>::SEMOBJ<1>(&v29, *(_QWORD **)(SessionState + 88));
    v20 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      while ( 1 )
      {
        v28 = 56LL * v20;
        v27 = *(_QWORD *)(*(_QWORD *)(v28 + a1 + 40) + 2568LL);
        DisplayDriverNames = DrvGetDisplayDriverNames(v27);
        if ( DisplayDriverNames )
          break;
LABEL_18:
        if ( ++v20 >= *(_DWORD *)(a1 + 20) )
          goto LABEL_21;
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= *DisplayDriverNames )
        {
          GreDeleteFastMutex((char *)DisplayDriverNames);
          goto LABEL_18;
        }
        v23 = *(unsigned __int16 **)&DisplayDriverNames[4 * i + 4];
        v24 = a3 - (_QWORD)v23;
        do
        {
          v25 = *(unsigned __int16 *)((char *)v23 + v24);
          v26 = *v23 - v25;
          if ( v26 )
            break;
          ++v23;
        }
        while ( v25 );
        if ( !v26 && (*(_DWORD *)(v27 + 160) & 0x4000000) != 0 )
        {
          v6 = *(_QWORD *)(v28 + a1 + 40);
          v8 = HDXDrvEscape(v6, a4, a5, a6);
          if ( v8 != 1 )
            break;
        }
      }
      GreDeleteFastMutex((char *)DisplayDriverNames);
    }
LABEL_21:
    WdLogSingleEntry1(5LL, v6);
    WdLogGlobalForLineNumber = 28555;
    if ( v29 )
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v29);
    return v8;
  }
  return result;
}
