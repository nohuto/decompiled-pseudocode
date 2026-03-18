/*
 * XREFs of ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140276408
 * Callers:
 *     NtUserSendInput @ 0x14024CC60 (NtUserSendInput.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1402F01AC (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1402F0284 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401D4478 (xxxWaitForDITMouseInjectionFlush.c)
 *     xxxSynchronizeDWMWindowChanges @ 0x140221FD8 (xxxSynchronizeDWMWindowChanges.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14027603C (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x1402769F4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140276FFC (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x1402770A4 (Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline.c)
 */

unsigned int __fastcall xxxSendInput(unsigned int a1, struct tagINPUT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r15d
  unsigned __int16 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r13d
  int v11; // esi
  BOOL v12; // edi
  unsigned __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // di
  bool v17; // bp
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  bool v23; // di
  bool v24; // bp
  __int64 v25; // rax
  int v26; // edx
  int v27; // r8d
  int v28; // r8d
  __int64 v29; // rdx
  bool v30; // di
  bool v31; // bp
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rdx
  _DWORD *v37; // rcx
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  __int16 v41; // [rsp+30h] [rbp-48h]
  __int16 v42; // [rsp+30h] [rbp-48h]
  char v43; // [rsp+40h] [rbp-38h]
  char v44; // [rsp+40h] [rbp-38h]
  char v45; // [rsp+48h] [rbp-30h]

  if ( (unsigned int)Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline() )
    return xxxSendInputEx(a1, a2);
  v6 = 0;
  v7 = *((_WORD *)PtiCurrent(v5, v4) + 336);
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 18744);
  else
    v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 16340);
  v11 = 0;
  v12 = v10 == 0;
  if ( a1 )
  {
    v13 = (unsigned __int64 *)((char *)a2 + 24);
    while ( 1 )
    {
      v14 = *((unsigned int *)v13 - 6);
      if ( (_DWORD)v14 )
      {
        v15 = (unsigned int)(v14 - 1);
        if ( (_DWORD)v15 )
        {
          if ( (_DWORD)v15 == 1 )
          {
            v15 = *(_QWORD *)&WPP_GLOBAL_Control;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
              || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
            {
              v16 = 0;
            }
            v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 1LL);
              LOBYTE(v19) = v17;
              LOBYTE(v20) = v16;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v20,
                v19,
                *(_QWORD *)(UserSessionState + 69160),
                2,
                20,
                42,
                (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids,
                v11,
                v7 >= 0x501u);
            }
            if ( v7 >= 0x501u )
            {
              UserSetLastError(120);
              return v11;
            }
          }
          goto LABEL_76;
        }
        v22 = *(_DWORD **)(W32GetUserSessionState(v15, 1LL) + 19872);
        if ( (*v22 & 0x2000) == 0 )
        {
          if ( v6 )
          {
            v6 = 0;
            xxxWaitForDITMouseInjectionFlush((__int64)v22, v21);
          }
          v28 = *((_DWORD *)v13 - 3);
          if ( (v28 & 4) == 0 || *((_WORD *)v13 - 8) || (v28 & 0xFFFFFFF9) != 0 )
          {
            LOBYTE(v22) = *((_BYTE *)v13 - 16);
            if ( !xxxInternalKeyEventDirect(
                    (__int64)v22,
                    *((unsigned __int8 *)v13 - 14),
                    v28,
                    *((_DWORD *)v13 - 2),
                    *v13) )
            {
              v15 = *(_QWORD *)&WPP_GLOBAL_Control;
              v30 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                 && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
                 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
              v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v34 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v35) + 69160);
                v45 = v7 >= 0x501u;
                v44 = v11;
                v42 = 41;
                goto LABEL_74;
              }
              goto LABEL_75;
            }
          }
          else
          {
            LOBYTE(v22) = -25;
            if ( !xxxInternalKeyEventDirect(
                    (__int64)v22,
                    *((unsigned __int16 *)v13 - 7),
                    v28,
                    *((_DWORD *)v13 - 2),
                    *v13) )
            {
              v15 = *(_QWORD *)&WPP_GLOBAL_Control;
              v30 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                 && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
                 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
              v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v34 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29) + 69160);
                v45 = v7 >= 0x501u;
                v44 = v11;
                v42 = 40;
                goto LABEL_74;
              }
              goto LABEL_75;
            }
          }
          goto LABEL_76;
        }
        v15 = *(_QWORD *)&WPP_GLOBAL_Control;
        v23 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
          v43 = v11;
          v41 = 39;
LABEL_28:
          LOBYTE(v27) = v24;
          LOBYTE(v26) = v23;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v26,
            v27,
            *(_QWORD *)(v25 + 69160),
            2,
            20,
            v41,
            (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids,
            v43);
        }
      }
      else
      {
        v37 = *(_DWORD **)(W32GetUserSessionState(v14, 1LL) + 19872);
        if ( (*v37 & 0x2000) == 0 )
        {
          if ( (*((_DWORD *)v13 - 1) & 0xAA) != 0 )
            xxxSynchronizeDWMWindowChanges((__int64)v37, v36);
          v38 = UpconvertTime(*(unsigned int *)v13);
          if ( v10 )
            v6 = 1;
          if ( !(unsigned int)xxxMouseEventDirect(
                                *((unsigned int *)v13 - 4),
                                *((unsigned int *)v13 - 3),
                                *((_DWORD *)v13 - 2),
                                *((_DWORD *)v13 - 1),
                                v38,
                                gliQpcFreq * v38 / 0x3E8,
                                v13[1],
                                v12) )
          {
            v15 = *(_QWORD *)&WPP_GLOBAL_Control;
            v30 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
            v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v34 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v39) + 69160);
              v45 = v7 >= 0x501u;
              v44 = v11;
              v42 = 38;
LABEL_74:
              LOBYTE(v33) = v31;
              LOBYTE(v32) = v30;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v32,
                v33,
                v34,
                2,
                20,
                v42,
                (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids,
                v44,
                v45);
            }
LABEL_75:
            if ( v7 >= 0x501u )
              return v11;
          }
LABEL_76:
          v13 += 5;
          goto LABEL_77;
        }
        v15 = *(_QWORD *)&WPP_GLOBAL_Control;
        v23 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
          v43 = v11;
          v41 = 37;
          goto LABEL_28;
        }
      }
LABEL_77:
      if ( ++v11 >= a1 )
      {
        if ( v6 )
          xxxWaitForDITMouseInjectionFlush(v15, 1LL);
        return v11;
      }
      v12 = v10 == 0;
    }
  }
  return v11;
}
