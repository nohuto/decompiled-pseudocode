/*
 * XREFs of NtRIMAddInputObserver @ 0x1401D7BC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimObsAddInputObserver @ 0x1401F296C (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1401F33CC (rimObsCheckForObservationPermissions.c)
 */

__int64 __fastcall NtRIMAddInputObserver(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8)
{
  int v11; // r15d
  _UNKNOWN **v12; // rdx
  bool v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  unsigned int v23; // ebx
  _UNKNOWN **v24; // rcx
  bool v25; // di
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx

  v11 = a1;
  v12 = &WPP_GLOBAL_Control;
  v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_GLOBAL_Control);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      1,
      155,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
    v12 = &WPP_GLOBAL_Control;
  }
  if ( a7 )
  {
    if ( (unsigned int)rimObsCheckForObservationPermissions(a7) )
      v23 = rimObsAddInputObserver(v11, a2, a3, 1, a4, a5, a6, a7, a8);
    else
      v23 = -1073741790;
  }
  else
  {
    v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69144),
        3,
        1,
        156,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
        0);
    }
    v23 = -1073741811;
  }
  v24 = &WPP_GLOBAL_Control;
  v25 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    v24 = (_UNKNOWN **)*((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( ((unsigned __int8)v24 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v25 = 1;
  }
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = W32GetUserSessionState(v24, v12);
    LOBYTE(v28) = v26;
    LOBYTE(v29) = v25;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      *(_QWORD *)(v27 + 69144),
      4,
      1,
      157,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v23);
  }
  return v23;
}
