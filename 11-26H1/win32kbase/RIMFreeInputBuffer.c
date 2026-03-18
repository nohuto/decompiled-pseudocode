/*
 * XREFs of RIMFreeInputBuffer @ 0x1402014A0
 * Callers:
 *     NtRIMFreeInputBuffer @ 0x1401FF140 (NtRIMFreeInputBuffer.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMFreeUserMem @ 0x140203C40 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(char *a1, __int64 a2)
{
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 result; // rax
  int v10; // edx
  int v11; // r8d
  char v12; // r14
  _BYTE *v13; // rdi
  int v14; // edx
  int v15; // r8d
  bool v16; // bl
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  bool v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      88,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  result = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v12 = result;
  if ( (int)result >= 0 )
  {
    v13 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v13[81] || v13[82] )
    {
      v12 = -69;
      v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 19368),
          3,
          1,
          89,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)(v13 + 760));
      RIMFreeUserMem(v13, a2);
      RIMUnlockExclusive((__int64)(v13 + 760));
    }
    RIMUnlockExclusive((__int64)(v13 + 104));
    result = ObfDereferenceObject(v13);
  }
  v21 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v21 = 1;
  }
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v21;
    return WPP_RECORDER_AND_TRACE_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v25,
             v24,
             *(_QWORD *)(v23 + 19368),
             4,
             1,
             90,
             (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
             v12);
  }
  return result;
}
