/*
 * XREFs of NtRIMUpdateInputObserverRegistration @ 0x1401D87E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimObsCheckForObservationPermissions @ 0x1401F33CC (rimObsCheckForObservationPermissions.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1401F4CF0 (rimObsUpdateInputObserverRegistration.c)
 */

__int64 __fastcall NtRIMUpdateInputObserverRegistration(HANDLE Handle, unsigned int a2)
{
  _UNKNOWN **v4; // rdx
  bool v5; // bl
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // bl
  bool v11; // di
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  unsigned int updated; // ebx
  _UNKNOWN **v16; // rcx
  bool v17; // di
  bool v18; // si
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx

  v4 = &WPP_GLOBAL_Control;
  v5 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Handle, &WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      1,
      158,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
    v4 = &WPP_GLOBAL_Control;
  }
  if ( a2 )
  {
    if ( (unsigned int)rimObsCheckForObservationPermissions(a2) )
      updated = rimObsUpdateInputObserverRegistration(Handle, 1);
    else
      updated = -1073741790;
  }
  else
  {
    v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69144),
        3,
        1,
        159,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
        0);
    }
    updated = -1073741811;
  }
  v16 = &WPP_GLOBAL_Control;
  v17 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    v16 = (_UNKNOWN **)*((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( ((unsigned __int8)v16 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v17 = 1;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(v16, v4);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 69144),
      4,
      1,
      160,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      updated);
  }
  return updated;
}
