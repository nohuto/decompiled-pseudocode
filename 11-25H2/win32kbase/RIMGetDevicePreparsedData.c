/*
 * XREFs of RIMGetDevicePreparsedData @ 0x140155BB0
 * Callers:
 *     NtRIMGetDevicePreparsedData @ 0x140155B90 (NtRIMGetDevicePreparsedData.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x140158BD0 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  int v15; // edi
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  bool v18; // bl
  bool v19; // bp
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // bl
  bool v24; // si
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF

  Object = 0LL;
  v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      126,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v15 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v15 >= 0 )
  {
    v16 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v16[81] )
    {
      v15 = -1073741637;
      v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(v20 + 19336),
          3,
          1,
          127,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      v15 = RIMGetDevicePreparsedDataLockfree(a2, a3, a4, a5);
    }
    RIMUnlockExclusive((__int64)(v16 + 104));
    ObfDereferenceObject(v16);
  }
  v23 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
    LOBYTE(v26) = v24;
    LOBYTE(v27) = v23;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v26,
      *(_QWORD *)(v25 + 19336),
      4,
      1,
      128,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v15);
  }
  return (unsigned int)v15;
}
