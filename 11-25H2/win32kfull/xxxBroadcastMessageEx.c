/*
 * XREFs of xxxBroadcastMessageEx @ 0x1401293EC
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x140128710 (xxxBroadcastDisplaySettingsChange.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140128C2C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxBroadcastMessage @ 0x1401293B0 (xxxBroadcastMessage.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140091370 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqd @ 0x1401287F4 (WPP_RECORDER_AND_TRACE_SF_sqd.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140128970 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140128C2C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x14012A580 (_PostTransformableMessageIL.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?TraceLoggingBroadcastMessage@@YAXPEBUtagWND@@I_KI@Z @ 0x14012AE40 (-TraceLoggingBroadcastMessage@@YAXPEBUtagWND@@I_KI@Z.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z @ 0x1402B2EEC (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        struct tagWND **a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  unsigned __int64 v9; // r12
  unsigned int v10; // r15d
  struct tagWND **v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 i; // rdi
  __int64 UserSessionState; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  ULONG_PTR *v22; // r14
  ULONG_PTR v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  unsigned __int64 v27; // rax
  ULONG_PTR *CurrentThreadNonPaged; // rax
  ULONG_PTR v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  _WORD *v33; // rcx
  unsigned __int16 v34; // ax
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v36; // r9
  bool v37; // al
  char v38; // r12
  char v40; // al
  char v41; // r12
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  unsigned __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  char v47; // al
  char v48; // r12
  unsigned __int8 v49; // al
  struct tagTHREADINFO *v50; // rdi
  char v51; // bl
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // edx
  const char *v56; // rcx
  int v57; // r8d
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned __int8 v60; // al
  struct tagTHREADINFO *v61; // rdi
  char v62; // bl
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // edx
  int v67; // r8d
  unsigned __int8 ThreadId; // al
  struct tagTHREADINFO *v69; // rdi
  char v70; // bl
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // edx
  int v75; // r8d
  int v76; // [rsp+20h] [rbp-C9h]
  int v77; // [rsp+28h] [rbp-C1h]
  __int64 v78; // [rsp+60h] [rbp-89h]
  unsigned __int64 v79; // [rsp+68h] [rbp-81h]
  __int64 *v80; // [rsp+70h] [rbp-79h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+78h] [rbp-71h] BYREF
  __int64 v82; // [rsp+88h] [rbp-61h]
  struct tagTHREADINFO *v83; // [rsp+90h] [rbp-59h]
  struct tagBWL *v84; // [rsp+98h] [rbp-51h]
  ULONG_PTR v85[2]; // [rsp+A0h] [rbp-49h] BYREF
  __m128i v86; // [rsp+B0h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter3[12]; // [rsp+C0h] [rbp-29h] BYREF
  bool v88; // [rsp+138h] [rbp+4Fh]
  char v89; // [rsp+138h] [rbp+4Fh]
  char v90; // [rsp+138h] [rbp+4Fh]

  v9 = a3;
  v10 = a2;
  v11 = a1;
  v83 = PtiCurrent((__int64)a1, a2);
  if ( v10 - 1024 > 0xBBFF )
  {
    v12 = a7;
    if ( !a7 && (v10 == 21 || v10 == 26 || v10 == 29 || v10 == 295 || v10 == 794 || v10 - 804 <= 1) )
    {
      v12 = 1;
      a7 = 1;
    }
    if ( v11 )
    {
LABEL_4:
      v84 = BuildHwndList(v11[14], 2LL, 0LL, 1);
      if ( v84 )
      {
        TraceLoggingBroadcastMessage((const struct tagWND *)v11, v10, v9, a5);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        v78 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v16 = -*(_QWORD *)CurrentProcessWin32Process;
          v15 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v78 = v15;
        }
        v80 = (__int64 *)((char *)v84 + 32);
        for ( i = *((_QWORD *)v84 + 4); ; i = *v80 )
        {
          if ( i == 1 )
          {
            FreeHwndList(v84, v15);
            return 1LL;
          }
          W32GetCurrentThreadNonPaged(v16, v15);
          v16 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19872);
          if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(v16 + 8) )
          {
            UserSessionState = W32GetUserSessionState(v16, v15);
            v21 = *(_DWORD *)(W32GetUserSessionState(v20, v19) + 19896) * (unsigned int)(unsigned __int16)i
                + *(_QWORD *)(UserSessionState + 19888);
            v22 = (ULONG_PTR *)HMPkheFromPhe(v21);
            LOWORD(i) = WORD1(i) & 0x7FFF;
            if ( ((WORD1(i) & 0x7FFF) == *(_WORD *)(v21 + 26)
               || (_WORD)i == 0x7FFF
               || !(_WORD)i && PsGetCurrentProcessWow64Process(v16, v15))
              && (*(_BYTE *)(v21 + 25) & 1) == 0
              && *(_BYTE *)(v21 + 24) == 1 )
            {
              v23 = *v22;
              if ( v23 )
              {
                v16 = *(_WORD *)(*(_QWORD *)(v23 + 40) + 42LL) & 0x2FFF;
                if ( (_DWORD)v16 != 668 )
                {
                  v15 = *(unsigned __int16 *)(W32GetUserSessionState(v16, v15) + 41330);
                  v16 = *(_QWORD *)(*(_QWORD *)(v23 + 136) + 8LL);
                  if ( (_WORD)v15 != *(_WORD *)v16 )
                  {
                    if ( v10 - 784 > 1
                      || (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 31LL) & 0x10) != 0
                      || (v16 = *(_QWORD *)(v23 + 16),
                          (_InterlockedCompareExchange((volatile signed __int32 *)(v16 + 528), 0, 0) & 0x800) != 0) )
                    {
                      if ( a8 == 1 )
                      {
                        if ( *(_DWORD *)(*(_QWORD *)(v23 + 40) + 236LL) != 1 )
                          goto LABEL_30;
                      }
                      else if ( a8 == 2 )
                      {
                        v46 = *(_QWORD *)(v23 + 40);
                        if ( *(_DWORD *)(v46 + 236) == 1 && (*(_BYTE *)(v46 + 232) & 0x40) == 0 )
                          goto LABEL_30;
                      }
                      if ( (*(_DWORD *)(v23 + 380) & 0x10) == 0
                        || (v10 != 126 || a4 != (ULONG_PTR *)1) && (v10 != 26 || v9 != 47) )
                      {
                        BugCheckParameter3[1] = v23;
                        BugCheckParameter3[0] = *((_QWORD *)v83 + 57);
                        *((_QWORD *)v83 + 57) = BugCheckParameter3;
                        HMLockObject(v23);
                        switch ( a5 )
                        {
                          case 0u:
                            xxxSendTransformableMessageTimeout(
                              (struct tagTHREADINFO **)v23,
                              v10,
                              v9,
                              (struct tagDRAWITEMSTRUCT *)a4,
                              0,
                              0,
                              0LL,
                              a7,
                              1);
                            goto LABEL_27;
                          case 1u:
                            v26 = a7;
                            break;
                          case 2u:
                            if ( !*(_QWORD *)(v23 + 120) )
                              PostTransformableMessageIL((struct tagWND *)v23, v10, v9, (__int64)a4, a7);
                            goto LABEL_27;
                          case 3u:
                            xxxSendMessageCallback(
                              (struct tagWND *)v23,
                              v10,
                              *(_QWORD *)a6,
                              *((_QWORD *)a6 + 1),
                              *((_DWORD *)a6 + 4),
                              a7,
                              1);
                            goto LABEL_27;
                          case 4u:
LABEL_26:
                            v26 = a7;
                            v27 = xxxSendTransformableMessageTimeout(
                                    (struct tagTHREADINFO **)v23,
                                    v10,
                                    v9,
                                    (struct tagDRAWITEMSTRUCT *)a4,
                                    *(_DWORD *)a6,
                                    *((_DWORD *)a6 + 1),
                                    *((unsigned __int64 **)a6 + 1),
                                    a7,
                                    1);
                            v25 = 0LL;
                            if ( v27 || a5 != 6 )
                              goto LABEL_27;
                            break;
                          case 5u:
                            v58 = *(_QWORD *)(v23 + 16);
                            if ( *(_QWORD *)(v58 + 464) == v78
                              && (_InterlockedCompareExchange((volatile signed __int32 *)(v58 + 528), 0, 0) & 8) == 0 )
                            {
                              xxxSendTransformableMessageTimeout(
                                (struct tagTHREADINFO **)v23,
                                v10,
                                v9,
                                (struct tagDRAWITEMSTRUCT *)a4,
                                0,
                                0,
                                0LL,
                                1,
                                1);
                              goto LABEL_27;
                            }
                            v26 = a7;
LABEL_125:
                            v42 = (unsigned __int64)a4;
                            v44 = v9;
                            v43 = v10;
                            goto LABEL_78;
                          case 6u:
                            goto LABEL_26;
                          default:
LABEL_27:
                            CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v25, v24);
                            if ( CurrentThreadNonPaged )
                              v29 = *CurrentThreadNonPaged;
                            else
                              v29 = 0LL;
                            Win32HM_UnlockFromThread<0>(v29, BugCheckParameter3);
                            goto LABEL_30;
                        }
                        v32 = 0LL;
                        if ( v10 == 26 || v10 == 27 )
                        {
                          if ( a4 )
                          {
                            v33 = (_WORD *)a4[1];
                            if ( *v33 )
                            {
                              v34 = UserAddAtomEx(v33, 0LL, 2LL);
                              v32 = v34;
                              if ( !v34 )
                                goto LABEL_27;
                            }
                            else
                            {
                              v32 = -1LL;
                            }
                          }
                          if ( !(unsigned int)PostEventMessageEx(
                                                *(struct tagTHREADINFO **)(v23 + 16),
                                                *(struct tagQ **)(*(_QWORD *)(v23 + 16) + 472LL),
                                                9u,
                                                (struct tagWND *)v23,
                                                v10,
                                                v9,
                                                v32,
                                                0LL)
                            && (unsigned __int64)(v32 + 1) > 1 )
                          {
                            UserDeleteAtom((unsigned __int16)v32);
                          }
                          goto LABEL_27;
                        }
                        if ( v10 != 126 )
                          goto LABEL_125;
                        GetDispInfo(0LL);
                        WindowCompositedDpiContext = GetWindowCompositedDpiContext((const struct tagWND *)v23);
                        GetMonitorRectForDpi(&v86, v36, (WindowCompositedDpiContext >> 8) & 0x1FF);
                        v79 = (unsigned __int16)(v86.m128i_i16[4] - v86.m128i_i16[0]) | (unsigned __int64)((v86.m128i_i32[3] << 16) - (v86.m128i_i32[1] << 16));
                        if ( a4 )
                        {
                          v37 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
                             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
                          v88 = v37;
                          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                            || (v38 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                          {
                            v38 = 0;
                          }
                          if ( v37 || v38 )
                          {
                            ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v23 + 16));
                            v69 = *(struct tagTHREADINFO **)v23;
                            v70 = ThreadId;
                            v73 = W32GetUserSessionState(v72, v71);
                            LOBYTE(v74) = v88;
                            LOBYTE(v75) = v38;
                            WPP_RECORDER_AND_TRACE_SF_qd(
                              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                              v74,
                              v75,
                              *(_QWORD *)(v73 + 69160),
                              5,
                              7,
                              15,
                              (__int64)&WPP_e423e180a9553be79fcca61e0da5ad42_Traceguids,
                              (char)v69,
                              v70);
                          }
                          PostEventMessageEx(
                            *(struct tagTHREADINFO **)(v23 + 16),
                            *(struct tagQ **)(*(_QWORD *)(v23 + 16) + 472LL),
                            9u,
                            (struct tagWND *)v23,
                            0x7Eu,
                            a3,
                            v79,
                            0LL);
                          goto LABEL_27;
                        }
                        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                          || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                        {
                          v40 = 0;
                        }
                        v89 = v40;
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                          || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                        {
                          v41 = 0;
                        }
                        if ( v40 || v41 )
                        {
                          v60 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v23 + 16));
                          v61 = *(struct tagTHREADINFO **)v23;
                          v62 = v60;
                          v65 = W32GetUserSessionState(v64, v63);
                          LOBYTE(v66) = v89;
                          LOBYTE(v67) = v41;
                          WPP_RECORDER_AND_TRACE_SF_qd(
                            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                            v66,
                            v67,
                            *(_QWORD *)(v65 + 69160),
                            5,
                            7,
                            14,
                            (__int64)&WPP_e423e180a9553be79fcca61e0da5ad42_Traceguids,
                            (char)v61,
                            v62);
                          v26 = a7;
                        }
                        v42 = v79;
                        v43 = 126LL;
                        v44 = a3;
LABEL_78:
                        xxxSendNotifyMessage(v23, v43, v44, v42, v26);
                        goto LABEL_27;
                      }
                      v16 = *(_QWORD *)&WPP_GLOBAL_Control;
                      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                        || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                      {
                        v47 = 0;
                      }
                      v15 = (__int64)&WPP_RECORDER_INITIALIZED;
                      v90 = v47;
                      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                        || (v48 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                      {
                        v48 = 0;
                      }
                      if ( v47 || v48 )
                      {
                        v49 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v23 + 16));
                        v50 = *(struct tagTHREADINFO **)v23;
                        v51 = v49;
                        v54 = W32GetUserSessionState(v53, v52);
                        LOBYTE(v55) = v90;
                        v56 = "WM_DISPLAYCHANGE";
                        LOBYTE(v57) = v48;
                        if ( v10 != 126 )
                          v56 = "WM_SETTINGCHANGE (for SPI_SETWORKAREA)";
                        WPP_RECORDER_AND_TRACE_SF_sqd(
                          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                          v55,
                          v57,
                          *(_QWORD *)(v54 + 69160),
                          v76,
                          v77,
                          13,
                          (__int64)&WPP_e423e180a9553be79fcca61e0da5ad42_Traceguids,
                          (__int64)v56,
                          (char)v50,
                          v51);
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_30:
          v9 = a3;
          ++v80;
        }
      }
      return 0LL;
    }
    *(_OWORD *)v85 = 0LL;
    if ( v10 == 26 || v10 == 27 )
    {
      BugCheckParameter3[4] = 0LL;
      *(_OWORD *)BugCheckParameter2 = 0LL;
      v82 = -1LL;
      if ( a4 )
      {
        if ( !(unsigned int)CaptureBroadcastString(
                              (struct _LARGE_UNICODE_STRING *)v85,
                              (struct _LARGE_STRING *volatile)a4) )
          return 0LL;
        Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
          BugCheckParameter2,
          v85[1],
          (__int64)Win32FreePool);
        a4 = v85;
      }
      xxxSystemBroadcastMessage(v10, v9, (__int64)a4, a5, a6, v12, a8);
      if ( v82 != -1 )
        PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v45);
    }
    else
    {
      if ( v10 == 30 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v83 + 132, 0, 0) & 4) == 0 )
          return 0LL;
        goto LABEL_86;
      }
      if ( v10 == 42 )
      {
        v59 = 42LL;
      }
      else
      {
        if ( v10 - 712 >= 2 )
        {
LABEL_86:
          v11 = *(struct tagWND ***)(*(_QWORD *)(*((_QWORD *)v83 + 62) + 8LL) + 24LL);
          if ( v11 )
            goto LABEL_4;
          UserSetLastError(5);
          return 0LL;
        }
        v59 = v10;
      }
      xxxSystemBroadcastMessage(v59, v9, (__int64)a4, a5, a6, v12, a8);
    }
    return 1LL;
  }
  UserSetLastError(87);
  return 1LL;
}
