/*
 * XREFs of UserJobCallout @ 0x1400D8250
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1400D7FB4 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1400D8850 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1400D9AB8 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140145220 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401D11CC (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x140256508 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x1402939D0 (-W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  int v1; // r15d
  unsigned int v2; // ebx
  struct _EJOB *v3; // r12
  struct tagPROCESSINFO *v4; // r14
  __int64 v5; // rbp
  char v6; // si
  __int64 v7; // rdx
  struct tagW32JOB *i; // rdi
  bool v9; // bp
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  bool v15; // r15
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  _BYTE v31[16]; // [rsp+60h] [rbp-38h] BYREF
  bool v32; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 0;
  v3 = *(struct _EJOB **)(a1 + 16);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 1;
  if ( v1 != 1
    || (ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 32)),
        (v4 = ProcessWin32Process) != 0LL)
    && *(_QWORD *)ProcessWin32Process )
  {
    v32 = IS_USERCRIT_OWNED_EXCLUSIVE();
    if ( !v32 )
      EnterCrit(1LL, 0LL);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v31);
    for ( i = *(struct tagW32JOB **)W32GetUserJobsGlobals();
          i && *((struct _EJOB **)i + 1) != v3;
          i = *(struct tagW32JOB **)i )
    {
      ;
    }
    if ( v1 )
    {
      if ( v1 != 1 )
      {
        if ( v1 == 2 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
          {
            v6 = 0;
          }
          v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
            LOBYTE(v11) = v9;
            LOBYTE(v12) = v6;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v12,
              v11,
              *(_QWORD *)(UserSessionState + 69160),
              4,
              8,
              13,
              (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
              (char)v3,
              (char)i);
          }
          if ( i )
            JobCalloutTerminate(i);
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
          {
            v6 = 0;
          }
          v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
            LOBYTE(v21) = v19;
            LOBYTE(v22) = v6;
            WPP_RECORDER_AND_TRACE_SF_dq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v22,
              v21,
              *(_QWORD *)(v20 + 69160));
          }
          v2 = -1073741822;
        }
        goto LABEL_19;
      }
      if ( i )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v6 = 0;
        }
        v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v6;
          WPP_RECORDER_AND_TRACE_SF_qqq(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v18,
            v17,
            *(_QWORD *)(v16 + 69160),
            4,
            8,
            12,
            (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
            (char)v3,
            (char)i,
            v5);
        }
        JobCalloutAddProcess(i, v4);
        goto LABEL_19;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v6 = 0;
      }
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v6;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          *(_QWORD *)(v24 + 69160),
          4,
          8,
          11,
          (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
          (char)v3);
      }
      goto LABEL_22;
    }
    if ( i )
    {
      if ( (_DWORD)v5 == *((_DWORD *)i + 6) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v6 = 0;
        }
        v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
          LOBYTE(v29) = v27;
          LOBYTE(v30) = v6;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v30,
            v29,
            *(_QWORD *)(v28 + 69160),
            4,
            8,
            10,
            (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids);
        }
        goto LABEL_19;
      }
    }
    else
    {
      i = CreateW32Job(v3);
      if ( !i )
      {
LABEL_22:
        v2 = -1073741823;
LABEL_19:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v31);
        ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v32);
        return v2;
      }
    }
    *((_DWORD *)i + 6) = v5;
    UpdateJob(i);
    goto LABEL_19;
  }
  return 0LL;
}
