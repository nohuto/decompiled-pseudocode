/*
 * XREFs of ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C26F0
 * Callers:
 *     NtUserShellSetWindowPos @ 0x1402A1990 (NtUserShellSetWindowPos.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A8174 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z @ 0x1402C23A0 (-SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  __int64 v20; // rdx
  __int64 v21; // rax
  bool v22; // r14
  bool v23; // r15
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  struct tagRECT v32; // xmm0
  struct tagMONITOR *v33; // rax
  __int64 v34; // rdx
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+64h] [rbp-9Ch]
  int v39; // [rsp+6Ch] [rbp-94h]
  int v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+74h] [rbp-8Ch]
  int v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h]
  struct tagRECT v45; // [rsp+8Ch] [rbp-74h]
  int v46; // [rsp+CCh] [rbp-34h]
  int v47; // [rsp+D0h] [rbp-30h]
  int v48; // [rsp+D4h] [rbp-2Ch]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  int v51; // [rsp+E0h] [rbp-20h]
  int v52; // [rsp+E4h] [rbp-1Ch]
  PETHREAD *v53; // [rsp+F0h] [rbp-10h]
  _BYTE v54[40]; // [rsp+108h] [rbp+8h] BYREF

  v6 = (PETHREAD *)a1[2];
  v10 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
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
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v19,
      v18,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      4,
      11,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      v13,
      v14);
  }
  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v37, 0);
  if ( a2 )
  {
    if ( a5 == 1 && !a3 )
    {
      LOBYTE(v20) = a5;
      v21 = HMValidateHandleNoSecure(a2, v20);
      if ( v21 )
      {
        v6 = *(PETHREAD **)(v21 + 16);
        v22 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = (unsigned __int8)PsGetThreadId(*v6);
          v27 = W32GetUserSessionState(v26, v25);
          LOBYTE(v28) = v23;
          LOBYTE(v29) = v22;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v29,
            v28,
            *(_QWORD *)(v27 + 69160),
            4,
            4,
            12,
            (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
            v24);
        }
      }
    }
  }
  v30 = v37;
  v31 = v38 | 0x800;
  v38 |= 0x800u;
  v53 = v6;
  if ( (a5 & 0x10) != 0 )
  {
    v30 = v37 | 0x10;
    v38 = v31 | 2;
  }
  else if ( (a5 & 1) != 0 )
  {
    if ( (a5 & 2) != 0 )
      goto LABEL_28;
    v30 = v37 | 8;
    v43 = a2;
  }
  else
  {
    v30 = v37 | 0x10;
  }
  v37 = v30;
LABEL_28:
  if ( !a4 )
  {
LABEL_32:
    if ( !a3 )
      goto LABEL_44;
    v37 = v30 | 0x20;
    if ( a4 == 3 )
      v44 = 3;
    else
      v44 = 0;
    AdvancedWindowPos::CWindowAction::SetFrameBounds((AdvancedWindowPos::CWindowAction *)&v37, a3);
    goto LABEL_43;
  }
  if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
      v30 |= 0x20u;
      v44 = 1;
      v37 = v30;
      goto LABEL_44;
    }
    if ( a4 != 3 )
      goto LABEL_44;
    goto LABEL_32;
  }
  v30 |= 0x20u;
  v44 = 1;
  v37 = v30;
  if ( !a3 )
    goto LABEL_44;
  if ( (a5 & 8) != 0 )
  {
    v32 = *a3;
    v30 |= 0x40u;
    v37 = v30;
    v45 = v32;
    goto LABEL_44;
  }
  if ( (a5 & 4) != 0 )
  {
    v33 = (struct tagMONITOR *)MonitorFromRect(&a3->left, 2u, 0x12u);
    AdvancedWindowPos::CWindowAction::SetMonitor((AdvancedWindowPos::CWindowAction *)&v37, v33, 1, 0LL);
LABEL_43:
    v30 = v37;
  }
LABEL_44:
  if ( (a5 & 0x20) == 0 )
  {
    v46 |= 2u;
    v47 = v39;
    v49 = v41 + v39;
    v52 = a6;
    v50 = v40 + v42;
    v37 = v30 | 0x400;
    v48 = v40;
    v51 = v44;
  }
  AdvancedWindowPos::xxxApplyWindowAction(a1, &v37, 11LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v54,
    v34);
}
