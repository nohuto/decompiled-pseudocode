/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1401DC2CC
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  int v8; // esi
  char *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // bl
  bool v20; // bp
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  char v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      47,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  Object = 0LL;
  v8 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 19336),
        3,
        1,
        49,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
    }
  }
  else
  {
    v9 = (char *)Object;
    if ( *((_DWORD *)Object + 30) >= 2u )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1455);
    }
    v10 = *((_QWORD *)v9 + 49);
    v11 = v10 + 104;
    RIMLockExclusive(v10 + 104);
    if ( v10 )
    {
      if ( (*(_QWORD *)(v10 + 832) || *(_DWORD *)(v10 + 1056)) && *(_QWORD *)(v10 + 32) != PsGetCurrentProcess(v13, v12) )
      {
        *((_DWORD *)v9 + 60) |= 0x100000u;
        v15 = W32GetUserSessionState(v14, v12);
        RIMLockExclusive(v15 + 56);
        *((_DWORD *)v9 + 64) |= 4u;
        v18 = W32GetUserSessionState(v17, v16);
        RIMUnlockExclusive(v18 + 56);
        if ( (*((_DWORD *)v9 + 60) & 0x800000) != 0 )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1476);
        }
        *((_DWORD *)v9 + 60) |= 0x800000u;
        ZwSetEvent(*(HANDLE *)(v10 + 344), 0LL);
        v8 = 0;
      }
      else if ( *(_BYTE *)(v10 + 81) || *(_BYTE *)(v10 + 82) )
      {
        v8 = -1073741637;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v19 = 0;
        }
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
          LOBYTE(v22) = v20;
          LOBYTE(v23) = v19;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v23,
            v22,
            *(_QWORD *)(v21 + 19336),
            3,
            1,
            48,
            (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
        }
      }
      else
      {
        v8 = RIMFreeDev((struct RawInputManagerObject *)v10, (struct RIMDEV *)(v9 + 72));
      }
    }
    RIMUnlockExclusive(v11);
    ObfDereferenceObject(v9);
  }
  return (unsigned int)v8;
}
