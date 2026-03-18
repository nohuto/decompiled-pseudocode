/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x140201B70
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1401FF1A0 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, void *a3)
{
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // edx
  int v10; // edi
  int v11; // r8d
  _BYTE *v12; // r15
  int v13; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  PVOID v17; // rsi
  char *v18; // rcx
  bool v19; // r14
  bool v20; // r15
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  bool v24; // si
  bool v25; // r14
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // si
  bool v30; // r14
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v36; // [rsp+58h] [rbp-30h]
  PVOID v39; // [rsp+A8h] [rbp+20h] BYREF

  v39 = 0LL;
  Object = 0LL;
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
      137,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v39);
  if ( v10 >= 0 )
  {
    v12 = v39;
    v36 = (__int64)v39 + 104;
    RIMLockExclusive((__int64)v39 + 104);
    if ( v12[81] )
    {
      v10 = -1073741637;
      v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 19368),
          3,
          1,
          139,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      v10 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v10 >= 0 )
      {
        v17 = Object;
        if ( Object )
          v18 = (char *)Object + 72;
        else
          v18 = 0LL;
        if ( (*((_DWORD *)v18 + 46) & 0x80u) == 0 )
        {
          v10 = -1073741637;
          v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
            LOBYTE(v22) = v20;
            LOBYTE(v23) = v19;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v23,
              v22,
              *(_QWORD *)(v21 + 19368),
              3,
              1,
              138,
              (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
          }
          v12 = v39;
        }
        else
        {
          RtlCopyToUser(a3, (void *)(*((_QWORD *)v18 + 57) + 140LL), 0x10uLL);
        }
        ObfDereferenceObject(v17);
      }
    }
    RIMUnlockExclusive(v36);
    ObfDereferenceObject(v12);
  }
  v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v11);
    LOBYTE(v32) = v30;
    LOBYTE(v33) = v29;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(v31 + 19368),
      4,
      1,
      140,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
