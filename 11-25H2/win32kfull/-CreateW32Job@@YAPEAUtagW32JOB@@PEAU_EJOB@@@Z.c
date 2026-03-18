/*
 * XREFs of ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1400D7FB4
 * Callers:
 *     UserJobCallout @ 0x1400D8250 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x1402939D0 (-W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ.c)
 */

struct tagW32JOB *__fastcall CreateW32Job(struct _EJOB *a1)
{
  char v2; // di
  bool v3; // bl
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  bool v11; // si
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx

  v2 = 1;
  v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      8,
      15,
      (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
      (char)a1);
  }
  v8 = Win32AllocPoolZInit(64LL, 1651143509LL);
  v9 = (_QWORD *)v8;
  if ( !v8 )
    return 0LL;
  if ( (int)CreateGlobalAtomTable(v8 + 16) < 0 )
  {
    Win32FreePool(v9);
    return 0LL;
  }
  *v9 = *(_QWORD *)W32GetUserJobsGlobals();
  *(_QWORD *)W32GetUserJobsGlobals() = v9;
  v9[1] = a1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v2 = 0;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v2;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(v12 + 69160),
      4,
      8,
      16,
      (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
      (char)v9,
      (char)a1);
  }
  return (struct tagW32JOB *)v9;
}
