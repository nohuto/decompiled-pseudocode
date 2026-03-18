/*
 * XREFs of ?SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z @ 0x1401AB064
 * Callers:
 *     W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___ @ 0x1401A8FB0 (W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     CoreMsgSend @ 0x140067768 (CoreMsgSend.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall CoreMessagingKPort::SendMessageToEndpoint(__int64 a1, __int64 a2, const void *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  void *v7; // rsi
  bool v8; // di
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  NTSTATUS v13; // edi
  char v15; // dl
  unsigned int v16; // ebx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1 + 8;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(a1 + 8), 0);
  v7 = *(void **)(a1 + 16);
  if ( !v7 )
  {
    v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        3,
        10,
        (__int64)&WPP_dcb43fac889439a026fbb51f02dc5fc0_Traceguids,
        0);
    }
    v13 = -2147020579;
    goto LABEL_12;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(v7, 0, 0LL, 0, &Object, 0LL);
  if ( v13 < 0 )
  {
LABEL_12:
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v13;
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v16 = CoreMsgSend(v7, v15, a3, 0x18u);
  ObfDereferenceObject(Object);
  return v16;
}
