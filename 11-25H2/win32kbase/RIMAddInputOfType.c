/*
 * XREFs of RIMAddInputOfType @ 0x1401D92F0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401F0B64 (RIMDiscoverDevicesOfInputType.c)
 */

__int64 __fastcall RIMAddInputOfType(char *a1, int a2)
{
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  int v10; // edi
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  bool v14; // bl
  bool v15; // bp
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  bool v20; // bl
  bool v21; // si
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int16 v26; // [rsp+30h] [rbp-48h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      26,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 >= 0 )
  {
    v11 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v11 + 81) || *((_BYTE *)v11 + 82) )
    {
      v10 = -1073741637;
      v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      v26 = 29;
    }
    else
    {
      if ( !a2 || ((a2 - 1) & a2) != 0 && (a2 & 0x1C) == 0 )
      {
        v10 = -1073741811;
        v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v12) + 19336);
        v26 = 28;
        goto LABEL_42;
      }
      v13 = v11[21];
      if ( (v13 & a2) == 0 )
      {
        v11[21] = a2 | v13;
        RIMDiscoverDevicesOfInputType(v11);
LABEL_43:
        RIMUnlockExclusive((__int64)(v11 + 26));
        ObfDereferenceObject(v11);
        goto LABEL_44;
      }
      v10 = -1073741637;
      v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      v26 = 27;
    }
    v19 = *(_QWORD *)(v16 + 19336);
LABEL_42:
    LOBYTE(v18) = v15;
    LOBYTE(v17) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v18,
      v19,
      3,
      1,
      v26,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
    goto LABEL_43;
  }
LABEL_44:
  v20 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v20;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(v22 + 19336),
      4,
      1,
      30,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
