/*
 * XREFs of rimObsObserveNextInput @ 0x140177C0C
 * Callers:
 *     NtRIMObserveNextInput @ 0x1401FF1F0 (NtRIMObserveNextInput.c)
 *     RIMObserveNextInput @ 0x1402023D0 (RIMObserveNextInput.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimObsPopInputMessage @ 0x140177EAC (rimObsPopInputMessage.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1401C2394 (RawInputManagerInputObserverObjectResolveHandle.c)
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
  int v10; // edx
  int v11; // r8d
  bool v12; // bl
  bool v13; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // bp
  bool v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v16) = v5;
    LOBYTE(v17) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 69136),
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
      v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = *((_QWORD *)v7 + 10);
        v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
        LOBYTE(v22) = v19;
        LOBYTE(v23) = v18;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 69136),
          4,
          1,
          34,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v20);
      }
      ZwSetEvent(*((HANDLE *)v7 + 10), 0LL);
    }
    else if ( v9 == -2147483622 )
    {
      v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
        LOBYTE(v25) = v13;
        LOBYTE(v26) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69136),
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
