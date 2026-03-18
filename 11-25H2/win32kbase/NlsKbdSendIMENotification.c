/*
 * XREFs of NlsKbdSendIMENotification @ 0x14018D8F0
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1402187C8 (NlsKbdSendIMEProc.c)
 * Callees:
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     IoControl @ 0x140216750 (IoControl.c)
 */

char __fastcall NlsKbdSendIMENotification(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax

  v2 = a2;
  v3 = a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 14072);
  if ( v4 && (*(_BYTE *)(v4 + 2) & 1) != 0 )
  {
    *(_WORD *)(W32GetUserSessionState(v6, v5) + 14320) = 0;
    *(_DWORD *)(W32GetUserSessionState(v8, v7) + 14324) = v3;
    *(_DWORD *)(W32GetUserSessionState(v10, v9) + 14328) = v2;
    if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      IoControl(4LL);
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v12, v11);
      *(_DWORD *)(UserSessionState + 12872) |= 4u;
    }
  }
  return 1;
}
