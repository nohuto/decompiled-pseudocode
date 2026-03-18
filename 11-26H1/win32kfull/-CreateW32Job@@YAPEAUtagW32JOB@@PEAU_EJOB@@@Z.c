/*
 * XREFs of ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x14018E550
 * Callers:
 *     UserJobCallout @ 0x1402D00F0 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
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
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  v2 = 1;
  v3 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      8,
      15,
      (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
      (char)a1);
  }
  v8 = Win32AllocPoolZInit(72LL, 1651143509LL);
  v9 = (_QWORD *)v8;
  if ( !v8 )
    return 0LL;
  if ( (int)CreateGlobalAtomTable(v8 + 24) < 0 )
  {
    Win32FreePool(v9);
    return 0LL;
  }
  v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 69088);
  *v9 = v12;
  *(_QWORD *)(W32GetUserSessionState(v12, v13) + 69088) = v9;
  v9[1] = a1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v2 = 0;
  }
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v2;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 69152),
      4,
      8,
      16,
      (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
      (char)v9,
      (char)a1);
  }
  return (struct tagW32JOB *)v9;
}
