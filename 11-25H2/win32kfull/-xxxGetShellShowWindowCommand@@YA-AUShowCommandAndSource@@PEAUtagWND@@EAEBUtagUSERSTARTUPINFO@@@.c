/*
 * XREFs of ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14025C310
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x140029E0C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ComputeShowCommandSource@@YA?AW4ShowCommandSource@@H@Z @ 0x1401F642C (-ComputeShowCommandSource@@YA-AW4ShowCommandSource@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1402C3384 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxGetShellShowWindowCommand(__int64 a1, CallShell *a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v5; // r14d
  char v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // r13
  char v13; // r12
  __int16 v14; // bx
  __int64 v15; // rdi
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  char v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  bool v25; // bl
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // bl
  bool v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int128 v34; // xmm6
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // r12d
  char v39; // bl
  bool v40; // di
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *v44; // r9
  __int64 v45; // rdx
  bool v46; // di
  __int64 v47; // rax
  int v48; // edx
  int v49; // r8d
  char v50; // r12
  bool v51; // bl
  bool v52; // di
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  bool v56; // di
  bool v57; // r12
  __int64 v58; // rbx
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  bool v62; // di
  bool v63; // r12
  __int64 v64; // rbx
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  bool v68; // di
  __int64 v69; // rbx
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  __int16 v74; // [rsp+30h] [rbp-E8h]
  char v75; // [rsp+40h] [rbp-D8h]
  bool v76; // [rsp+50h] [rbp-C8h]
  unsigned int v77[5]; // [rsp+60h] [rbp-B8h] BYREF
  int v78; // [rsp+74h] [rbp-A4h]
  __int128 v79; // [rsp+78h] [rbp-A0h]

  v5 = a3;
  v8 = 1;
  if ( !ShellWindowManagement::WindowSubjectToBehavior((__int64)a2, 0x201u, 0, 1) )
  {
    if ( (_BYTE)v5 == 19 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 412LL);
    goto LABEL_4;
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v10, v9, v11)
    && (*(_DWORD *)(a4 + 20) & 0x20000) != 0 )
  {
    v12 = *(_BYTE *)(a4 + 24);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
      || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v13 = 0;
    }
    v76 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_WORD *)(a4 + 24);
      v15 = *(_QWORD *)a2;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v17) = v76;
      LOBYTE(v18) = v13;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        12,
        21,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
        v15,
        v14);
    }
    if ( ((v12 - 1) & 0xFD) == 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
        || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v19 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v23,
          v22,
          *(_QWORD *)(v21 + 69160),
          4,
          12,
          22,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
          v12);
      }
      *((_DWORD *)a2 + 95) |= 2u;
      *(_DWORD *)a1 = 1;
      *(_BYTE *)(a1 + 4) = v12;
      goto LABEL_6;
    }
  }
  if ( !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x200, (__int64)&WPP_RECORDER_INITIALIZED)
    || ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)1, v24) )
  {
    v34 = 0LL;
    v35 = ComputeShowCommandSource(v5, v24);
    v38 = v35;
    if ( v35 == 4 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
        || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v39 = 0;
      }
      v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v41 = W32GetUserSessionState(v37, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v42) = v40;
        LOBYTE(v43) = v39;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v43,
          v42,
          *(_QWORD *)(v41 + 69160),
          4,
          12,
          25,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
          v5);
      }
      memset_0(v77, 0, 0x68uLL);
      if ( !CallShell::xxxShowWindowPolicyHandler(a2, (struct tagWND *)v5, (unsigned int)v77, v44) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v8 = 0;
        }
        v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_63;
        v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
        v75 = v5;
        v74 = 26;
LABEL_62:
        LOBYTE(v49) = v46;
        LOBYTE(v48) = v8;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v48,
          v49,
          *(_QWORD *)(v47 + 69160),
          3,
          12,
          v74,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
          v75);
LABEL_63:
        *(_DWORD *)a1 = 0;
        goto LABEL_5;
      }
      v50 = v78;
      v51 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v51 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
        LOBYTE(v54) = v52;
        LOBYTE(v55) = v51;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v55,
          v54,
          *(_QWORD *)(v53 + 69160),
          4,
          12,
          27,
          (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
          v50);
      }
      v36 = 15LL;
      if ( (v50 & 0xF) != 0 )
      {
        switch ( v50 & 0xF )
        {
          case 1:
            LOBYTE(v5) = -1;
            break;
          case 2:
            if ( (_BYTE)v5 != 8 )
              v36 = 3LL;
            LOBYTE(v5) = v36;
            break;
          case 3:
            v34 = v79;
            LOBYTE(v5) = 19;
            break;
          default:
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
            {
              v8 = 0;
            }
            v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              goto LABEL_63;
            v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 15LL);
            v75 = v5;
            v74 = 28;
            goto LABEL_62;
        }
      }
      if ( (v50 & 0x10) != 0 )
      {
        v56 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v57 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v56 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v58 = *(_QWORD *)a2;
          v59 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
          LOBYTE(v60) = v57;
          LOBYTE(v61) = v56;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v61,
            v60,
            *(_QWORD *)(v59 + 69160),
            4,
            12,
            29,
            (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
            v58);
        }
        *((_DWORD *)a2 + 95) |= 4u;
      }
      else
      {
        v62 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v62 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v64 = *(_QWORD *)a2;
          v65 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
          LOBYTE(v66) = v63;
          LOBYTE(v67) = v62;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v67,
            v66,
            *(_QWORD *)(v65 + 69160),
            4,
            12,
            30,
            (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
            v64);
        }
        *((_DWORD *)a2 + 95) &= ~4u;
      }
      v38 = 4;
    }
    else if ( !v35 )
    {
LABEL_117:
      *(_DWORD *)a1 = v38;
      *(_BYTE *)(a1 + 4) = v5;
      *(_WORD *)(a1 + 5) = 0;
      *(_BYTE *)(a1 + 7) = 0;
      *(_OWORD *)(a1 + 8) = v34;
      return a1;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v8 = 0;
    }
    v68 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v69 = *(_QWORD *)a2;
      v70 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
      LOBYTE(v71) = v68;
      LOBYTE(v72) = v8;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v72,
        v71,
        *(_QWORD *)(v70 + 69160),
        4,
        12,
        31,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
        v69);
    }
    *((_DWORD *)a2 + 95) |= 2u;
    goto LABEL_117;
  }
  if ( (_BYTE)v5 == 1 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v8 = 0;
    }
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v28,
        v27,
        *(_QWORD *)(v26 + 69160),
        4,
        12,
        23,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
    }
    v29 = 3;
LABEL_45:
    *((_DWORD *)a2 + 95) |= 2u;
    *(_DWORD *)a1 = 2;
    *(_BYTE *)(a1 + 4) = v29;
    goto LABEL_6;
  }
  if ( (_BYTE)v5 == 4 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v8 = 0;
    }
    v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v33,
        v32,
        *(_QWORD *)(v31 + 69160),
        4,
        12,
        24,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
    }
    v29 = 15;
    goto LABEL_45;
  }
LABEL_4:
  *(_DWORD *)a1 = 0;
LABEL_5:
  *(_BYTE *)(a1 + 4) = v5;
LABEL_6:
  *(_WORD *)(a1 + 5) = 0;
  *(_BYTE *)(a1 + 7) = 0;
  *(_OWORD *)(a1 + 8) = 0LL;
  return a1;
}
