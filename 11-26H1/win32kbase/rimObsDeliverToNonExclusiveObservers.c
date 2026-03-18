/*
 * XREFs of rimObsDeliverToNonExclusiveObservers @ 0x1400A11F4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1401B671C (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsIsObserverTarget @ 0x1401C55E8 (rimObsIsObserverTarget.c)
 *     rimObsDeliverInputToObserver @ 0x14020F380 (rimObsDeliverInputToObserver.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall rimObsDeliverToNonExclusiveObservers(struct RIMDEV *a1, int a2, int a3)
{
  __int64 v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  _QWORD *v12; // r14
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax
  _QWORD *v24; // rbx
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  char v28; // bl
  bool v29; // di
  int v30; // eax
  int v31; // ebp
  CTouchProcessor *v32; // rcx
  char v33; // di
  bool v34; // si
  __int64 UserSessionState; // rax
  int v36; // r8d
  int v37; // edx
  int v38; // edx
  int v39; // r8d
  char v40; // di
  bool v41; // si
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-60h] BYREF

  v4 = W32GetUserSessionState((_DWORD)a1, a2, a3) + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  v8 = W32GetUserSessionState(v6, v5, v7) + 56;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v12 = *(_QWORD **)(W32GetUserSessionState(v10, v9, v11) + 152);
  if ( v12 != (_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 152) )
  {
    do
    {
      v24 = v12 - 2;
      if ( (unsigned int)rimObsIsObserverTarget(v12 - 2, a1) )
      {
        if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
        {
          v30 = *((_DWORD *)v24 + 30);
          v31 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          if ( (v30 & 1) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 959LL);
          v32 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v33 = 0;
          }
          v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v25, v27);
            LOBYTE(v36) = v34;
            LOBYTE(v37) = v33;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v37,
              v36,
              *(_QWORD *)(UserSessionState + 69136),
              4,
              1,
              51,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          if ( v24[4] != PsGetCurrentProcess(v32) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v40 = 0;
            }
            v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v42 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v38, v39);
              LOBYTE(v43) = v41;
              LOBYTE(v44) = v40;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v44,
                v43,
                *(_QWORD *)(v42 + 69136),
                4,
                1,
                52,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            KeStackAttachProcess((PRKPROCESS)v24[4], &ApcState);
            v31 = 1;
          }
          rimObsDeliverInputToObserver(a1, (struct RawInputManagerInputObserverObject *)(v12 - 2));
          if ( v31 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          v26 = (int)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v28 = 0;
          }
          v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v45 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v25, v27);
            LOBYTE(v46) = v29;
            LOBYTE(v47) = v28;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v47,
              v46,
              *(_QWORD *)(v45 + 69136),
              3,
              1,
              53,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
      }
      v12 = (_QWORD *)*v12;
    }
    while ( v12 != (_QWORD *)(W32GetUserSessionState(v26, v25, v27) + 152) );
  }
  v19 = W32GetUserSessionState(v17, v16, v18);
  *(_QWORD *)(v19 + 64) = 0LL;
  ExReleasePushLockExclusiveEx(v19 + 56);
  KeLeaveCriticalRegion();
  v23 = W32GetUserSessionState(v21, v20, v22);
  *(_QWORD *)(v23 + 80) = 0LL;
  ExReleasePushLockExclusiveEx(v23 + 72);
  KeLeaveCriticalRegion();
}
