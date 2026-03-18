/*
 * XREFs of RIMGetSourceProcessId @ 0x14016F0B0
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x14016F090 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, void *a3)
{
  bool v4; // si
  bool v5; // r14
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // edx
  int v10; // r8d
  int v11; // r14d
  bool v12; // si
  bool v13; // r15
  _BYTE *v15; // r13
  char *v16; // r12
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  PVOID v25; // rsi
  char *v26; // r15
  __int64 v27; // rax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // si
  bool v34; // r15
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  PVOID v39[8]; // [rsp+58h] [rbp-40h] BYREF
  int Src; // [rsp+B8h] [rbp+20h] BYREF

  Object = 0LL;
  v39[0] = 0LL;
  Src = 0;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      141,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    v15 = Object;
    v16 = (char *)Object + 104;
    v39[1] = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( v15[81] )
    {
      v11 = -1073741637;
      v33 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v17, v18);
        LOBYTE(v36) = v34;
        LOBYTE(v37) = v33;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v37,
          v36,
          *(_QWORD *)(v35 + 19368),
          3,
          1,
          142,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      v11 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, v39);
      if ( v11 >= 0 )
      {
        v25 = v39[0];
        if ( v39[0] )
          v26 = (char *)v39[0] + 72;
        else
          v26 = 0LL;
        if ( *((_QWORD *)v26 + 46) )
        {
          v27 = W32GetUserSessionState(v20, v19, v21);
          RIMLockExclusive(v27 + 56);
          v31 = *(_QWORD *)(*((_QWORD *)v26 + 46) + 88LL);
          if ( v31 )
            Src = *(_DWORD *)(v31 + 56);
          v32 = W32GetUserSessionState(v29, v28, v30);
          RIMUnlockExclusive(v32 + 56);
        }
        RtlCopyToUser(a3, &Src, 4uLL);
        ObfDereferenceObject(v25);
      }
    }
    RIMUnlockExclusive((__int64)v16);
    ObfDereferenceObject(v15);
  }
  v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
    LOBYTE(v23) = v13;
    LOBYTE(v24) = v12;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(v22 + 19368),
      4,
      1,
      143,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v11);
  }
  return (unsigned int)v11;
}
