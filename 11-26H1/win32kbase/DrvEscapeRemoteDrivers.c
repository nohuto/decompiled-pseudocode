/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1401973A0
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 * Callees:
 *     DrvGetDisplayDriverNames @ 0x14000DD90 (DrvGetDisplayDriverNames.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     UserIsDisconnectConnection @ 0x14002A9D0 (UserIsDisconnectConnection.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7164 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HDXDrvEscape @ 0x1401FB020 (HDXDrvEscape.c)
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
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 SessionState; // rax
  unsigned int v25; // r15d
  __int64 v26; // rdx
  unsigned int *DisplayDriverNames; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int i; // r14d
  unsigned __int16 *v31; // rcx
  int v32; // eax
  int v33; // r8d
  __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  __int64 v36; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0LL;
  v8 = 0;
  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 27230;
  if ( *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 68696) )
  {
    WdLogSingleEntry1(5LL, a4);
    result = 1LL;
    WdLogGlobalForLineNumber = 27235;
  }
  else if ( UserIsDisconnectConnection(v15, v14, v16, v17) || UserIsConsoleConnection(v20, v19, v21, v22) || !a3 )
  {
    return HDXDrvEscape(*(_QWORD *)(a1 + 40), a4, a5, a6);
  }
  else
  {
    SessionState = W32GetSessionState(v23);
    SEMOBJ<1>::SEMOBJ<1>(&v36, *(_QWORD **)(SessionState + 88));
    v25 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      while ( 1 )
      {
        v35 = 56LL * v25;
        v34 = *(_QWORD *)(*(_QWORD *)(v35 + a1 + 40) + 2568LL);
        DisplayDriverNames = DrvGetDisplayDriverNames(v34);
        if ( DisplayDriverNames )
          break;
LABEL_18:
        if ( ++v25 >= *(_DWORD *)(a1 + 20) )
          goto LABEL_21;
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= *DisplayDriverNames )
        {
          GreDeleteFastMutex((char *)DisplayDriverNames, v26, v28, v29);
          goto LABEL_18;
        }
        v31 = *(unsigned __int16 **)&DisplayDriverNames[4 * i + 4];
        v28 = a3 - (_QWORD)v31;
        do
        {
          v32 = *(unsigned __int16 *)((char *)v31 + v28);
          v26 = (unsigned int)*v31 - v32;
          if ( (_DWORD)v26 )
            break;
          ++v31;
        }
        while ( v32 );
        if ( !(_DWORD)v26 && (*(_DWORD *)(v34 + 160) & 0x4000000) != 0 )
        {
          v6 = *(_QWORD *)(v35 + a1 + 40);
          v8 = HDXDrvEscape(v6, a4, a5, a6);
          if ( v8 != 1 )
            break;
        }
      }
      GreDeleteFastMutex((char *)DisplayDriverNames, v26, v28, v29);
    }
LABEL_21:
    WdLogSingleEntry1(5LL, v6);
    WdLogGlobalForLineNumber = 27292;
    if ( v36 )
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v36,
        v33);
    return v8;
  }
  return result;
}
