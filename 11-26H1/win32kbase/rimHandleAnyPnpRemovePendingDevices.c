/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x140098420
 * Callers:
 *     RIMReadInput @ 0x1400979E0 (RIMReadInput.c)
 *     rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x1401C121C (rimDoHandleAnyPnpRemovePendingDevicesWorkItem.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMFreeSpecificDev @ 0x14009270C (RIMFreeSpecificDev.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140096FAC (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x14020BFB4 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(struct RawInputManagerObject *a1)
{
  char *v1; // rbp
  unsigned int v2; // r12d
  int v4; // r14d
  __int64 v5; // rdx
  CTouchProcessor *v6; // rcx
  int v7; // r8d
  __int64 i; // rbx
  int v9; // eax
  int v10; // eax
  bool v11; // si
  bool v12; // di
  __int64 UserSessionState; // rax
  __int64 *j; // rdi
  __int64 v15; // rax
  bool v16; // di
  bool v17; // si
  __int64 v18; // rax

  v1 = (char *)a1 + 760;
  v2 = 0;
LABEL_2:
  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
  for ( i = *((_QWORD *)a1 + 53); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (*(_DWORD *)(i + 168) & 0x40) == 0 )
    {
      v9 = *(_DWORD *)(i + 172);
      if ( (v9 & 8) != 0 )
      {
        *(_DWORD *)(i + 172) = v9 & 0xFFFFFFF7;
        v6 = WPP_GLOBAL_Control;
        v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v7);
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v11,
            v12,
            *(_QWORD *)(UserSessionState + 19368),
            4,
            1,
            37,
            (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
            i);
        }
      }
      v10 = *(_DWORD *)(i + 184);
      if ( ((v10 & 1) != 0 || (v10 & 2) != 0) && (*(_DWORD *)(i + 172) & 0x10) == 0 && !*(_QWORD *)(i + 176) )
      {
        if ( (unsigned int)GET_USERCRIT_DISPOSITION((__int64)v6, v5) )
        {
          v4 = 1;
          v2 = (*(_DWORD *)(i + 184) & 2u) >> 1;
          *(_DWORD *)(i + 184) &= 0xFFFFFFFC;
          v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            break;
          v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v7);
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v16,
            v17,
            *(_QWORD *)(v18 + 19368),
            4,
            1,
            38,
            (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
            i);
          *((_QWORD *)v1 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v1);
          KeLeaveCriticalRegion();
LABEL_18:
          if ( v2 )
          {
            RIMLockExclusive((__int64)v1);
            *((_DWORD *)a1 + 269) |= 2u;
          }
          rimDoRimDevChange((__int64)a1, i, 3u);
          RimTelemetry::ReportRimDevice(0, (int)(*(_DWORD *)(i + 184) << 24) >> 31, (struct RIMDEV *const)i);
          for ( j = (__int64 *)((char *)a1 + 424); ; j = (__int64 *)(v15 + 40) )
          {
            v15 = *j;
            if ( !*j )
              break;
            if ( v15 == i )
            {
              if ( *(_QWORD *)(i + 232) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 943LL);
              *j = *(_QWORD *)(i + 40);
              *(_QWORD *)(i + 40) = 0LL;
              RIMFreeSpecificDev(a1, i);
              break;
            }
          }
          if ( v2 )
          {
            *((_DWORD *)a1 + 269) &= ~2u;
            *((_QWORD *)v1 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v1);
            KeLeaveCriticalRegion();
          }
          goto LABEL_2;
        }
        if ( !*((_DWORD *)a1 + 279) )
          rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem(a1);
      }
    }
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1);
  KeLeaveCriticalRegion();
  if ( v4 )
    goto LABEL_18;
}
