/*
 * XREFs of RIMAddInputOfType @ 0x140200340
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401BB0E0 (RIMDiscoverDevicesOfInputType.c)
 */

__int64 __fastcall RIMAddInputOfType(char *a1, int a2, int a3)
{
  bool v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v10; // edx
  int v11; // edi
  int v12; // r8d
  char *v13; // rsi
  int v14; // edx
  int v15; // r8d
  int v16; // eax
  bool v17; // bl
  bool v18; // bp
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r9
  bool v23; // bl
  bool v24; // si
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int16 v29; // [rsp+30h] [rbp-48h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      26,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    v13 = (char *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v13[81] || v13[82] )
    {
      v11 = -1073741637;
      v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
      v29 = 29;
    }
    else
    {
      if ( !a2 || ((a2 - 1) & a2) != 0 && (a2 & 0x1C) == 0 )
      {
        v11 = -1073741811;
        v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v22 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15) + 19368);
        v29 = 28;
        goto LABEL_42;
      }
      v16 = *((_DWORD *)v13 + 21);
      if ( (v16 & a2) == 0 )
      {
        *((_DWORD *)v13 + 21) = a2 | v16;
        RIMDiscoverDevicesOfInputType(v13, v14, v15);
LABEL_43:
        RIMUnlockExclusive((__int64)(v13 + 104));
        ObfDereferenceObject(v13);
        goto LABEL_44;
      }
      v11 = -1073741637;
      v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
      v29 = 27;
    }
    v22 = *(_QWORD *)(v19 + 19368);
LABEL_42:
    LOBYTE(v21) = v18;
    LOBYTE(v20) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v21,
      v22,
      3,
      1,
      v29,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
    goto LABEL_43;
  }
LABEL_44:
  v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v12);
    LOBYTE(v26) = v24;
    LOBYTE(v27) = v23;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v26,
      *(_QWORD *)(v25 + 19368),
      4,
      1,
      30,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v11);
  }
  return (unsigned int)v11;
}
