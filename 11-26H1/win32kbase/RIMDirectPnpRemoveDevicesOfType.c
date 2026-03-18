/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x14005E4F0
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x14005F200 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpRemoveComplete @ 0x1400930E8 (rimOnPnpRemoveComplete.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(char *a1, int a2)
{
  bool v4; // bl
  bool v5; // di
  int v6; // edx
  int v7; // esi
  int v8; // r8d
  bool v9; // bl
  bool v10; // di
  _QWORD *v12; // rdi
  int v13; // edx
  int v14; // r8d
  __int64 i; // rbx
  int v16; // eax
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // bl
  bool v24; // bp
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v21) = v5;
    LOBYTE(v22) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      96,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 >= 0 )
  {
    v12 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v12 + 81) )
    {
      v7 = -1073741637;
      v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v27,
          v26,
          *(_QWORD *)(v25 + 19368),
          3,
          1,
          97,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      for ( i = v12[53]; i; i = *(_QWORD *)(i + 40) )
      {
        v16 = *(_DWORD *)(i + 168);
        if ( (v16 & 0x2000) == 0 && (v16 & 0x400) == 0 && *(_DWORD *)(i + 48) == a2 )
        {
          *(_DWORD *)(i + 168) = v16 | 8;
          rimOnPnpRemoveComplete(v12, i);
        }
      }
    }
    RIMUnlockExclusive((__int64)(v12 + 13));
    ObfDereferenceObject(v12);
  }
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v8);
    LOBYTE(v18) = v10;
    LOBYTE(v19) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 19368),
      4,
      1,
      98,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
