/*
 * XREFs of EtwTraceDisplayReqChange @ 0x140141834
 * Callers:
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x140155368 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceDisplayReqChange(__int64 a1)
{
  char v1; // di
  __int16 v2; // cx
  char v3; // bl
  int CurrentWin32kSessionId; // eax
  int v5; // ecx
  int v6; // r8d

  v1 = a1;
  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x2000000000008000LL) != 0
    && (qword_14029EDA8 & 0x2000000000008000LL) == qword_14029EDA8 )
  {
    v2 = *(_WORD *)(W32GetUserSessionState(a1, 0x2000000000008000LL) + 68752);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v3 = v2 == 0;
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0qhq_EtwWriteTransfer(v5, (unsigned int)&DisplayReqChangeEvent, v6, CurrentWin32kSessionId, v3, v1);
    }
  }
}
