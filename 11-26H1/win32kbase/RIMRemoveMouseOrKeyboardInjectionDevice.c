/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1402027BC
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1, __int64 a2, int a3)
{
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // edx
  int v10; // ebx
  int v11; // r8d
  char *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rbx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rax
  char v25; // di
  bool v26; // bp
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // di
  bool v31; // si
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      47,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  Object = 0LL;
  v10 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v30 = 0;
    }
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v11);
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(v32 + 19368),
        3,
        1,
        49,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
    }
  }
  else
  {
    v12 = (char *)Object;
    if ( *((_DWORD *)Object + 30) >= 2u )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1455);
    }
    v13 = *((_QWORD *)v12 + 49);
    v14 = v13 + 104;
    RIMLockExclusive(v13 + 104);
    if ( v13 )
    {
      if ( (*(_QWORD *)(v13 + 832) || *(_DWORD *)(v13 + 1056))
        && (v18 = *(_QWORD *)(v13 + 32), v18 != PsGetCurrentProcess(v16)) )
      {
        *((_DWORD *)v12 + 60) |= 0x100000u;
        v20 = W32GetUserSessionState(v19, v15, v17);
        RIMLockExclusive(v20 + 56);
        *((_DWORD *)v12 + 64) |= 4u;
        v24 = W32GetUserSessionState(v22, v21, v23);
        RIMUnlockExclusive(v24 + 56);
        if ( (*((_DWORD *)v12 + 60) & 0x800000) != 0 )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1476);
        }
        *((_DWORD *)v12 + 60) |= 0x800000u;
        ZwSetEvent(*(HANDLE *)(v13 + 344), 0LL);
        v10 = 0;
      }
      else if ( *(_BYTE *)(v13 + 81) || *(_BYTE *)(v13 + 82) )
      {
        v10 = -1073741637;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v25 = 0;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v17);
          LOBYTE(v28) = v26;
          LOBYTE(v29) = v25;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v29,
            v28,
            *(_QWORD *)(v27 + 19368),
            3,
            1,
            48,
            (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
        }
      }
      else
      {
        v10 = RIMFreeDev((struct RawInputManagerObject *)v13, (struct RIMDEV *)(v12 + 72));
      }
    }
    RIMUnlockExclusive(v14);
    ObfDereferenceObject(v12);
  }
  return (unsigned int)v10;
}
