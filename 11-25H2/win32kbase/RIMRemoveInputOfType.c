/*
 * XREFs of RIMRemoveInputOfType @ 0x14002D000
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x14018C0E0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x14002CED8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMRemoveDevOfInputType @ 0x1401D5944 (RIMRemoveDevOfInputType.c)
 */

__int64 __fastcall RIMRemoveInputOfType(__int64 a1, int a2)
{
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  int v10; // edi
  struct RawInputManagerObject *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // edi
  bool v15; // bl
  bool v16; // bp
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
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
      21,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v10 >= 0 )
  {
    v11 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((char *)Object + 104);
    if ( *((_BYTE *)v11 + 81) || *((_BYTE *)v11 + 82) )
    {
      v10 = -1073741637;
      v15 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      v26 = 24;
    }
    else if ( a2 && (((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0) )
    {
      if ( (a2 & *((_DWORD *)v11 + 21)) != 0 )
      {
        if ( a2 == 1 )
        {
          v14 = 0;
        }
        else if ( a2 == 2 )
        {
          v14 = 1;
        }
        else
        {
          v14 = (a2 & 0x3C) != 0 ? 2 : 0;
        }
        RIMRemoveDevOfInputType(v11);
        v10 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v11, v14);
        *((_DWORD *)v11 + 21) &= ~a2;
        goto LABEL_47;
      }
      v10 = -1073741637;
      v15 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      v26 = 22;
    }
    else
    {
      v10 = -1073741811;
      v15 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      v26 = 23;
    }
    LOBYTE(v19) = v16;
    LOBYTE(v18) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v19,
      *(_QWORD *)(v17 + 19336),
      3,
      1,
      v26,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
LABEL_47:
    RIMUnlockExclusive((char *)v11 + 104, v12, v13);
    ObfDereferenceObject(v11);
  }
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
      25,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
