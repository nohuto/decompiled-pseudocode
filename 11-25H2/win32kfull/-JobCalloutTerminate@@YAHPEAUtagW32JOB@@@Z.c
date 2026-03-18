/*
 * XREFs of ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1400D8850
 * Callers:
 *     UserJobCallout @ 0x1400D8250 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x1402939D0 (-W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ.c)
 */

__int64 __fastcall JobCalloutTerminate(struct tagW32JOB *a1, __int64 a2)
{
  bool v3; // di
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  void *v8; // rcx
  struct tagW32JOB *i; // rax

  v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      8,
      24,
      (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
      (char)a1);
  }
  v8 = (void *)*((_QWORD *)a1 + 7);
  if ( v8 )
  {
    Win32FreePool(v8);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 13) = 0;
  }
  for ( i = W32GetUserJobsGlobals(); *(_QWORD *)i; i = *(struct tagW32JOB **)i )
  {
    if ( *(struct tagW32JOB **)i == a1 )
    {
      *(_QWORD *)i = *(_QWORD *)a1;
      break;
    }
  }
  RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)a1 + 2));
  Win32FreePool(a1);
  return 1LL;
}
