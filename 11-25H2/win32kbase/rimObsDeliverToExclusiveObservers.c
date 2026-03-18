/*
 * XREFs of rimObsDeliverToExclusiveObservers @ 0x140034480
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D74EC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimObsIsObserverTarget_0 @ 0x1401F2644 (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1401F2680 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1401F38FC (rimObsDeliverInputToObserver.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall rimObsDeliverToExclusiveObservers(struct RIMDEV *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  void *v8; // rcx
  unsigned int v9; // ebx
  char v10; // di
  bool v11; // si
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  struct RawInputManagerInputObserverObject *v15; // rdi
  __int64 v16; // rdx
  void *v17; // rcx
  _QWORD *i; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v24; // r14d
  char v25; // si
  bool v26; // bp
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rdx
  char v31; // si
  bool v32; // bp
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  int v36; // eax
  char v37; // si
  bool v38; // bp
  __int64 v39; // rax
  int v40; // edx
  int v41; // r8d
  char v42; // si
  bool v43; // bp
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  char v47; // si
  bool v48; // bp
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  __int16 v52; // [rsp+30h] [rbp-78h]
  _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v3 = W32GetUserSessionState(a1, a2) + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
  v6 = W32GetUserSessionState(v5, v4) + 56;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
  v8 = WPP_GLOBAL_Control;
  v9 = 0;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v10 = 0;
  }
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      1,
      44,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  v15 = 0LL;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v8, v7) + 152);
        i != (_QWORD *)(W32GetUserSessionState(v17, v16) + 152);
        i = (_QWORD *)*i )
  {
    if ( (i[13] & 2) != 0 && (unsigned int)rimObsIsObserverTarget_0(i - 2, a1) )
    {
      if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v15 = (struct RawInputManagerInputObserverObject *)(i - 2);
        if ( i == (_QWORD *)16 )
          break;
        if ( (i[13] & 1) != 0 )
        {
          v24 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v25 = 0;
          }
          v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
            LOBYTE(v28) = v26;
            LOBYTE(v29) = v25;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v29,
              v28,
              *(_QWORD *)(v27 + 69144),
              4,
              1,
              46,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          if ( *((_QWORD *)v15 + 4) != PsGetCurrentProcess() )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v31 = 0;
            }
            v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
              LOBYTE(v34) = v32;
              LOBYTE(v35) = v31;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v35,
                v34,
                *(_QWORD *)(v33 + 69144),
                4,
                1,
                47,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            KeStackAttachProcess(*((PRKPROCESS *)v15 + 4), &ApcState);
            v24 = 1;
          }
          rimObsDeliverInputToObserver(a1, v15);
          if ( v24 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v47 = 0;
          }
          v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
            LOBYTE(v50) = v48;
            LOBYTE(v51) = v47;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v51,
              v50,
              *(_QWORD *)(v49 + 69144),
              4,
              1,
              48,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
        if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
        {
          v36 = *((_DWORD *)a1 + 12);
          if ( v36 )
          {
            if ( v36 == 1 )
            {
              *((_DWORD *)a1 + 168) = 0;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v37 = 0;
              }
              v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
                v52 = 50;
LABEL_68:
                LOBYTE(v41) = v38;
                LOBYTE(v40) = v37;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v40,
                  v41,
                  *(_QWORD *)(v39 + 69144),
                  4,
                  1,
                  v52,
                  (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
              }
            }
          }
          else
          {
            *((_DWORD *)a1 + 224) = 0;
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v37 = 0;
            }
            v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
              v52 = 49;
              goto LABEL_68;
            }
          }
        }
        InputTraceLogging::RIM::DropInput(a1, 11LL);
        break;
      }
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v42 = 0;
      }
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
        LOBYTE(v45) = v43;
        LOBYTE(v46) = v42;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v46,
          v45,
          *(_QWORD *)(v44 + 69144),
          3,
          1,
          45,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
    }
  }
  v19 = W32GetUserSessionState(v17, v16);
  *(_QWORD *)(v19 + 64) = 0LL;
  ExReleasePushLockExclusiveEx(v19 + 56, 0LL);
  KeLeaveCriticalRegion();
  v22 = W32GetUserSessionState(v21, v20);
  *(_QWORD *)(v22 + 80) = 0LL;
  ExReleasePushLockExclusiveEx(v22 + 72, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v9) = v15 != 0LL;
  return v9;
}
