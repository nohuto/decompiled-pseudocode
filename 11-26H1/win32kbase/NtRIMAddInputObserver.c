/*
 * XREFs of NtRIMAddInputObserver @ 0x1401FED60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimObsAddInputObserver @ 0x14020E44C (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x14020EE9C (rimObsCheckForObservationPermissions.c)
 */

__int64 __fastcall NtRIMAddInputObserver(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7, __int64 a8)
{
  CTouchProcessor **v12; // rdx
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
  CTouchProcessor **v24; // rcx
  bool v25; // di
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx

  v12 = &WPP_GLOBAL_Control;
  v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (unsigned int)&WPP_GLOBAL_Control, a3);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      1,
      154,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
    v12 = &WPP_GLOBAL_Control;
  }
  if ( a7 )
  {
    if ( (unsigned int)rimObsCheckForObservationPermissions(a7) )
      v23 = rimObsAddInputObserver(a1, a2, a3, 1, a4, a5, a6, a7, a8);
    else
      v23 = -1073741790;
  }
  else
  {
    v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control, a3);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69136),
        3,
        1,
        155,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
        0);
    }
    v23 = -1073741811;
  }
  v24 = &WPP_GLOBAL_Control;
  v25 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    LODWORD(v24) = *((_DWORD *)WPP_GLOBAL_Control + 11);
    if ( ((unsigned __int8)v24 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v25 = 1;
  }
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = W32GetUserSessionState((_DWORD)v24, (_DWORD)v12, a3);
    LOBYTE(v28) = v26;
    LOBYTE(v29) = v25;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      *(_QWORD *)(v27 + 69136),
      4,
      1,
      156,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v23);
  }
  return v23;
}
