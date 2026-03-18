/*
 * XREFs of RIMGetDevicePreparsedData @ 0x140183A90
 * Callers:
 *     NtRIMGetDevicePreparsedData @ 0x140183A70 (NtRIMGetDevicePreparsedData.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x140198040 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // edx
  int v15; // edi
  int v16; // r8d
  _BYTE *v17; // rsi
  int v18; // edx
  int v19; // r8d
  bool v20; // bl
  bool v21; // bp
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // bl
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF

  Object = 0LL;
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      125,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v15 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v15 >= 0 )
  {
    v17 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v17[81] )
    {
      v15 = -1073741637;
      v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v19);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(v22 + 19368),
          3,
          1,
          126,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      v15 = RIMGetDevicePreparsedDataLockfree(a2, a3, a4, a5);
    }
    RIMUnlockExclusive((__int64)(v17 + 104));
    ObfDereferenceObject(v17);
  }
  v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v16);
    LOBYTE(v28) = v26;
    LOBYTE(v29) = v25;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      *(_QWORD *)(v27 + 19368),
      4,
      1,
      127,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v15);
  }
  return (unsigned int)v15;
}
