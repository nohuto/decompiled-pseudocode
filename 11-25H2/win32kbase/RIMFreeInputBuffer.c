/*
 * XREFs of RIMFreeInputBuffer @ 0x1401DAE00
 * Callers:
 *     NtRIMFreeInputBuffer @ 0x1401D7FF0 (NtRIMFreeInputBuffer.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMFreeUserMem @ 0x1401DDF60 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(char *a1, __int64 a2)
{
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 result; // rax
  __int64 v10; // rdx
  char v11; // r14
  _BYTE *v12; // rdi
  __int64 v13; // rdx
  bool v14; // bl
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      89,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  result = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v11 = result;
  if ( (int)result >= 0 )
  {
    v12 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v12[81] || v12[82] )
    {
      v11 = -69;
      v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(v16 + 19336),
          3,
          1,
          90,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)(v12 + 760));
      RIMFreeUserMem(v12, a2);
      RIMUnlockExclusive((__int64)(v12 + 760));
    }
    RIMUnlockExclusive((__int64)(v12 + 104));
    result = ObfDereferenceObject(v12);
  }
  v19 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v19 = 1;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v19;
    return WPP_RECORDER_AND_TRACE_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v23,
             v22,
             *(_QWORD *)(v21 + 19336),
             4,
             1,
             91,
             (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
             v11);
  }
  return result;
}
