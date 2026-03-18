/*
 * XREFs of ?SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z @ 0x1401CDE20
 * Callers:
 *     W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___ @ 0x1401CCCA4 (W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___.c)
 * Callees:
 *     CoreMsgSend @ 0x14008B78C (CoreMsgSend.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CoreMessagingKPort::SendMessageToEndpoint(__int64 a1, __int64 a2, const void *a3)
{
  __int64 v4; // rbx
  int v6; // edx
  int v7; // r8d
  void *v8; // rsi
  bool v9; // di
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  NTSTATUS v14; // edi
  char v16; // dl
  unsigned int v17; // ebx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v8 = *(void **)(a1 + 16);
  if ( !v8 )
  {
    v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v7);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        3,
        10,
        (__int64)&WPP_3ccbe7d519863ea957e7d8c580b69285_Traceguids,
        0);
    }
    v14 = -2147020579;
    goto LABEL_12;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(v8, 0, 0LL, 0, &Object, 0LL);
  if ( v14 < 0 )
  {
LABEL_12:
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v14;
  }
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  v17 = CoreMsgSend(v8, v16, a3, 0x18u);
  ObfDereferenceObject(Object);
  return v17;
}
