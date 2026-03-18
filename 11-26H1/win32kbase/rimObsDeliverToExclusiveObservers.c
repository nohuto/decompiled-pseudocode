/*
 * XREFs of rimObsDeliverToExclusiveObservers @ 0x140099E6C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1401B671C (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsIsObserverTarget @ 0x1401C55E8 (rimObsIsObserverTarget.c)
 *     rimObsDeliverInputToObserver @ 0x14020F380 (rimObsDeliverInputToObserver.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall rimObsDeliverToExclusiveObservers(struct RIMDEV *a1, int a2, int a3)
{
  __int64 v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  unsigned int v12; // ebx
  char v13; // di
  bool v14; // si
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  struct RawInputManagerInputObserverObject *v18; // rdi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  _QWORD *i; // r14
  __int64 v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rax
  int v29; // r14d
  CTouchProcessor *v30; // rcx
  char v31; // si
  bool v32; // bp
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  int v36; // edx
  int v37; // r8d
  char v38; // si
  bool v39; // bp
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  int v43; // eax
  char v44; // si
  bool v45; // bp
  __int64 v46; // rax
  int v47; // edx
  int v48; // r8d
  char v49; // si
  bool v50; // bp
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  char v54; // si
  bool v55; // bp
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int16 v59; // [rsp+30h] [rbp-78h]
  _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v4 = W32GetUserSessionState((_DWORD)a1, a2, a3) + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  v8 = W32GetUserSessionState(v6, v5, v7) + 56;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v11 = (int)WPP_GLOBAL_Control;
  v12 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v13 = 0;
  }
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      1,
      44,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  v18 = 0LL;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v11, v9, v10) + 152);
        i != (_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 152);
        i = (_QWORD *)*i )
  {
    if ( (i[13] & 2) != 0 && (unsigned int)rimObsIsObserverTarget(i - 2, a1) )
    {
      if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v18 = (struct RawInputManagerInputObserverObject *)(i - 2);
        if ( i == (_QWORD *)16 )
          break;
        if ( (i[13] & 1) != 0 )
        {
          v29 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v30 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v31 = 0;
          }
          v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v33 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v21);
            LOBYTE(v34) = v32;
            LOBYTE(v35) = v31;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v35,
              v34,
              *(_QWORD *)(v33 + 69136),
              4,
              1,
              46,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          if ( *((_QWORD *)v18 + 4) != PsGetCurrentProcess(v30) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v38 = 0;
            }
            v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v40 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v36, v37);
              LOBYTE(v41) = v39;
              LOBYTE(v42) = v38;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v42,
                v41,
                *(_QWORD *)(v40 + 69136),
                4,
                1,
                47,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
            KeStackAttachProcess(*((PRKPROCESS *)v18 + 4), &ApcState);
            v29 = 1;
          }
          rimObsDeliverInputToObserver(a1, v18);
          if ( v29 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v54 = 0;
          }
          v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v56 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v21);
            LOBYTE(v57) = v55;
            LOBYTE(v58) = v54;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v58,
              v57,
              *(_QWORD *)(v56 + 69136),
              4,
              1,
              48,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
        if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
        {
          v43 = *((_DWORD *)a1 + 12);
          if ( v43 )
          {
            if ( v43 == 1 )
            {
              *((_DWORD *)a1 + 168) = 0;
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v44 = 0;
              }
              v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v46 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v21);
                v59 = 50;
LABEL_68:
                LOBYTE(v48) = v45;
                LOBYTE(v47) = v44;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v47,
                  v48,
                  *(_QWORD *)(v46 + 69136),
                  4,
                  1,
                  v59,
                  (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
              }
            }
          }
          else
          {
            *((_DWORD *)a1 + 224) = 0;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v44 = 0;
            }
            v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v46 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v21);
              v59 = 49;
              goto LABEL_68;
            }
          }
        }
        InputTraceLogging::RIM::DropInput(a1, 11LL);
        break;
      }
      v20 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v49 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v49 = 0;
      }
      v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v21);
        LOBYTE(v52) = v50;
        LOBYTE(v53) = v49;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v53,
          v52,
          *(_QWORD *)(v51 + 69136),
          3,
          1,
          45,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
    }
  }
  v23 = W32GetUserSessionState(v20, v19, v21);
  *(_QWORD *)(v23 + 64) = 0LL;
  ExReleasePushLockExclusiveEx(v23 + 56);
  KeLeaveCriticalRegion();
  v27 = W32GetUserSessionState(v25, v24, v26);
  *(_QWORD *)(v27 + 80) = 0LL;
  ExReleasePushLockExclusiveEx(v27 + 72);
  KeLeaveCriticalRegion();
  LOBYTE(v12) = v18 != 0LL;
  return v12;
}
