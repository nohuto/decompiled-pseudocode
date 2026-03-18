/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x140035294
 * Callers:
 *     RIMReadInput @ 0x140034A90 (RIMReadInput.c)
 *     rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x14019FC54 (rimDoHandleAnyPnpRemovePendingDevicesWorkItem.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1401ED8B4 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(struct RawInputManagerObject *a1)
{
  char *v2; // r15
  unsigned int v3; // r14d
  int v4; // r12d
  __int64 v5; // rdx
  __int64 i; // rbx
  int v7; // eax
  int v8; // eax
  bool v9; // si
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  bool v14; // si
  bool v15; // bp
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  v2 = (char *)a1 + 760;
  v3 = 0;
  while ( 2 )
  {
    v4 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    for ( i = *((_QWORD *)a1 + 53); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_DWORD *)(i + 168) & 0x40) == 0 )
      {
        v7 = *(_DWORD *)(i + 172);
        if ( (v7 & 8) != 0 )
        {
          *(_DWORD *)(i + 172) = v7 & 0xFFFFFFF7;
          v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
            LOBYTE(v12) = v10;
            LOBYTE(v13) = v9;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v13,
              v12,
              *(_QWORD *)(UserSessionState + 19336),
              4,
              1,
              37,
              (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
              i);
          }
        }
        v8 = *(_DWORD *)(i + 184);
        if ( ((v8 & 1) != 0 || (v8 & 2) != 0) && (*(_DWORD *)(i + 172) & 0x10) == 0 && !*(_QWORD *)(i + 176) )
        {
          if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
          {
            v4 = 1;
            v3 = (*(_DWORD *)(i + 184) & 2u) >> 1;
            *(_DWORD *)(i + 184) &= 0xFFFFFFFC;
            v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
              LOBYTE(v17) = v15;
              LOBYTE(v18) = v14;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v18,
                v17,
                *(_QWORD *)(v16 + 19336),
                4,
                1,
                38,
                (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
                i);
            }
            break;
          }
          if ( !*((_DWORD *)a1 + 279) )
            rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem(a1);
        }
      }
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 )
    {
      if ( v3 )
      {
        RIMLockExclusive((__int64)v2);
        *((_DWORD *)a1 + 269) |= 2u;
      }
      rimDoRimDevChange((__int64)a1, i, 3u);
      RIMFreeDev(a1, (struct RIMDEV *)i);
      if ( v3 )
      {
        *((_DWORD *)a1 + 269) &= ~2u;
        RIMUnlockExclusive((__int64)v2);
      }
      continue;
    }
    break;
  }
}
