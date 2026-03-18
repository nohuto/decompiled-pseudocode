/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___ @ 0x1401CCCA4
 * Callers:
 *     ?SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401CCEE0 (-SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z @ 0x1401CDE20 (-SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z.c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822_(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v9; // rdi
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  if ( (_DWORD)a1 == (unsigned int)W32GetCurrentWin32kSessionId(a1) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    return CoreMessagingKPort::SendMessageToEndpoint(*(_QWORD *)(UserSessionState + 72168), v13, *a2);
  }
  else
  {
    v14 = 0LL;
    v7 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(v3, 1198682965LL, &v14);
    v9 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v7 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v7 >= 0 )
      {
        v7 = CoreMessagingKPort::SendMessageToEndpoint(*(_QWORD *)(v14 + 72168), v10, *a2);
        PsReleaseProcessExitSynchronization(v9);
      }
      ObfDereferenceObjectWithTag(v9, 0x47727355u);
    }
    return (unsigned int)v7;
  }
}
