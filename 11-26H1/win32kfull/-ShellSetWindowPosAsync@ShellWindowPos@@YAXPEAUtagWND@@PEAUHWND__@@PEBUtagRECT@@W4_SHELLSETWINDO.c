/*
 * XREFs of ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402DBD50
 * Callers:
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402C4FD4 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z @ 0x1402DBA74 (-SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall ShellWindowPos::ShellSetWindowPosAsync(
        __int64 *a1,
        __int64 a2,
        struct tagRECT *a3,
        int a4,
        int a5,
        int a6)
{
  PETHREAD *v6; // r13
  bool v10; // r14
  bool v11; // r15
  unsigned __int8 ThreadId; // al
  __int64 v13; // rdi
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rax
  bool v21; // r14
  bool v22; // r15
  char v23; // bl
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  struct tagRECT v31; // xmm0
  struct tagMONITOR *v32; // rax
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch]
  int v37; // [rsp+6Ch] [rbp-94h]
  int v38; // [rsp+70h] [rbp-90h]
  int v39; // [rsp+74h] [rbp-8Ch]
  int v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h]
  struct tagRECT v43; // [rsp+8Ch] [rbp-74h]
  int v44; // [rsp+CCh] [rbp-34h]
  int v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D4h] [rbp-2Ch]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  int v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E4h] [rbp-1Ch]
  PETHREAD *v51; // [rsp+F0h] [rbp-10h]
  _BYTE v52[40]; // [rsp+118h] [rbp+18h] BYREF

  v6 = (PETHREAD *)a1[2];
  v10 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (unsigned __int8)PsGetThreadId(*v6);
    v13 = *a1;
    v14 = ThreadId;
    UserSessionState = W32GetUserSessionState(v16, v15);
    LOBYTE(v18) = v11;
    LOBYTE(v19) = v10;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      4,
      11,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      v13,
      v14);
  }
  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v35, 0);
  if ( a2 )
  {
    if ( a5 == 1 && !a3 )
    {
      v20 = HMValidateHandleNoSecure(a2, a5);
      if ( v20 )
      {
        v6 = *(PETHREAD **)(v20 + 16);
        v21 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v23 = (unsigned __int8)PsGetThreadId(*v6);
          v26 = W32GetUserSessionState(v25, v24);
          LOBYTE(v27) = v22;
          LOBYTE(v28) = v21;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v28,
            v27,
            *(_QWORD *)(v26 + 69152),
            4,
            4,
            12,
            (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
            v23);
        }
      }
    }
  }
  v29 = v35;
  v30 = v36 | 0x800;
  v36 |= 0x800u;
  v51 = v6;
  if ( (a5 & 0x10) != 0 )
  {
    v29 = v35 | 0x10;
    v36 = v30 | 2;
  }
  else if ( (a5 & 1) != 0 )
  {
    if ( (a5 & 2) != 0 )
      goto LABEL_28;
    v29 = v35 | 8;
    v41 = a2;
  }
  else
  {
    v29 = v35 | 0x10;
  }
  v35 = v29;
LABEL_28:
  switch ( a4 )
  {
    case 0:
LABEL_32:
      if ( !a3 )
        break;
      v42 = 3;
      v35 = v29 | 0x20;
      if ( a4 != 3 )
        v42 = 0;
      AdvancedWindowPos::CWindowAction::SetFrameBounds((AdvancedWindowPos::CWindowAction *)&v35, a3);
      goto LABEL_36;
    case 1:
      v29 |= 0x20u;
      v42 = 1;
      v35 = v29;
      if ( a3 )
      {
        if ( (a5 & 8) != 0 )
        {
          v31 = *a3;
          v29 |= 0x40u;
          v35 = v29;
          v43 = v31;
        }
        else if ( (a5 & 4) != 0 )
        {
          v32 = (struct tagMONITOR *)MonitorFromRect(&a3->left, 2LL, 0x12u);
          AdvancedWindowPos::CWindowAction::SetMonitor((AdvancedWindowPos::CWindowAction *)&v35, v32, 1, 0LL);
LABEL_36:
          v29 = v35;
        }
      }
      break;
    case 2:
      v29 |= 0x20u;
      v42 = 1;
      v35 = v29;
      break;
    case 3:
      goto LABEL_32;
    default:
      break;
  }
  if ( (a5 & 0x20) == 0 )
  {
    v44 |= 2u;
    v45 = v37;
    v47 = v39 + v37;
    v50 = a6;
    v48 = v38 + v40;
    v35 = v29 | 0x400;
    v46 = v38;
    v49 = v42;
  }
  AdvancedWindowPos::xxxApplyWindowAction(a1, &v35, 11LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v52);
}
