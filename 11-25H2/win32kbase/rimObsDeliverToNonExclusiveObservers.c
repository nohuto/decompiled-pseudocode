/*
 * XREFs of rimObsDeliverToNonExclusiveObservers @ 0x1400BE5B8
 * Callers:
 *     rimProcessInput @ 0x1400BE050 (rimProcessInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsIsObserverTarget_0 @ 0x1401F2644 (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1401F2680 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1401F38FC (rimObsDeliverInputToObserver.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall rimObsDeliverToNonExclusiveObservers(struct RIMDEV *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  void *v16; // rcx
  int v17; // eax
  int v18; // ebp
  char v19; // di
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  char v25; // di
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  char v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-60h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 72);
  v6 = W32GetUserSessionState(v5, v4);
  RIMLockExclusive(v6 + 56);
  v9 = *(_QWORD **)(W32GetUserSessionState(v8, v7) + 152);
  if ( v9 != (_QWORD *)(W32GetUserSessionState(v11, v10) + 152) )
  {
    do
    {
      v14 = v9 - 2;
      if ( (unsigned int)rimObsIsObserverTarget_0(v9 - 2, a1) )
      {
        if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
        {
          v17 = *((_DWORD *)v14 + 30);
          v18 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          if ( (v17 & 1) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 959LL);
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v19 = 0;
          }
          v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
            LOBYTE(v22) = v20;
            LOBYTE(v23) = v19;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v23,
              v22,
              *(_QWORD *)(v21 + 69144),
              4,
              1,
              51,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          if ( v14[4] != PsGetCurrentProcess() )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v25 = 0;
            }
            v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
              LOBYTE(v28) = v26;
              LOBYTE(v29) = v25;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v29,
                v28,
                *(_QWORD *)(v27 + 69144),
                4,
                1,
                52,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            KeStackAttachProcess((PRKPROCESS)v14[4], &ApcState);
            v18 = 1;
          }
          rimObsDeliverInputToObserver(a1, (struct RawInputManagerInputObserverObject *)(v9 - 2));
          if ( v18 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v34 = 0;
          }
          v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
            LOBYTE(v37) = v35;
            LOBYTE(v38) = v34;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v38,
              v37,
              *(_QWORD *)(v36 + 69144),
              3,
              1,
              53,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
      }
      v9 = (_QWORD *)*v9;
    }
    while ( v9 != (_QWORD *)(W32GetUserSessionState(v16, v15) + 152) );
  }
  v30 = W32GetUserSessionState(v13, v12);
  RIMUnlockExclusive(v30 + 56);
  v33 = W32GetUserSessionState(v32, v31);
  RIMUnlockExclusive(v33 + 72);
}
