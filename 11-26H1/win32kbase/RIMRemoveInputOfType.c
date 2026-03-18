/*
 * XREFs of RIMRemoveInputOfType @ 0x140092800
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1402198D0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RIMRemoveDevOfInputType @ 0x140092B8C (RIMRemoveDevOfInputType.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x140092C7C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMRemoveInputOfType(char *a1, int a2, int a3)
{
  bool v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v10; // edx
  int v11; // edi
  int v12; // r8d
  struct RawInputManagerObject *v13; // rsi
  int v14; // edx
  int v15; // r8d
  unsigned int v16; // edi
  bool v17; // bl
  bool v18; // bp
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  bool v22; // bl
  bool v23; // si
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int16 v28; // [rsp+30h] [rbp-48h]
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
      21,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    v13 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v13 + 81) || *((_BYTE *)v13 + 82) )
    {
      v11 = -1073741637;
      v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
      v28 = 24;
    }
    else if ( a2 && (((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0) )
    {
      if ( (a2 & *((_DWORD *)v13 + 21)) != 0 )
      {
        if ( a2 == 1 )
        {
          v16 = 0;
        }
        else if ( a2 == 2 )
        {
          v16 = 1;
        }
        else
        {
          v16 = (a2 & 0x3C) != 0 ? 2 : 0;
        }
        RIMRemoveDevOfInputType(v13);
        v11 = RIMUnRegisterForInputDeviceTypeClassNotifications(v13, v16);
        *((_DWORD *)v13 + 21) &= ~a2;
        goto LABEL_47;
      }
      v11 = -1073741637;
      v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
      v28 = 22;
    }
    else
    {
      v11 = -1073741811;
      v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
      v28 = 23;
    }
    LOBYTE(v21) = v18;
    LOBYTE(v20) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v21,
      *(_QWORD *)(v19 + 19368),
      3,
      1,
      v28,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
LABEL_47:
    RIMUnlockExclusive((__int64)v13 + 104);
    ObfDereferenceObject(v13);
  }
  v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v12);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v22;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 19368),
      4,
      1,
      25,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v11);
  }
  return (unsigned int)v11;
}
