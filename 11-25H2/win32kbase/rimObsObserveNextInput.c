/*
 * XREFs of rimObsObserveNextInput @ 0x14013BE38
 * Callers:
 *     NtRIMObserveNextInput @ 0x1401D80A0 (NtRIMObserveNextInput.c)
 *     RIMObserveNextInput @ 0x1401DBD40 (RIMObserveNextInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimObsPopInputMessage @ 0x14013C0D8 (rimObsPopInputMessage.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1401A0190 (RawInputManagerInputObserverObjectResolveHandle.c)
 */

__int64 __fastcall rimObsObserveNextInput(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  bool v4; // bl
  bool v5; // di
  int v6; // edi
  unsigned int *v7; // rsi
  char *v8; // r15
  int v9; // eax
  __int64 v10; // rdx
  bool v11; // bl
  bool v12; // di
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  bool v17; // bp
  bool v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2;
  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v15) = v5;
    LOBYTE(v16) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      1,
      33,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1);
  }
  Object = 0LL;
  v6 = RawInputManagerInputObserverObjectResolveHandle(a1, a2, v2, &Object);
  if ( v6 >= 0 )
  {
    v7 = (unsigned int *)Object;
    v8 = (char *)Object + 176;
    RIMLockExclusive((__int64)Object + 176);
    v9 = rimObsPopInputMessage(v7, v2, *((_QWORD *)v7 + 12), v7[26]);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v17 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = *((_QWORD *)v7 + 10);
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v21) = v18;
        LOBYTE(v22) = v17;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(v20 + 69144),
          4,
          1,
          34,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v19);
      }
      ZwSetEvent(*((HANDLE *)v7 + 10), 0LL);
    }
    else if ( v9 == -2147483622 )
    {
      v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v24) = v12;
        LOBYTE(v25) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 69144),
          4,
          1,
          35,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      v7[22] = 1;
      v6 = 0;
    }
    RIMUnlockExclusive((__int64)v8);
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v6;
}
