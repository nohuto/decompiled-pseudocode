/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___ @ 0x1401A8FB0
 * Callers:
 *     ?SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401A91E0 (-SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z @ 0x1401AB064 (-SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z.c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822_(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    return CoreMessagingKPort::SendMessageToEndpoint(*(_QWORD *)(UserSessionState + 72184), v12, *a2);
  }
  else
  {
    v13 = 0LL;
    v6 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, &v13);
    v8 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v6 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v6 >= 0 )
      {
        v6 = CoreMessagingKPort::SendMessageToEndpoint(*(_QWORD *)(v13 + 72184), v9, *a2);
        PsReleaseProcessExitSynchronization(v8);
      }
      ObfDereferenceObjectWithTag(v8, 0x47727355u);
    }
    return (unsigned int)v6;
  }
}
