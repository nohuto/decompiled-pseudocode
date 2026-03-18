/*
 * XREFs of ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x14018EAD0
 * Callers:
 *     UserJobCallout @ 0x1402D00F0 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
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

  v3 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      8,
      24,
      (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
      (char)a1);
  }
  v8 = (void *)*((_QWORD *)a1 + 8);
  if ( v8 )
  {
    Win32FreePool(v8);
    *((_QWORD *)a1 + 8) = 0LL;
    *((_QWORD *)a1 + 7) = 0LL;
  }
  for ( i = (struct tagW32JOB *)(W32GetUserSessionState(v8, a2) + 69088); *(_QWORD *)i; i = *(struct tagW32JOB **)i )
  {
    if ( *(struct tagW32JOB **)i == a1 )
    {
      *(_QWORD *)i = *(_QWORD *)a1;
      break;
    }
  }
  RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)a1 + 3));
  Win32FreePool(a1);
  return 1LL;
}
