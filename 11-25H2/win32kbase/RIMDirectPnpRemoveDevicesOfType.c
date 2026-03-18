/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x14002E240
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x14002E1C0 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpRemoveComplete @ 0x14002E724 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(__int64 a1, __int64 a2)
{
  int v2; // ebp
  bool v4; // bl
  bool v5; // di
  __int64 v6; // rdx
  int v7; // esi
  bool v8; // bl
  bool v9; // di
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 i; // rbx
  int v15; // eax
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // bl
  bool v23; // bp
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v20) = v5;
    LOBYTE(v21) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      97,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v7 >= 0 )
  {
    v11 = Object;
    RIMLockExclusive((char *)Object + 104);
    if ( *((_BYTE *)v11 + 81) )
    {
      v7 = -1073741637;
      v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 19336),
          3,
          1,
          98,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      for ( i = v11[53]; i; i = *(_QWORD *)(i + 40) )
      {
        v15 = *(_DWORD *)(i + 168);
        if ( (v15 & 0x2000) == 0 && (v15 & 0x400) == 0 && *(_DWORD *)(i + 48) == v2 )
        {
          *(_DWORD *)(i + 168) = v15 | 8;
          rimOnPnpRemoveComplete(v11, i);
        }
      }
    }
    RIMUnlockExclusive(v11 + 13, v12, v13);
    ObfDereferenceObject(v11);
  }
  v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
    LOBYTE(v17) = v9;
    LOBYTE(v18) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 19336),
      4,
      1,
      99,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
